#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0xf21fde808dbd83b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0x2d1e2142fbaa4a49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x6620088cc6027b08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x1480fbd4cc2a11f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x5586915bccdcfa9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_CALLBACK_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0xa0630930f6ffb0e0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif