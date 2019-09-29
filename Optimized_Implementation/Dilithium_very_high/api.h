#ifndef API_H
#define API_H

#define CRYPTO_PUBLICKEYBYTES 1760U
#define CRYPTO_SECRETKEYBYTES 3856U
#define CRYPTO_BYTES 3366U
#define MLEN 3400

#define CRYPTO_ALGNAME "Dilithium_very_high"

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
