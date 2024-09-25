#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_ENCRYPTED_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x7c265e5abcd53b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_ENCRYPTED_ENCODE_INFO.ContentEncryptionAlgorithm", content_encryption_algorithm, 0x40, 0xc0, true, 0x48277c67a3463853)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_ENCRYPTED_ENCODE_INFO.pvEncryptionAuxInfo", pv_encryption_aux_info, 0x100, 0x40, true, 0xf5dd1e450f4361e3)
#else
#define _m00
#define _m01
#define _m02
#endif