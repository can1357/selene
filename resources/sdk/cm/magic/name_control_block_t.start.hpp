#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_NAME_CONTROL_BLOCK.Compressed", compressed, 0x0, 0x1, true, 0xbe2d1df773852667, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_CM_NAME_CONTROL_BLOCK.RefCount", ref_count, 0x1, 0x1f, true, 0x4068bf476046ec74, 31, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::name_hash_t), "_CM_NAME_CONTROL_BLOCK.NameHash", name_hash, 0x40, 0xc0, true, 0x499f0210715f752e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::component_hash_t), "_CM_NAME_CONTROL_BLOCK.ConvKey", conv_key, 0x40, 0x20, true, 0xa5604657c4be15a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_t*), "_CM_NAME_CONTROL_BLOCK.NextHash", next_hash, 0x80, 0x40, true, 0x12c69719f1c4c87f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_NAME_CONTROL_BLOCK.NameLength", name_length, 0xc0, 0x10, true, 0x3e388a4852db610a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CM_NAME_CONTROL_BLOCK.Name", name, 0xd0, 0x10, true, 0xbf67374ecfb59f3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif