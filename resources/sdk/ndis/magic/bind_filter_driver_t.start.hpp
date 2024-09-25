#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_FILTER_DRIVER.DriverReady", driver_ready, 0x0, 0x8, true, 0x6f1d8920d822c44d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_BIND_FILTER_DRIVER.NeedsBindCompleteEvent", needs_bind_complete_event, 0x8, 0x8, true, 0x440079f59137f66c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "NDIS_BIND_FILTER_DRIVER.BindLinks", bind_links, 0x40, 0x80, true, 0xa1da29714be279a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "NDIS_BIND_FILTER_DRIVER.Guid", guid, 0xc0, 0x80, true, 0xd9be2be4df32d575)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_BIND_FILTER_DRIVER.FilterBindFlags", filter_bind_flags, 0x140, 0x20, true, 0x1c03c5e1f2cc75fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_driver_block_t*), "NDIS_BIND_FILTER_DRIVER.RunningDriver", running_driver, 0x1c0, 0x40, true, 0x493f4729054a7cad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif