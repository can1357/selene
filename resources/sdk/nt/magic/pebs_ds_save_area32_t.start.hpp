#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.BtsBufferBase", bts_buffer_base, 0x0, 0x20, true, 0xaf1b26929ec6683a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.BtsIndex", bts_index, 0x20, 0x20, true, 0x89eabbc7aa7fce0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.BtsAbsoluteMaximum", bts_absolute_maximum, 0x40, 0x20, true, 0x725baa26a0a4d117)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.BtsInterruptThreshold", bts_interrupt_threshold, 0x60, 0x20, true, 0x61729c46bd7f7b3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.PebsBufferBase", pebs_buffer_base, 0x80, 0x20, true, 0x25ecf5ceb7f1bc6d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.PebsIndex", pebs_index, 0xa0, 0x20, true, 0x2c890a2f0da820a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.PebsAbsoluteMaximum", pebs_absolute_maximum, 0xc0, 0x20, true, 0x915476b1ed6023aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEBS_DS_SAVE_AREA32.PebsInterruptThreshold", pebs_interrupt_threshold, 0xe0, 0x20, true, 0xa4577449cdaf6e3d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_PEBS_DS_SAVE_AREA32.PebsGpCounterReset", pebs_gp_counter_reset, 0x100, 0x0, true, 0x8b72966636781e5a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_PEBS_DS_SAVE_AREA32.PebsFixedCounterReset", pebs_fixed_counter_reset, 0x300, 0x0, true, 0x7ecc56151f5e6cc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif