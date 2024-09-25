#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_PINGPONG.sig", sig, 0x0, 0x20, true, 0x55ce0e80b3fce580)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_PINGPONG.ReadInterlock", read_interlock, 0x20, 0x20, true, 0xa9dd562ea3803150)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_HIDCLASS_PINGPONG.irp", irp, 0x40, 0x40, true, 0x939678c59a2ce55a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HIDCLASS_PINGPONG.reportBuffer", report_buffer, 0x80, 0x40, true, 0x31a071b1b0a06fb2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIDCLASS_PINGPONG.weAreCancelling", we_are_cancelling, 0xc0, 0x20, true, 0xa3be800fef9f8557)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIDCLASS_PINGPONG.sentEvent", sent_event, 0x100, 0xc0, true, 0x2cbd39c00c7103ca)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIDCLASS_PINGPONG.pumpDoneEvent", pump_done_event, 0x1c0, 0xc0, true, 0x80c5cd9dd1e3754f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::fdo_extension_t*), "_HIDCLASS_PINGPONG.myFdoExt", my_fdo_ext, 0x280, 0x40, true, 0x9691970b7f4bb6b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_HIDCLASS_PINGPONG.backoffTimer", backoff_timer, 0x2c0, 0x0, true, 0xf20703ca665e529d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_HIDCLASS_PINGPONG.backoffTimerDPC", backoff_timer_dpc, 0x4c0, 0x0, true, 0x6400f112dcd1f69c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HIDCLASS_PINGPONG.backoffTimerPeriod", backoff_timer_period, 0x6c0, 0x40, true, 0xe26fd75326ce69ad)
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
#endif