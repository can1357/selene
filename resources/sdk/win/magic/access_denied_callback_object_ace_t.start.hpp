#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x7be1de295529fd56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0x997f3faa7f1c292e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0xf96141415abf5bc8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x9d80d65b34d545a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x5d728f91b73f236d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_CALLBACK_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x9e7b5e4f5ee600da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif