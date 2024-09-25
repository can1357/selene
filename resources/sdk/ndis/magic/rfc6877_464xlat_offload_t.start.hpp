#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::rfc6877_464xlat_offload_options_t), "_NDIS_RFC6877_464XLAT_OFFLOAD.XlatOffload", xlat_offload, 0x0, 0x20, true, 0x7a336cee71ab4dd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RFC6877_464XLAT_OFFLOAD.Flags", flags, 0x20, 0x20, true, 0xf2513ab6a776c82b)
#else
#define _m00
#define _m01
#endif