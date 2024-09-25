#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_TRUSTLET_CREATE_ATTRIBUTES.TrustletIdentity", trustlet_identity, 0x0, 0x40, true, 0xff8c92ef76ff570a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ps::trustlet_attribute_data_t, 1>), "_PS_TRUSTLET_CREATE_ATTRIBUTES.Attributes", attributes, 0x40, 0x80, true, 0x36c4da14281d7d42)
#else
#define _m00
#define _m01
#endif