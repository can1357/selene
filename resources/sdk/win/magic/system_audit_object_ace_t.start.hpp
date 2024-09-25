#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_AUDIT_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x56af54d6980a6209)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0xa5541f4e991aeee3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x98473a56c474c75f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_AUDIT_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0x43aa3c7c954a61d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_AUDIT_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x7310aab3305fe47d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x1a1e69ad00f95974)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif