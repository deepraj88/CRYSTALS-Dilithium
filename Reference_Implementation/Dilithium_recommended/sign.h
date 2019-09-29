#ifndef SIGN_H
#define SIGN_H

#include "params.h"
#include "poly.h"
#include "polyvec.h"

void expand_mat(polyvecl mat[K], const unsigned char rho[SEEDBYTES]);
void challenge(poly *c, const unsigned char mu[CRHBYTES],
               const polyveck *w1);

int crypto_sign_keypair(unsigned char *pk, unsigned char *sk);

int crypto_sign(unsigned char sm[MLEN + CRYPTO_BYTES],
                unsigned long long smlen[1],
                const unsigned char m[MLEN],
                unsigned long long mlen,
                const unsigned char sk[CRYPTO_SECRETKEYBYTES]);


int crypto_sign_open(unsigned char m[MLEN],
                     unsigned long long mlen[1],
                     const unsigned char sm[MLEN + CRYPTO_BYTES],
                     unsigned long long smlen,
                     const unsigned char pk[CRYPTO_PUBLICKEYBYTES]);


#endif
