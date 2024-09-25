#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSM_FLAGS.SubSmFlagsAsUlong", sub_sm_flags_as_ulong, 0x0, 0x20, true, 0x5c4f7389da903491)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::hidsm_subsm_flags_t), "_SUBSM_FLAGS.HidsmSubSmFlags", hidsm_sub_sm_flags, 0x0, 0x20, true, 0xf4587617937a6b35)
#else
#define _m00
#define _m01
#endif