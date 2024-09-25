#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.BlockWin32kSystemCalls", block_win32k_system_calls, 0x0, 0x40, true, 0x3c358b858c1483ef)
#else
#define _m00
#endif