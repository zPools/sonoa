// Copyright (c) 2018 Michael Smolinski aka zPools
// The SonoA algorithm was designed for ProjectSONO (P r o j e c t  S O N O) as approach to deliver a fast but secure
// algorithm that fits well for a 30sec block time. In addition, the goal was an algo that is not (yet) mineable by
// ASIC/FPGA or CloudHashing Services like Nicehash. Thats nothing personal, but its fair for small miners.
// A special thank you goes to Carsen from Denarius, who is my inspiration
// You are free to use SonoA for your own currencies/projects but dont remove or edit this 6 lines header.

#ifndef HASHBLOCK_H
#define HASHBLOCK_H

#include "uint256.h"
#include "obj/sonoA/sph_skein.h"
#include "obj/sonoA/sph_echo.h"
#include "obj/sonoA/sph_fugue.h"
#include "obj/sonoA/sph_gost.h"
#include "obj/sonoA/raptor.h"
#include "obj/sonoA/sph_bmw.h"
#include "obj/sonoA/sph_jh.h"
#include "obj/sonoA/sph_keccak.h"


#ifndef QT_NO_DEBUG
#include <string>
#endif

#ifdef GLOBALDEFINED
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL sph_echo512_context      z_echo;
GLOBAL sph_skein512_context     z_skein;
GLOBAL sph_fugue512_context     z_fugue;
GLOBAL sph_gost512_context      z_gost;
GLOBAL sph_bmw512_context       z_bmw;
GLOBAL sph_jh512_context        z_jh;
GLOBAL sph_keccak512_context    z_keccak;

#define fillz() do { \
    sph_echo512_init(&z_echo); \
    sph_skein512_init(&z_skein); \
    sph_fugue512_init(&z_fugue); \
    sph_gost512_init(&z_gost); \
    sph_bmw512_init(&z_bmw); \
    sph_jh512_init(&z_jh); \
    sph_keccak512_init(&z_keccak);\
} while (0)

#define ZECHO (memcpy(&ctx_echo, &z_echo, sizeof(z_echo)))
#define ZSKEIN (memcpy(&ctx_skein, &z_skein, sizeof(z_skein)))
#define ZFUGUE (memcpy(&ctx_fugue, &z_fugue, sizeof(z_fugue)))
#define ZGOST (memcpy(&ctx_gost, &z_gost, sizeof(z_gost)))
#define ZBMW (memcpy(&ctx_bmw, &z_bmw, sizeof(z_bmw)))
#define ZJH (memcpy(&ctx_jh, &z_jh, sizeof(z_jh)))

template<typename T1>
inline uint256 SonoA(const T1 pbegin, const T1 pend)

{
    sph_echo512_context         ctx_echo;
    sph_skein512_context        ctx_skein;
    sph_fugue512_context        ctx_fugue;
    sph_gost512_context         ctx_gost;
    sph_bmw512_context          ctx_bmw;
    sph_jh512_context           ctx_jh;
    sph_keccak512_context       ctx_keccak;

    static unsigned char pblank[1];

#ifndef QT_NO_DEBUG
    //std::string strhash;
    //strhash = "";
#endif

    uint512 hash[17];

    sph_echo512_init(&ctx_echo);
    sph_echo512 (&ctx_echo, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[0]));

    sph_skein512_init(&ctx_skein);
    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[0]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[1]));

    sph_fugue512_init(&ctx_fugue);
    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[1]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[2]));

    sph_gost512_init(&ctx_gost);
    sph_gost512 (&ctx_gost, static_cast<const void*>(&hash[2]), 64);
    sph_gost512_close(&ctx_gost, static_cast<void*>(&hash[3]));

    sph_bmw512_init(&ctx_bmw);
    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[3]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[4]));

    sph_jh512_init(&ctx_jh);
    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[4]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[5]));

    sph_keccak512_init(&ctx_keccak);
    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[5]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[6]));


    return hash[6].trim256();
}

#endif // HASHBLOCK_H
