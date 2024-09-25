#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IMAGE_SECURITY_CONTEXT.PageHashes", page_hashes, 0x0, 0x40, true, 0x3af3675ea9de0149)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_SECURITY_CONTEXT.Value", value, 0x0, 0x40, true, 0xce3b8f3fa537687)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_SECURITY_CONTEXT.SecurityBeingCreated", security_being_created, 0x0, 0x2, true, 0xf11105385421854d, 2, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_SECURITY_CONTEXT.SecurityMandatory", security_mandatory, 0x2, 0x1, true, 0xd1baf67537b8c012, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint61_t), "_IMAGE_SECURITY_CONTEXT.PageHashPointer", page_hash_pointer, 0x3, 0x3d, true, 0xcec95d15ac8963d0, 61, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif