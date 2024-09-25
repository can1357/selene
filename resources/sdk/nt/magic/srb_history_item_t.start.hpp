#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SRB_HISTORY_ITEM.TickCountSent", tick_count_sent, 0x0, 0x40, true, 0x3414d03506adb988)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SRB_HISTORY_ITEM.TickCountCompleted", tick_count_completed, 0x40, 0x40, true, 0x9c2544a4905ddba8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_HISTORY_ITEM.MillisecondsDelayOnRetry", milliseconds_delay_on_retry, 0x80, 0x20, true, 0xa9fae4d471da45a7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::sense_data_t), "_SRB_HISTORY_ITEM.NormalizedSenseData", normalized_sense_data, 0xa0, 0x90, true, 0x368e0a699a7460cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRB_HISTORY_ITEM.SrbStatus", srb_status, 0x130, 0x8, true, 0x160d4ddd0345ab94)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRB_HISTORY_ITEM.ClassDriverUse", class_driver_use, 0x138, 0x8, true, 0xbb110a10f3a0bafe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif