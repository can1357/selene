#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.Size", size, 0x0, 0x10, true, 0x1c77231a15e630c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.Version", version, 0x10, 0x10, true, 0x380eabb13e7a1f5d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.Context", context, 0x40, 0x40, true, 0x884450c899a5eb4b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x39b0f7c20635de3c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x6bbc6d8d7c3812cd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getbackingresource_t ), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.DxgkDdiGetBackingResource", dxgk_ddi_get_backing_resource, 0x100, 0x40, true, 0x81f313556ce3e8d0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getmmiorangecount_t ), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.DxgkDdiGetMmioRangeCount", dxgk_ddi_get_mmio_range_count, 0x140, 0x40, true, 0x4b37684801c1421a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getmmioranges_t ), "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.DxgkDdiGetMmioRanges", dxgk_ddi_get_mmio_ranges, 0x180, 0x40, true, 0xfab9c529f7282f81)
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