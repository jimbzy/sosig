/*
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE.txt', which is part of this source code package.
 */

#include <string.h>

void *memcpy(void* restrict dstptr, const void* restrict srcptr, unsigned int size) {
	unsigned char* dst = (unsigned char*) dstptr;
	const unsigned char* src = (const unsigned char*) srcptr;
	for (unsigned int i = 0; i < size; i++)
		dst[i] = src[i];
	return dstptr;
}
