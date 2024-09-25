#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::configuration_class_t), "_CONFIGURATION_COMPONENT.Class", _class, 0x0, 0x20, true, 0x517f82aa78b172eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::configuration_type_t), "_CONFIGURATION_COMPONENT.Type", type, 0x20, 0x20, true, 0x77f7fcfe68d29151)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_flags_t), "_CONFIGURATION_COMPONENT.Flags", flags, 0x40, 0x20, true, 0xaf47943ff5347cd9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONFIGURATION_COMPONENT.Version", version, 0x60, 0x10, true, 0xb7cd746ee21220e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONFIGURATION_COMPONENT.Revision", revision, 0x70, 0x10, true, 0x37c500181fb4a5c3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_COMPONENT.Key", key, 0x80, 0x20, true, 0xf4c5893f7695d9ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_COMPONENT.AffinityMask", affinity_mask, 0xa0, 0x20, true, 0xade44e8fbd5f953b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONFIGURATION_COMPONENT.Group", group, 0xa0, 0x10, true, 0x509985470615f03b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONFIGURATION_COMPONENT.GroupIndex", group_index, 0xb0, 0x10, true, 0x542ab86f11e0f004)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_COMPONENT.ConfigurationDataLength", configuration_data_length, 0xc0, 0x20, true, 0xfdaf6e928ad72e02)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_COMPONENT.IdentifierLength", identifier_length, 0xe0, 0x20, true, 0xe036698c55601b67)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CONFIGURATION_COMPONENT.Identifier", identifier, 0x100, 0x40, true, 0xc83cc85978dd66c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif