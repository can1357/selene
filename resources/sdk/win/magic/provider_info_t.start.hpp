#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pqueryhandler_t ), "provider_info.pi_R0_1val", pi_r0_1val, 0x0, 0x40, true, 0x3a67608d53ee189c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pqueryhandler_t ), "provider_info.pi_R0_allvals", pi_r0_allvals, 0x40, 0x40, true, 0x82d0512d51251e4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pqueryhandler_t ), "provider_info.pi_R3_1val", pi_r3_1val, 0x80, 0x40, true, 0xa383766e936d3d7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pqueryhandler_t ), "provider_info.pi_R3_allvals", pi_r3_allvals, 0xc0, 0x40, true, 0x1df10406ad1d4aa6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "provider_info.pi_flags", pi_flags, 0x100, 0x20, true, 0x2607f4bb9bdba6bb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "provider_info.pi_key_context", pi_key_context, 0x140, 0x40, true, 0xb9d4eb3cff93c880)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif