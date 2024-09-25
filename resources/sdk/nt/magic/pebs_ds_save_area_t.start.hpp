#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pebs_ds_save_area32_t), "_PEBS_DS_SAVE_AREA.As32Bit", as32_bit, 0x0, 0x0, true, 0xca442e0a7754af12)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pebs_ds_save_area64_t), "_PEBS_DS_SAVE_AREA.As64Bit", as64_bit, 0x0, 0x0, true, 0xce06d437c7b5983e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.BtsBufferBase", bts_buffer_base, 0x0, 0x0, false, 0xb78545d7be38e94f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.BtsIndex", bts_index, 0x0, 0x0, false, 0x3d23893ea484eebc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.BtsAbsoluteMaximum", bts_absolute_maximum, 0x0, 0x0, false, 0xfcb1cbffb621ba18)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.BtsInterruptThreshold", bts_interrupt_threshold, 0x0, 0x0, false, 0x23dc11c7ca72dc04)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsBufferBase", pebs_buffer_base, 0x0, 0x0, false, 0xcbc2a6710b7e2c9d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsIndex", pebs_index, 0x0, 0x0, false, 0xb293ba8ad42dc964)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsAbsoluteMaximum", pebs_absolute_maximum, 0x0, 0x0, false, 0x932df6ef8b3301cf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsInterruptThreshold", pebs_interrupt_threshold, 0x0, 0x0, false, 0x20dc7fd699b4745c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsCounterReset0", pebs_counter_reset0, 0x0, 0x0, false, 0x5e4a3cbc510e289d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsCounterReset1", pebs_counter_reset1, 0x0, 0x0, false, 0x824fed336f6f03a2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsCounterReset2", pebs_counter_reset2, 0x0, 0x0, false, 0x69d7ef076c6f20ff)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEBS_DS_SAVE_AREA.PebsCounterReset3", pebs_counter_reset3, 0x0, 0x0, false, 0x60917f54e857fef8)
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
#define _m10
#define _m11
#define _m12
#define _m13
#endif