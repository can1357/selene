#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_MULTI_HASH_OPERATION.iHash", i_hash, 0x0, 0x20, true, 0x5f9c34c98ae65f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::bcrypt_hash_operation_type_t), "_BCRYPT_MULTI_HASH_OPERATION.hashOperation", hash_operation, 0x20, 0x20, true, 0xcfd6c3a6a6aef5b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_MULTI_HASH_OPERATION.pbBuffer", pb_buffer, 0x40, 0x40, true, 0x3bfe4474ca277333)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_MULTI_HASH_OPERATION.cbBuffer", cb_buffer, 0x80, 0x20, true, 0x2a892845ca2d52b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif