#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_COOLING_EXTENSION.Link", link, 0x0, 0x80, true, 0xff82c79ec74bd8ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_COOLING_EXTENSION.RequestListHead", request_list_head, 0x80, 0x80, true, 0xb4c1e76cf2a1d31b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::rw_lock_t), "_POP_COOLING_EXTENSION.Lock", lock, 0x100, 0x80, true, 0xf3f9680597b88636)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_COOLING_EXTENSION.DeviceObject", device_object, 0x180, 0x40, true, 0xc67aa319e644c400)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_COOLING_EXTENSION.NotificationEntry", notification_entry, 0x1c0, 0x40, true, 0x6324650a1e6c9444)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_COOLING_EXTENSION.Enabled", enabled, 0x200, 0x8, true, 0x39bdbf0073e4aa24)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_COOLING_EXTENSION.ActiveEngaged", active_engaged, 0x208, 0x8, true, 0xe1504a780fe83a13)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_COOLING_EXTENSION.ThrottleLimit", throttle_limit, 0x210, 0x8, true, 0x99184052ea47c8e8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_COOLING_EXTENSION.UpdatingToCurrent", updating_to_current, 0x218, 0x8, true, 0x8745ed70b82fa94d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_POP_COOLING_EXTENSION.RemovalFlushEvent", removal_flush_event, 0x240, 0x40, true, 0xda146473f357528b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_POP_COOLING_EXTENSION.PnpFlushEvent", pnp_flush_event, 0x280, 0x40, true, 0xc9faf15c08b66122)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thermal_cooling_interface_t), "_POP_COOLING_EXTENSION.Interface", interface, 0x2c0, 0xc0, true, 0x4fe6998e2e2eda51)
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