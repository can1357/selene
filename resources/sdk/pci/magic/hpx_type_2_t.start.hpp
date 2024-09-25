#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.UncorrectableErrorMask", uncorrectable_error_mask, 0x0, 0x40, true, 0x5e9775ec41fc09c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.UncorrectableErrorSeverity", uncorrectable_error_severity, 0x40, 0x40, true, 0x56b883dc877dc124)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.CorrectableErrorMask", correctable_error_mask, 0x80, 0x40, true, 0xc1ddfc8a52b6663f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.CapabilitiesAndControl", capabilities_and_control, 0xc0, 0x40, true, 0x90a68c351040c10d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.DeviceControl", device_control, 0x100, 0x40, true, 0xafe3ba3ee8d85fcf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.LinkControl", link_control, 0x140, 0x40, true, 0x8f0e43785706f5d1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.SecUncorrectableErrorSeverity", sec_uncorrectable_error_severity, 0x180, 0x40, true, 0xac46ac87a31a4fd8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HPX_TYPE_2.SecUncorrectableErrorMask", sec_uncorrectable_error_mask, 0x1c0, 0x40, true, 0x3b1fe2113eb35c71)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif