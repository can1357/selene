#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_LEGACY_PERFSTATE.Frequency", frequency, 0x0, 0x20, true, 0x9971548b3d57cccb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_LEGACY_PERFSTATE.Flags", flags, 0x20, 0x20, true, 0x14c7aacc92162462)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_WMI_LEGACY_PERFSTATE.PercentFrequency", percent_frequency, 0x40, 0x20, true, 0xc64e67c16a2b63f7)
#else
#define _m00
#define _m01
#define _m02
#endif