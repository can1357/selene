#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DEBUG_PRINT_EVENT.Component", component, 0x0, 0x20, true, 0x61a0cd2ebe6f4739)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DEBUG_PRINT_EVENT.Level", level, 0x20, 0x20, true, 0xaf1a93fe97a63c54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_ETW_DEBUG_PRINT_EVENT.Message", message, 0x40, 0x8, true, 0x8e9d38e461e2c0dd)
#else
#define _m00
#define _m01
#define _m02
#endif