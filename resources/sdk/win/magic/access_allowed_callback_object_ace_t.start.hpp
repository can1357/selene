#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.Header", header, 0x0, 0x20, true, 0x36bdbf6b0b6e9d12)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.Mask", mask, 0x20, 0x20, true, 0x9deb8f91866ccddc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.Flags", flags, 0x40, 0x20, true, 0xce36aac432c70690)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.ObjectType", object_type, 0x60, 0x80, true, 0xe9096c65728e89f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.InheritedObjectType", inherited_object_type, 0xe0, 0x80, true, 0xea87956afee02c13)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_CALLBACK_OBJECT_ACE.SidStart", sid_start, 0x160, 0x20, true, 0x73bd2cf4816c6305)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif