#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_ACTION_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xddd08fec0af9d44c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PNP_DEVICE_ACTION_ENTRY.DeviceObject", device_object, 0x80, 0x40, true, 0x3d5f9ce9d5460d62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::device_action_request_t), "_PNP_DEVICE_ACTION_ENTRY.RequestType", request_type, 0xc0, 0x20, true, 0xdd0cbfbf7771d16c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_ACTION_ENTRY.ReorderingBarrier", reordering_barrier, 0xe0, 0x8, true, 0xfcbc5115ad261578)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, union pnp::device_action_request_argument_t>), "_PNP_DEVICE_ACTION_ENTRY.RequestArgument", request_argument, 0x100, 0x40, true, 0xd352cb9ce2d4c5c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_PNP_DEVICE_ACTION_ENTRY.CompletionEvent", completion_event, 0x140, 0x40, true, 0x96a67dd9c82896ce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_PNP_DEVICE_ACTION_ENTRY.CompletionStatus", completion_status, 0x180, 0x40, true, 0x1cf6547386763da6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PNP_DEVICE_ACTION_ENTRY.ActivityId", activity_id, 0x1c0, 0x80, true, 0x417eac46ed701716)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_DEVICE_ACTION_ENTRY.RefCount", ref_count, 0x240, 0x20, true, 0x585d1e35b6ec1d68)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_ACTION_ENTRY.Dequeued", dequeued, 0x260, 0x8, true, 0x93daec9375bf132d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_PNP_DEVICE_ACTION_ENTRY.CancelLock", cancel_lock, 0x280, 0x40, true, 0x8baecae24f2cef9c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_DEVICE_ACTION_ENTRY.CancelRequested", cancel_requested, 0x2c0, 0x8, true, 0x188f0033b2bc64ac)
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
#endif