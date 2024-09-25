#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR.Flags", flags, 0x0, 0x20, true, 0xf00fc8255960a688)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR.SameAccess", same_access, 0x10, 0x1, true, 0xfe6af812cadb8605, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR.SameAttributes", same_attributes, 0x11, 0x1, true, 0x2ec9e5e234eb9986, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR.Indirect", indirect, 0x12, 0x1, true, 0xdd14a66d9242845a, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ALPC_HANDLE_ATTR.Inherit", inherit, 0x13, 0x1, true, 0xfc49aae37b2d1db8, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_HANDLE_ATTR.Handle", handle, 0x40, 0x40, true, 0xe438bb3b76116056)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_attr32_t*), "_ALPC_HANDLE_ATTR.HandleAttrArray", handle_attr_array, 0x40, 0x40, true, 0x377940044201fa09)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR.ObjectType", object_type, 0x80, 0x20, true, 0x187544e2c541dd06)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR.HandleCount", handle_count, 0x80, 0x20, true, 0x641771db8c7e902e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR.DesiredAccess", desired_access, 0xa0, 0x20, true, 0x38e23e2cae18b5c4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_ATTR.GrantedAccess", granted_access, 0xa0, 0x20, true, 0x4ac35b3bf3a988f9)
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
#define _m09
#define _m10
#endif