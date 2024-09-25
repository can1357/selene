#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::trustlet_attribute_header_t), "_PS_TRUSTLET_ATTRIBUTE_DATA.Header", header, 0x0, 0x40, true, 0x82ba8843506f1f1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_PS_TRUSTLET_ATTRIBUTE_DATA.Data", data, 0x40, 0x40, true, 0x4054ec419a30384)
#else
#define _m00
#define _m01
#endif