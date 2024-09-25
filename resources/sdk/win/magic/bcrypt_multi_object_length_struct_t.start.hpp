#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_MULTI_OBJECT_LENGTH_STRUCT.cbPerObject", cb_per_object, 0x0, 0x20, true, 0xf531b6630a800ea1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_MULTI_OBJECT_LENGTH_STRUCT.cbPerElement", cb_per_element, 0x20, 0x20, true, 0x8d7980526eb8c4da)
#else
#define _m00
#define _m01
#endif