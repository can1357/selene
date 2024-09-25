#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SE_ADT_OBJECT_TYPE.ObjectType", object_type, 0x0, 0x80, true, 0x8695f31409540c48)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_OBJECT_TYPE.Flags", flags, 0x80, 0x10, true, 0xd9ea4bd5a9cfc950)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_OBJECT_TYPE.Level", level, 0x90, 0x10, true, 0x29117d74fa5a37fc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_OBJECT_TYPE.AccessMask", access_mask, 0xa0, 0x20, true, 0xc9c4366fec4ce9c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif