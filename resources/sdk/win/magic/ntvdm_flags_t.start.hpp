#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwWOWCompatFlags", dw_wow_compat_flags, 0x0, 0x20, true, 0xe88776d67757bc1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwWOWCompatFlagsEx", dw_wow_compat_flags_ex, 0x20, 0x20, true, 0x6e238fb5a95aeae8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwUserWOWCompatFlags", dw_user_wow_compat_flags, 0x40, 0x20, true, 0x291a1f4c5a999783)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwWOWCompatFlags2", dw_wow_compat_flags2, 0x60, 0x20, true, 0x5a91f03666142ea7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwWOWCompatFlagsFE", dw_wow_compat_flags_fe, 0x80, 0x20, true, 0xded5950f2ff3f40f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTVDM_FLAGS.dwFlagsInfoSize", dw_flags_info_size, 0xa0, 0x20, true, 0xeed5132f81ee4435)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NTVDM_FLAGS.pFlagsInfo", p_flags_info, 0xc0, 0x40, true, 0x299ab806b94f682)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif