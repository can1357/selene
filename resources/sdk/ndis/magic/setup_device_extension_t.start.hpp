#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "NDIS_SETUP_DEVICE_EXTENSION.Header", header, 0x0, 0x0, false, 0xcb619df234b505e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::setup_device_extension_t*), "NDIS_SETUP_DEVICE_EXTENSION.Next", next, 0x0, 0x0, false, 0xc680f4f3644ebf33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_SETUP_DEVICE_EXTENSION.IsDeviceInterfaceActive", is_device_interface_active, 0x0, 0x0, false, 0xd44e39adc8a2931d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_SETUP_DEVICE_EXTENSION.IsSurpriseRemoved", is_surprise_removed, 0x0, 0x0, false, 0xc1538ee560bd5cac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_SETUP_DEVICE_EXTENSION.LowPowerRequested", low_power_requested, 0x0, 0x0, false, 0x22ec6a051cdc89c7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_SETUP_DEVICE_EXTENSION.LowPowerRequestCompleted", low_power_request_completed, 0x0, 0x0, false, 0xc39de719bf47d99f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_SETUP_DEVICE_EXTENSION.LowPowerRequestSucceeded", low_power_request_succeeded, 0x0, 0x0, false, 0x9c6fc7d4dc42ae78)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "NDIS_SETUP_DEVICE_EXTENSION.Fdo", fdo, 0x0, 0x0, false, 0x3cecfd62c346c9cf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "NDIS_SETUP_DEVICE_EXTENSION.Pdo", pdo, 0x0, 0x0, false, 0x1f08631348f9636c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "NDIS_SETUP_DEVICE_EXTENSION.NextDeviceObject", next_device_object, 0x0, 0x0, false, 0xa329c43e5dd70472)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "NDIS_SETUP_DEVICE_EXTENSION.SymbolicName", symbolic_name, 0x0, 0x0, false, 0x55f211a7d8b021f1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "NDIS_SETUP_DEVICE_EXTENSION.IdleTimer", idle_timer, 0x0, 0x0, false, 0xcf23ee3300d465e2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "NDIS_SETUP_DEVICE_EXTENSION.IdleDpc", idle_dpc, 0x0, 0x0, false, 0x249a82d40c381aa7)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "NDIS_SETUP_DEVICE_EXTENSION.RemoveLock", remove_lock, 0x0, 0x0, false, 0x930cfe168298ed9b)
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