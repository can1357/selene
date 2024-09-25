#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorfrequencyrangeset_getnumfrequencyranges_t ), "_DXGK_MONITORFREQUENCYRANGESET_INTERFACE.pfnGetNumFrequencyRanges", pfn_get_num_frequency_ranges, 0x0, 0x40, true, 0xf8d415fb960e598d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorfrequencyrangeset_acquirefirstfrequencyrangeinfo_t ), "_DXGK_MONITORFREQUENCYRANGESET_INTERFACE.pfnAcquireFirstFrequencyRangeInfo", pfn_acquire_first_frequency_range_info, 0x40, 0x40, true, 0xd6d229aaf000709a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorfrequencyrangeset_acquirenextfrequencyrangeinfo_t ), "_DXGK_MONITORFREQUENCYRANGESET_INTERFACE.pfnAcquireNextFrequencyRangeInfo", pfn_acquire_next_frequency_range_info, 0x80, 0x40, true, 0xa813eeeeaa76d91a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorfrequencyrangeset_releasefrequencyrangeinfo_t ), "_DXGK_MONITORFREQUENCYRANGESET_INTERFACE.pfnReleaseFrequencyRangeInfo", pfn_release_frequency_range_info, 0xc0, 0x40, true, 0x4a2e2a17561ae0cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif