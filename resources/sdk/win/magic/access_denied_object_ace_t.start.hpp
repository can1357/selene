#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_DENIED_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x97588fc57402091d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0xcf31d7be5e6e771e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0x449276bca4457742)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_DENIED_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0xc6015dd6bfc3086a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_DENIED_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0x73042e3ce7d7df5f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0xc8092d87b8457f8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif