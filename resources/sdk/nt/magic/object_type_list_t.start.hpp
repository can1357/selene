#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_LIST.Level", level, 0x0, 0x10, true, 0xa7d0f5cc61c8828a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_TYPE_LIST.Sbz", sbz, 0x10, 0x10, true, 0xa94e9553d8e3a885)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_OBJECT_TYPE_LIST.ObjectType", object_type, 0x40, 0x40, true, 0x42b92962ee340d91)
#else
#define _m00
#define _m01
#define _m02
#endif