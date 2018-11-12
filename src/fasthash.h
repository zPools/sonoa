// SHA for Masternode score calculation. It´s way faster than SonoA on CPU, so the load should be reduced
#ifndef HASHFAST_H
#define HASHFAST_H

#include "uint256.h"
#include "SonoA/sph_sha2.h"

template<typename T1>
inline uint256 fasthash(const T1 pbegin, const T1 pend)
{
    sph_sha512_context ctx_sha2;
    static unsigned char pblank[1];
    uint256 hash;

    sph_sha512_init(&ctx_sha2);
    sph_sha512 (&ctx_sha2, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_sha512_close(&ctx_sha2, static_cast<void*>(&hash));

    return hash;
}

#endif
