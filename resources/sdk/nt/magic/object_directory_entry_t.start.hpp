#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_entry_t*), "_OBJECT_DIRECTORY_ENTRY.ChainLink", chain_link, 0x0, 0x40, true, 0x9dc8441efb85283d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_DIRECTORY_ENTRY.Object", object, 0x40, 0x40, true, 0x8d9a2c37e4d468b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_DIRECTORY_ENTRY.HashValue", hash_value, 0x80, 0x20, true, 0x9c572be836c7b78)
#else
#define _m00
#define _m01
#define _m02
#endif