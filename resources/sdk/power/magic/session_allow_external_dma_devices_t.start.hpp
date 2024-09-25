#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES.IsAllowed", is_allowed, 0x0, 0x8, true, 0xd5f185e5373451ff)
#else
#define _m00
#endif