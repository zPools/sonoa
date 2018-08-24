//The SonoA (x97) algo by zPools

#ifndef HASHBLOCK_H
#define HASHBLOCK_H

#include "uint256.h"
#include "SonoA/sph_blake.h"
#include "SonoA/sph_bmw.h"
#include "SonoA/sph_groestl.h"
#include "SonoA/sph_jh.h"
#include "SonoA/sph_keccak.h"
#include "SonoA/sph_skein.h"
#include "SonoA/sph_luffa.h"
#include "SonoA/sph_cubehash.h"
#include "SonoA/sph_shavite.h"
#include "SonoA/sph_simd.h"
#include "SonoA/sph_echo.h"
#include "SonoA/sph_hamsi.h"
#include "SonoA/sph_fugue.h"
#include "SonoA/sph_shabal.h"
#include "SonoA/sph_whirlpool.h"
#include "SonoA/sph_sha2.h"
#include "SonoA/sph_haval.h"

#ifndef QT_NO_DEBUG
#include <string>
#endif

#ifdef GLOBALDEFINED
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL sph_blake512_context     z_blake;
GLOBAL sph_bmw512_context       z_bmw;
GLOBAL sph_groestl512_context   z_groestl;
GLOBAL sph_jh512_context        z_jh;
GLOBAL sph_keccak512_context    z_keccak;
GLOBAL sph_skein512_context     z_skein;
GLOBAL sph_luffa512_context     z_luffa;
GLOBAL sph_cubehash512_context  z_cubehash;
GLOBAL sph_shavite512_context   z_shavite;
GLOBAL sph_simd512_context      z_simd;
GLOBAL sph_echo512_context      z_echo;
GLOBAL sph_hamsi512_context     z_hamsi;
GLOBAL sph_fugue512_context     z_fugue;
GLOBAL sph_shabal512_context    z_shabal;
GLOBAL sph_whirlpool_context    z_whirlpool;
GLOBAL sph_sha512_context       z_sha2;
GLOBAL sph_haval256_5_context   z_haval;

#define fillz() do { \
    sph_blake512_init(&z_blake); \
    sph_bmw512_init(&z_bmw); \
    sph_groestl512_init(&z_groestl); \
    sph_jh512_init(&z_jh); \
    sph_keccak512_init(&z_keccak); \
    sph_skein512_init(&z_skein); \
    sph_luffa512_init(&z_luffa); \
    sph_cubehash512_init(&z_cubehash); \
    sph_shavite512_init(&z_shavite); \
    sph_simd512_init(&z_simd); \
    sph_echo512_init(&z_echo); \
    sph_hamsi512_init(&z_hamsi); \
    sph_fugue512_init(&z_fugue); \
    sph_shabal512_init(&z_shabal); \
    sph_whirlpool_init(&z_whirlpool); \
    sph_sha512_init(&z_sha2); \
    sph_haval256_5_init(&z_haval); \
} while (0)

#define ZBLAKE (memcpy(&ctx_blake, &z_blake, sizeof(z_blake)))
#define ZBMW (memcpy(&ctx_bmw, &z_bmw, sizeof(z_bmw)))
#define ZGROESTL (memcpy(&ctx_groestl, &z_groestl, sizeof(z_groestl)))
#define ZJH (memcpy(&ctx_jh, &z_jh, sizeof(z_jh)))
#define ZKECCAK (memcpy(&ctx_keccak, &z_keccak, sizeof(z_keccak)))
#define ZSKEIN (memcpy(&ctx_skein, &z_skein, sizeof(z_skein)))
#define ZHAMSI (memcpy(&ctx_hamsi, &z_hamsi, sizeof(z_hamsi)))
#define ZFUGUE (memcpy(&ctx_fugue, &z_fugue, sizeof(z_fugue)))
#define ZSHABAL (memcpy(&ctx_shabal, &z_shabal, sizeof(z_shabal)))
#define ZWHIRLPOOL (memcpy(&ctx_whirlpool, &z_whirlpool, sizeof(z_whirlpool)))
#define ZSHA2 (memcpy(&ctx_sha2, &z_sha2, sizeof(z_sha2)))
#define ZHAVAL (memcpy(&ctx_haval, &z_haval, sizeof(z_haval)))

template<typename T1>
inline uint256 SonoA(const T1 pbegin, const T1 pend)
{
    sph_blake512_context      ctx_blake;
    sph_bmw512_context        ctx_bmw;
    sph_groestl512_context    ctx_groestl;
    sph_jh512_context         ctx_jh;
    sph_keccak512_context     ctx_keccak;
    sph_skein512_context      ctx_skein;
    sph_luffa512_context      ctx_luffa;
    sph_cubehash512_context   ctx_cubehash;
    sph_shavite512_context    ctx_shavite;
    sph_simd512_context       ctx_simd;
    sph_echo512_context       ctx_echo;
    sph_hamsi512_context      ctx_hamsi;
    sph_fugue512_context      ctx_fugue;
    sph_shabal512_context     ctx_shabal;
    sph_whirlpool_context     ctx_whirlpool;
    sph_sha512_context        ctx_sha2;
    sph_haval256_5_context    ctx_haval;

    static unsigned char pblank[1];

    uint512 hash[97];

    sph_blake512_init(&ctx_blake);
    sph_blake512 (&ctx_blake, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[0]));

    sph_bmw512_init(&ctx_bmw);
    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[0]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[1]));

    sph_groestl512_init(&ctx_groestl);
    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[1]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[2]));

    sph_skein512_init(&ctx_skein);
    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[2]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[3]));

    sph_jh512_init(&ctx_jh);
    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[3]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[4]));

    sph_keccak512_init(&ctx_keccak);
    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[4]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[5]));

    sph_luffa512_init(&ctx_luffa);
    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[5]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[6]));

    sph_cubehash512_init(&ctx_cubehash);
    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[6]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[7]));

    sph_shavite512_init(&ctx_shavite);
    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[7]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[8]));

    sph_simd512_init(&ctx_simd);
    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[8]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[9]));

    sph_echo512_init(&ctx_echo);
    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[9]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[10]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[10]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[11]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[11]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[12]));

    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[12]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[13]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[13]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[14]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[14]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[15]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[15]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[16]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[16]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[17]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[17]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[18]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[18]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[19]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[19]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[20]));

    sph_hamsi512_init(&ctx_hamsi);
    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[20]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[21]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[21]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[22]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[22]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[23]));

    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[23]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[24]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[24]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[25]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[25]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[26]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[26]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[27]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[27]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[28]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[28]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[29]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[29]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[30]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[30]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[31]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[31]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[32]));

    sph_fugue512_init(&ctx_fugue);
    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[32]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[33]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[33]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[34]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[34]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[35]));

    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[35]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[36]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[36]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[37]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[37]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[38]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[38]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[39]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[39]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[40]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[40]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[41]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[41]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[42]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[42]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[43]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[43]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[44]));

    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[44]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[45]));

    sph_shabal512_init(&ctx_shabal);
    sph_shabal512 (&ctx_shabal, static_cast<const void*>(&hash[45]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[46]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[46]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[47]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[47]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[48]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[48]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[49]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[49]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[50]));

    sph_shabal512 (&ctx_shabal, static_cast<const void*>(&hash[50]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[51]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[51]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[52]));

    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[52]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[53]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[53]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[54]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[54]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[55]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[55]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[56]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[56]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[57]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[57]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[58]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[58]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[59]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[59]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[60]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[60]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[61]));

    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[61]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[62]));

    sph_shabal512 (&ctx_shabal, static_cast<const void*>(&hash[62]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[63]));

    sph_whirlpool_init(&ctx_whirlpool);
    sph_whirlpool (&ctx_whirlpool, static_cast<const void*>(&hash[63]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[64]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[64]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[65]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[65]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[66]));

    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[66]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[67]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[67]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[68]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[68]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[69]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[69]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[70]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[70]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[71]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[71]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[72]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[72]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[73]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[73]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[74]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[74]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[75]));

    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[75]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[76]));

    sph_shabal512 (&ctx_shabal, static_cast<const void*>(&hash[76]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[77]));

    sph_whirlpool (&ctx_whirlpool, static_cast<const void*>(&hash[77]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[78]));

    sph_sha512_init(&ctx_sha2);
    sph_sha512 (&ctx_sha2, static_cast<const void*>(&hash[78]), 64);
    sph_sha512_close(&ctx_sha2, static_cast<void*>(&hash[79]));

    sph_whirlpool (&ctx_whirlpool, static_cast<const void*>(&hash[79]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[80]));

    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[80]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[81]));

    sph_groestl512 (&ctx_groestl, static_cast<const void*>(&hash[81]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[82]));


    sph_skein512 (&ctx_skein, static_cast<const void*>(&hash[82]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[83]));

    sph_jh512 (&ctx_jh, static_cast<const void*>(&hash[83]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[84]));

    sph_keccak512 (&ctx_keccak, static_cast<const void*>(&hash[84]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[85]));

    sph_luffa512 (&ctx_luffa, static_cast<void*>(&hash[85]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[86]));

    sph_cubehash512 (&ctx_cubehash, static_cast<const void*>(&hash[86]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[87]));

    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[87]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[88]));

    sph_simd512 (&ctx_simd, static_cast<const void*>(&hash[88]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[89]));

    sph_echo512 (&ctx_echo, static_cast<const void*>(&hash[89]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[90]));

    sph_hamsi512 (&ctx_hamsi, static_cast<const void*>(&hash[90]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[91]));

    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[91]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[92]));

    sph_shabal512 (&ctx_shabal, static_cast<const void*>(&hash[92]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[93]));

    sph_whirlpool (&ctx_whirlpool, static_cast<const void*>(&hash[93]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[94]));

    sph_sha512 (&ctx_sha2, static_cast<const void*>(&hash[94]), 64);
    sph_sha512_close(&ctx_sha2, static_cast<void*>(&hash[95]));

    sph_haval256_5_init(&ctx_haval);
    sph_haval256_5 (&ctx_haval, static_cast<const void*>(&hash[95]), 64);
    sph_haval256_5_close(&ctx_haval, static_cast<void*>(&hash[96]));

return hash[96].trim256();
}

#endif // HASHBLOCK_H
