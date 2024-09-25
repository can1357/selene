#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_ALARM_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x8c1dd6b184597a15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0x55fb8973cc7aba3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x43a8d49b3367a1aa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_ALARM_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x6525ecdd2c404d42)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_ALARM_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x3b6cfee8b8f05f2a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x2de9daec726f3eca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif