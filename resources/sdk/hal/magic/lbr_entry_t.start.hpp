#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HAL_LBR_ENTRY.FromAddress", from_address, 0x0, 0x40, true, 0x442e42f887a2ffcb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HAL_LBR_ENTRY.ToAddress", to_address, 0x40, 0x40, true, 0x8e1e9e81e2814905)
#else
#define _m00
#define _m01
#endif