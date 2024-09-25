#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_POWER_PLANE.PowerPlaneId", power_plane_id, 0x0, 0x80, true, 0x4840271540dc255e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_PLANE.Lock", lock, 0x80, 0x40, true, 0x8dfa1d53ec13423b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_PLANE.OldIrql", old_irql, 0xc0, 0x8, true, 0xd89b25b79b4e08e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_POWER_PLANE.DevicePowerMw", device_power_mw, 0xe0, 0x20, true, 0x3a88161fbb4add65)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_POWER_PLANE.PmaxHandle", pmax_handle, 0x100, 0x40, true, 0xc88be24c0b6b22d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POP_POWER_PLANE.NotifyDevicePowerDraw", notify_device_power_draw, 0x140, 0x40, true, 0x22907c03751391c6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_PLANE.DeviceCount", device_count, 0x180, 0x40, true, 0xd74f12f19cdd35f5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::device_power_profile_t**), "_POP_POWER_PLANE.Devices", devices, 0x1c0, 0x40, true, 0x3b7580df512d8703)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif