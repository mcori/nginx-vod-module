#ifndef __HLS_ENCRYPTION_H__
#define __HLS_ENCRYPTION_H__

// includes
#include "../common.h"

// typedefs
typedef enum {
	HLS_ENC_NONE,
	HLS_ENC_AES_128,
	HLS_ENC_SAMPLE_AES,
} hls_encryption_type_t;

typedef struct {
	hls_encryption_type_t type;
	u_char* key;
	u_char* iv;
} hls_encryption_params_t;

#endif // __HLS_ENCRYPTION_H__
