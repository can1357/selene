#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_TRUSTLET_ATTRIBUTE_TYPE.Version", version, 0x0, 0x8, true, 0x1c9b674360088e7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_TRUSTLET_ATTRIBUTE_TYPE.DataCount", data_count, 0x8, 0x8, true, 0x786974c2c5b7dd5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_TRUSTLET_ATTRIBUTE_TYPE.SemanticType", semantic_type, 0x10, 0x8, true, 0x7dd55ae97c0c0efe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ps::trustlet_attribute_accessrights_t), "_PS_TRUSTLET_ATTRIBUTE_TYPE.AccessRights", access_rights, 0x18, 0x8, true, 0x766c57fb8f06d5f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_TRUSTLET_ATTRIBUTE_TYPE.AttributeType", attribute_type, 0x0, 0x20, true, 0x1f10b0eac2339dfb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif