#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.BtsBufferBase", bts_buffer_base, 0x0, 0x40, true, 0xad40a0274886cf65)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.BtsIndex", bts_index, 0x40, 0x40, true, 0x779d7da17ca98695)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.BtsAbsoluteMaximum", bts_absolute_maximum, 0x80, 0x40, true, 0x484b4aa0a2484c26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.BtsInterruptThreshold", bts_interrupt_threshold, 0xc0, 0x40, true, 0x3a2f034bd4e2befe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.PebsBufferBase", pebs_buffer_base, 0x100, 0x40, true, 0x778cf26afde76c07)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.PebsIndex", pebs_index, 0x140, 0x40, true, 0x9a72340069fb3e4d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.PebsAbsoluteMaximum", pebs_absolute_maximum, 0x180, 0x40, true, 0x3a7b052355b2a17a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA64.PebsInterruptThreshold", pebs_interrupt_threshold, 0x1c0, 0x40, true, 0x55143d12ce283804)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_PEBS_DS_SAVE_AREA64.PebsGpCounterReset", pebs_gp_counter_reset, 0x200, 0x0, true, 0xb7c71ff3800b7c21)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_PEBS_DS_SAVE_AREA64.PebsFixedCounterReset", pebs_fixed_counter_reset, 0x400, 0x0, true, 0x57fb6250e2a57f0)
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