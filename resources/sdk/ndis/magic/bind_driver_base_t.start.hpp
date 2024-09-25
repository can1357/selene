#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_DRIVER_BASE.DriverReady", driver_ready, 0x0, 0x8, true, 0xc7b2dcd796d47527)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_DRIVER_BASE.NeedsBindCompleteEvent", needs_bind_complete_event, 0x8, 0x8, true, 0x8eb9672604f567f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "NDIS_BIND_DRIVER_BASE.BindLinks", bind_links, 0x40, 0x80, true, 0x5c833f5f72ace5e1)
#else
#define _m00
#define _m01
#define _m02
#endif