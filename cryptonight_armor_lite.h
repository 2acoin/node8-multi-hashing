#ifndef CRYPTONIGHTARMORLITE_H
#define CRYPTONIGHTARMORLITE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void cryptonightarmorlite_hash(const char* input, char* output, uint32_t len, int variant);
void cryptonightarmorlite_fast_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
