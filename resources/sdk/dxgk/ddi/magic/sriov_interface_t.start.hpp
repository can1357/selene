#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_SRIOV_INTERFACE.Size", size, 0x0, 0x10, true, 0x7361d4089cbe2512)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_SRIOV_INTERFACE.Version", version, 0x10, 0x10, true, 0xe25cd96abb01f8d9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKDDI_SRIOV_INTERFACE.Context", context, 0x40, 0x40, true, 0x22c801cfe0f99024)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_SRIOV_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xd6bb511901477383)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_SRIOV_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xbd3cf8ff44f009ba)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_readvirtualfunctionconfig_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiReadVirtualFunctionConfig", dxgk_ddi_read_virtual_function_config, 0x100, 0x40, true, 0xadd2d35202c16e80)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_writevirtualfunctionconfig_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiWriteVirtualFunctionConfig", dxgk_ddi_write_virtual_function_config, 0x140, 0x40, true, 0xe9327e3250df5d40)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_readvirtualfunctionconfigblock_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiReadVirtualFunctionConfigBlock", dxgk_ddi_read_virtual_function_config_block, 0x180, 0x40, true, 0x4a386228659c5e09)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_writevirtualfunctionconfigblock_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiWriteVirtualFunctionConfigBlock", dxgk_ddi_write_virtual_function_config_block, 0x1c0, 0x40, true, 0xf42b60adf8f4f8de)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryprobedbars_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiQueryProbedBars", dxgk_ddi_query_probed_bars, 0x200, 0x40, true, 0x1c5b1bae531ecc14)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getvendoranddevice_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiGetVendorAndDevice", dxgk_ddi_get_vendor_and_device, 0x240, 0x40, true, 0xe5198e4755c63ff2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getdevicelocation_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiGetDeviceLocation", dxgk_ddi_get_device_location, 0x280, 0x40, true, 0x7c168fb6ecec048d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resetvirtualfunction_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiResetVirtualFunction", dxgk_ddi_reset_virtual_function, 0x2c0, 0x40, true, 0x3673cc88cf30528)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvirtualfunctionpowerstate_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiSetVirtualFunctionPowerState", dxgk_ddi_set_virtual_function_power_state, 0x300, 0x40, true, 0x5d0e22ea50c2f6be)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getresourceforbar_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiGetResourceForBar", dxgk_ddi_get_resource_for_bar, 0x340, 0x40, true, 0x510cd64ea478eb61)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryvirtualfunctionluid_t ), "_DXGKDDI_SRIOV_INTERFACE.DxgkDdiQueryVirtualFunctionLuid", dxgk_ddi_query_virtual_function_luid, 0x380, 0x40, true, 0xea43ed793b3ac9c3)
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
#define _m14
#define _m15
#endif