#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_EXTENDED_DEVICE_QUEUE.Type", type, 0x0, 0x10, true, 0x1bf5e9919d31e6ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_EXTENDED_DEVICE_QUEUE.Size", size, 0x10, 0x10, true, 0xc1159feda826d570)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.Depth", depth, 0x20, 0x20, true, 0xd0891345be653d6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_io_gateway_t*), "_EXTENDED_DEVICE_QUEUE.Gateway", gateway, 0x40, 0x40, true, 0x5c95c8d0021f8d8d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.DeviceCount", device_count, 0x80, 0x20, true, 0x284d406dbd608105)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.ByPassCount", by_pass_count, 0xa0, 0x20, true, 0x2fe6e282d9539597)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.ByPassPowerCount", by_pass_power_count, 0xc0, 0x20, true, 0x61d52beb6d422c97)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.PauseCount", pause_count, 0xe0, 0x20, true, 0xc41aa27b9e067b3b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.BusyCount", busy_count, 0x100, 0x20, true, 0xf7590d7d074ee068)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_DEVICE_QUEUE.Frozen", frozen, 0x120, 0x8, true, 0xe783ccc697215008)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_DEVICE_QUEUE.Locked", locked, 0x128, 0x8, true, 0xbe2572d67b53db11)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_DEVICE_QUEUE.Untagged", untagged, 0x130, 0x8, true, 0x559b70722c8b9a01)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_DEVICE_QUEUE.PowerLocked", power_locked, 0x138, 0x8, true, 0x72e96cd7f21f1cd9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_DEVICE_QUEUE.QuiescenceClients", quiescence_clients, 0x140, 0x20, true, 0xf6fcd5f41d228088)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EXTENDED_DEVICE_QUEUE.QuiescenceEvent", quiescence_event, 0x180, 0xc0, true, 0x6b5ecc8084d8f89)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_EXTENDED_DEVICE_QUEUE.RWLock", rw_lock, 0x240, 0x20, true, 0xf12a7cd5a29745d4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.OutstandingCount", outstanding_count, 0x260, 0x20, true, 0x4fe89c4d00c68ec6)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXTENDED_DEVICE_QUEUE.DeviceList", device_list, 0x280, 0x80, true, 0x1a1de33e99dc1c80)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXTENDED_DEVICE_QUEUE.ByPassList", by_pass_list, 0x300, 0x80, true, 0x5039ea8c5ac166b1)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXTENDED_DEVICE_QUEUE.QosReqList", qos_req_list, 0x380, 0x80, true, 0xacbd668b8758177)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.PeriodicMaxDeviceCount", periodic_max_device_count, 0x420, 0x20, true, 0xf6d8abf65ded1028)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXTENDED_DEVICE_QUEUE.PeriodicMaxOutstandingCount", periodic_max_outstanding_count, 0x440, 0x20, true, 0xd99760c4d1c003a1)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_DEVICE_QUEUE.ZoneWriteOverflowEntries", zone_write_overflow_entries, 0x400, 0x20, true, 0x39c57c16ad965e13)
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
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif