// Blake for Masternode score calculation. It´s way faster than SonoA on CPU, so the load should be reduced
#ifndef FASTHASH_H
#define FASTHASH_H

#include "uint256.h"
#include "SonoA/sph_blake.h"

template<typename T1>
inline uint256 fasthash(const T1 pbegin, const T1 pend)
{
    sph_blake512_context ctx_blake;
    static unsigned char pblank[1];
    uint256 hash;

    sph_blake512_init(&ctx_blake);
    sph_blake512 (&ctx_blake, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_blake512_close(&ctx_blake, static_cast<void*>(&hash));

    return hash;
}

#endif
