#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR32.Flags", flags, 0x0, 0x20, true, 0x2c5bebba4f48f0b2)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR32.SameAccess", same_access, 0x10, 0x1, true, 0xab19333daf8879b, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR32.SameAttributes", same_attributes, 0x11, 0x1, true, 0xd6540689544d82cf, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR32.Indirect", indirect, 0x12, 0x1, true, 0xab51a33224dc9473, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR32.Inherit", inherit, 0x13, 0x1, true, 0xb482647ebb8e7ff5, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR32.Handle", handle, 0x20, 0x20, true, 0x8e167a786030811e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR32.ObjectType", object_type, 0x40, 0x20, true, 0x23e6cd67a7d95a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR32.DesiredAccess", desired_access, 0x60, 0x20, true, 0x917f0ffc3f594403)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR32.GrantedAccess", granted_access, 0x60, 0x20, true, 0x95a5243b8f79813f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif