#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_LBR_SUPPORT.LbrHandle", lbr_handle, 0x0, 0x20, true, 0x5edfdf9240d7d1e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_LBR_SUPPORT.LbrOptions", lbr_options, 0x20, 0x20, true, 0x2652cf8fb1513dbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ETW_LBR_SUPPORT.HookIdCount", hook_id_count, 0x40, 0x20, true, 0xcfeffb652c4b78f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_ETW_LBR_SUPPORT.HookId", hook_id, 0x60, 0x40, true, 0x8cfc219cd00490f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif