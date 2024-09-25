#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_PROTOCOL_DRIVER.DriverReady", driver_ready, 0x0, 0x8, true, 0x506864f0e8f080df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_PROTOCOL_DRIVER.NeedsBindCompleteEvent", needs_bind_complete_event, 0x8, 0x8, true, 0xc737e6189e9349ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "NDIS_BIND_PROTOCOL_DRIVER.BindLinks", bind_links, 0x40, 0x80, true, 0x376fb53991d8ab6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_BIND_PROTOCOL_DRIVER.ProtocolBindFlags", protocol_bind_flags, 0x100, 0x20, true, 0x8e07d87909c87478)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_block_t*), "NDIS_BIND_PROTOCOL_DRIVER.RunningDriver", running_driver, 0x140, 0x40, true, 0x73c2d53af4accc3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif