#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KTIMER2.Header", header, 0x0, 0xc0, true, 0x9d0263614de01308)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::balanced_node_t, 2>), "_KTIMER2.RbNodes", rb_nodes, 0xc0, 0x80, true, 0x13a3f3edcabccae3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTIMER2.ListEntry", list_entry, 0xc0, 0x80, true, 0x84f981c5ee5af091)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_KTIMER2.DueTime", due_time, 0x240, 0x80, true, 0xf99edacdef098c53)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTIMER2.Period", period, 0x2c0, 0x40, true, 0x22bf066c6a0254a1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::ktimer2_t*, void*)>*), "_KTIMER2.Callback", callback, 0x300, 0x40, true, 0xb5d17475ec1d364d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTIMER2.CallbackContext", callback_context, 0x340, 0x40, true, 0x33f03b11fe184e7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_KTIMER2.DisableCallback", disable_callback, 0x380, 0x40, true, 0xbfbcd99487b44167)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTIMER2.DisableContext", disable_context, 0x3c0, 0x40, true, 0xa2d81390a230e16d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTIMER2.AbsoluteSystemTime", absolute_system_time, 0x400, 0x8, true, 0x15a9541fb9715788)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTIMER2.TypeFlags", type_flags, 0x408, 0x8, true, 0x55a7e83225d77108)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTIMER2.IdleResilient", idle_resilient, 0x409, 0x1, true, 0x62db19f8b824c6b7, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTIMER2.HighResolution", high_resolution, 0x40a, 0x1, true, 0x6c2618db9ffbb21e, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTIMER2.NoWake", no_wake, 0x40b, 0x1, true, 0x216b881078dbcb8f, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_KTIMER2.CollectionIndex", collection_index, 0x410, 0x10, true, 0x84f1a34c6a701ca5)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTIMER2.PseudoHighRes", pseudo_high_res, 0x40c, 0x1, true, 0xd66033150af95c97, 1, uint8_t)
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
#define _m14
#define _m15
#endif