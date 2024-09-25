#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.Size", size, 0x0, 0x10, true, 0xf15bcebf4414f445)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.Version", version, 0x10, 0x10, true, 0xd2cdbc75363b216e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.Context", context, 0x40, 0x40, true, 0x6a80fe12aa4dc5a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xd39be6cc1c4909fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x7f76fb354d7d5707)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querymitigatedrangecount_t ), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.DxgkDdiQueryMitigatedRangeCount", dxgk_ddi_query_mitigated_range_count, 0x100, 0x40, true, 0xe46670ab6c793c96)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querymitigatedranges_t ), "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.DxgkDdiQueryMitigatedRanges", dxgk_ddi_query_mitigated_ranges, 0x140, 0x40, true, 0xd53f8cbaab093a1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif