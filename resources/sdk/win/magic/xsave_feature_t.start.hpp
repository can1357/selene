#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_FEATURE.FeatureId", feature_id, 0x0, 0x20, true, 0xf738fd2118bce153)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::xsave_vendors_t*), "_XSAVE_FEATURE.Vendors", vendors, 0x40, 0x40, true, 0xce6b31096535c10d)
#else
#define _m00
#define _m01
#endif