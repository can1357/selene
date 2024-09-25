#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NOTIFICATION_FLAGS.PollIntervalRW", poll_interval_rw, 0x0, 0x1, true, 0xa434cf5dcb2437db, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NOTIFICATION_FLAGS.SwitchToPollingThresholdRW", switch_to_polling_threshold_rw, 0x1, 0x1, true, 0xccebe7f57f7d396c, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NOTIFICATION_FLAGS.SwitchToPollingWindowRW", switch_to_polling_window_rw, 0x2, 0x1, true, 0x5b4adb85f643a109, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NOTIFICATION_FLAGS.ErrorThresholdRW", error_threshold_rw, 0x3, 0x1, true, 0xa21168fb9c19ad3b, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NOTIFICATION_FLAGS.ErrorThresholdWindowRW", error_threshold_window_rw, 0x4, 0x1, true, 0xcbfa619f8c43530, 1, uint16_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_NOTIFICATION_FLAGS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xf94e6a453dda0dd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif