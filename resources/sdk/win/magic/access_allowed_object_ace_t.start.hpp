#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_ALLOWED_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x763545fe565a9673)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0x1077e7821b00d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x3af548fdbb56f2ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_ALLOWED_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x4969cc022002d706)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_ALLOWED_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0xfdbf1479a1c5016d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x5d7600c88f2d13b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif