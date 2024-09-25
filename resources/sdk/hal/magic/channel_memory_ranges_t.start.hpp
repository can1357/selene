#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_CHANNEL_MEMORY_RANGES.PageFrameIndex", page_frame_index, 0x0, 0x40, true, 0xcf5fd039b98188a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_CHANNEL_MEMORY_RANGES.MpnId", mpn_id, 0x40, 0x10, true, 0xb6dddf583eb56e57)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_CHANNEL_MEMORY_RANGES.Node", node, 0x50, 0x10, true, 0x84c4fabf3d72f591)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_CHANNEL_MEMORY_RANGES.Channel", channel, 0x60, 0x10, true, 0x245e43357bc69814)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_CHANNEL_MEMORY_RANGES.IsPowerManageable", is_power_manageable, 0x70, 0x8, true, 0xe756ae916766c9b3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_CHANNEL_MEMORY_RANGES.DeepPowerState", deep_power_state, 0x78, 0x8, true, 0x62b8c745efc62f6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif