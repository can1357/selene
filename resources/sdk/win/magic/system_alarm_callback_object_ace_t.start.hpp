#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x6a48fa881c28ccca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0xa8a9ecb93da9febd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x10124141b198bbfd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x2d0d3ed0f4893310)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x1ceabce15f06d0da)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_CALLBACK_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x3c8a0c49e7771f75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif