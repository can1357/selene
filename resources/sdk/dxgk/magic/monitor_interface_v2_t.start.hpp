#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::monitor_interface_version_t), "_DXGK_MONITOR_INTERFACE_V2.Version", version, 0x0, 0x20, true, 0xc9b9028918f93f4d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_acquiremonitorsourcemodeset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnAcquireMonitorSourceModeSet", pfn_acquire_monitor_source_mode_set, 0x40, 0x40, true, 0xf39075d2e6a7c54e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_releasemonitorsourcemodeset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnReleaseMonitorSourceModeSet", pfn_release_monitor_source_mode_set, 0x80, 0x40, true, 0xcf7db14f54fd9a00)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_getmonitorfrequencyrangeset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnGetMonitorFrequencyRangeSet", pfn_get_monitor_frequency_range_set, 0xc0, 0x40, true, 0xa835ba40ccdc26ef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_getmonitordescriptorset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnGetMonitorDescriptorSet", pfn_get_monitor_descriptor_set, 0x100, 0x40, true, 0x8c7acecba0ad85ec)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_getadditionalmonitormodeset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnGetAdditionalMonitorModeSet", pfn_get_additional_monitor_mode_set, 0x140, 0x40, true, 0x5d422c2a093c066b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitor_releaseadditionalmonitormodeset_t ), "_DXGK_MONITOR_INTERFACE_V2.pfnReleaseAdditionalMonitorModeSet", pfn_release_additional_monitor_mode_set, 0x180, 0x40, true, 0xe36ff68e902a0cb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif