#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::monitor_interface_version_t), "_DXGK_MONITOR_INTERFACE.Version", version, 0x0, 0x20, true, 0xa70d7458e0c3828b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_acquiremonitorsourcemodeset_t ), "_DXGK_MONITOR_INTERFACE.pfnAcquireMonitorSourceModeSet", pfn_acquire_monitor_source_mode_set, 0x40, 0x40, true, 0xc1254577a91f33c0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_releasemonitorsourcemodeset_t ), "_DXGK_MONITOR_INTERFACE.pfnReleaseMonitorSourceModeSet", pfn_release_monitor_source_mode_set, 0x80, 0x40, true, 0xa2d55611f9ad9638)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_getmonitorfrequencyrangeset_t ), "_DXGK_MONITOR_INTERFACE.pfnGetMonitorFrequencyRangeSet", pfn_get_monitor_frequency_range_set, 0xc0, 0x40, true, 0x41cc5ee5b6dfb14f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_getmonitordescriptorset_t ), "_DXGK_MONITOR_INTERFACE.pfnGetMonitorDescriptorSet", pfn_get_monitor_descriptor_set, 0x100, 0x40, true, 0x546f54fa7d4831a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif