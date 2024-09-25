#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_POLICY.Version", version, 0x0, 0x20, true, 0x31c0265c275adda1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_POLICY.Size", size, 0x20, 0x20, true, 0xaba62349f4809dfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_POLICY.Flags", flags, 0x40, 0x20, true, 0x779f208afea28da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_POLICY.MaxSaveAreaLength", max_save_area_length, 0x60, 0x20, true, 0x57e2ba5841f7f9af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSAVE_POLICY.FeatureBitmask", feature_bitmask, 0x80, 0x40, true, 0x8e529da5617884f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSAVE_POLICY.NumberOfFeatures", number_of_features, 0xc0, 0x20, true, 0x94cb5d4e4802f348)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::xsave_feature_t, 1>), "_XSAVE_POLICY.Features", features, 0x100, 0x80, true, 0x4902b80be6d9c1b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif