#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EX_DEVICE_QUEUE_ENTRY.DeviceListEntry", device_list_entry, 0x0, 0x80, true, 0xb5416f36d15a7875)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_DEVICE_QUEUE_ENTRY.SortKey", sort_key, 0x80, 0x20, true, 0x2a653e9a140c6c98)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EX_DEVICE_QUEUE_ENTRY.Inserted", inserted, 0xa0, 0x8, true, 0x8f1378a567db1fbc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EX_DEVICE_QUEUE_ENTRY.State", state, 0xa8, 0x8, true, 0x9a579a0ade7bc3af)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.Untagged", untagged, 0xb0, 0x1, true, 0x967da7b2466caf31, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.ByPassFrozen", by_pass_frozen, 0xb1, 0x1, true, 0x704947b7b507ad82, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.ByPassLocked", by_pass_locked, 0xb2, 0x1, true, 0xb6a0819cad030679, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.ByPassPowerLocked", by_pass_power_locked, 0xb3, 0x1, true, 0x1a41ec7c813de0b0, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.EnqueueForIoLatency", enqueue_for_io_latency, 0xb4, 0x1, true, 0xa4204d3a5595cd12, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.CheckForTimeout", check_for_timeout, 0xb5, 0x1, true, 0xbbf3e0ba2b6bb8aa, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_DEVICE_QUEUE_ENTRY.EnqueueForZoneSequentialIo", enqueue_for_zone_sequential_io, 0xb6, 0x1, true, 0x5e9a42faa1f7bb01, 1, uint8_t)
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