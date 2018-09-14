// SHA3 (Keccak) for Masternode score calculation. It´s way faster than SonoA on CPU, so the load should be reduced
#ifndef HASHFAST_H
#define HASHFAST_H

#include "uint256.h"
#include "SonoA/sph_keccak.h"

template<typename T1>
inline uint256 fasthash(const T1 pbegin, const T1 pend)
{
    sph_keccak256_context ctx_keccak;
    static unsigned char pblank[1];
    uint256 hash;

    sph_keccak256_init(&ctx_keccak);
    sph_keccak256 (&ctx_keccak, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_keccak256_close(&ctx_keccak, static_cast<void*>(&hash));

    return hash;
}

#endif
