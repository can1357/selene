#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KMDDOD_INITIALIZATION_DATA.Version", version, 0x0, 0x20, true, 0xada0d3298096e13d)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_add_device_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiAddDevice", dxgk_ddi_add_device, 0x40, 0x40, true, 0x75b081d86e31ac88)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_start_device_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiStartDevice", dxgk_ddi_start_device, 0x80, 0x40, true, 0x74ce6e0a3e3079bc)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiStopDevice", dxgk_ddi_stop_device, 0xc0, 0x40, true, 0xfb289e3ea6f15e98)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiRemoveDevice", dxgk_ddi_remove_device, 0x100, 0x40, true, 0x3b3698a5d3b83786)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dispatch_io_request_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiDispatchIoRequest", dxgk_ddi_dispatch_io_request, 0x140, 0x40, true, 0x761c538feafdc945)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(const void*, uint32_t)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiInterruptRoutine", dxgk_ddi_interrupt_routine, 0x180, 0x40, true, 0x44469fb271f0eed3)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiDpcRoutine", dxgk_ddi_dpc_routine, 0x1c0, 0x40, true, 0x47323dca5f08538d)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_child_relations_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryChildRelations", dxgk_ddi_query_child_relations, 0x200, 0x40, true, 0xbaa73e7471a557a0)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_child_status_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryChildStatus", dxgk_ddi_query_child_status, 0x240, 0x40, true, 0xd8c989872d8ad8d)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_device_descriptor_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryDeviceDescriptor", dxgk_ddi_query_device_descriptor, 0x280, 0x40, true, 0xf19886c4c77c61ea)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_set_power_state_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetPowerState", dxgk_ddi_set_power_state, 0x2c0, 0x40, true, 0x8fd266c71aec10ed)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_notify_acpi_event_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiNotifyAcpiEvent", dxgk_ddi_notify_acpi_event, 0x300, 0x40, true, 0xc271400610407b1f)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiResetDevice", dxgk_ddi_reset_device, 0x340, 0x40, true, 0xad2a763e41eb0cce)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiUnload", dxgk_ddi_unload, 0x380, 0x40, true, 0x7aa3280565b96d34)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_interface_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryInterface", dxgk_ddi_query_interface, 0x3c0, 0x40, true, 0xb2a5cbdeea7461fb)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t, uint32_t, uint8_t)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiControlEtwLogging", dxgk_ddi_control_etw_logging, 0x400, 0x40, true, 0xccf9f0927904bcca)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryadapterinfo_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryAdapterInfo", dxgk_ddi_query_adapter_info, 0x440, 0x40, true, 0xfea2648a8854b4b4)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpalette_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetPalette", dxgk_ddi_set_palette, 0x480, 0x40, true, 0xc2150b5ec0a66319)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpointerposition_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetPointerPosition", dxgk_ddi_set_pointer_position, 0x4c0, 0x40, true, 0x84d15e6881142628)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpointershape_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetPointerShape", dxgk_ddi_set_pointer_shape, 0x500, 0x40, true, 0x6b336909f35c2254)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_escape_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiEscape", dxgk_ddi_escape, 0x540, 0x40, true, 0x73af74e910934697)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_collectdbginfo_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiCollectDbgInfo", dxgk_ddi_collect_dbg_info, 0x580, 0x40, true, 0xe06ef9cf6d88a641)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_issupportedvidpn_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiIsSupportedVidPn", dxgk_ddi_is_supported_vid_pn, 0x5c0, 0x40, true, 0x6cac77ead54faead)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_recommendfunctionalvidpn_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiRecommendFunctionalVidPn", dxgk_ddi_recommend_functional_vid_pn, 0x600, 0x40, true, 0x90c360c4cc435140)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_enumvidpncofuncmodality_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiEnumVidPnCofuncModality", dxgk_ddi_enum_vid_pn_cofunc_modality, 0x640, 0x40, true, 0xb5710c1dd5940896)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourcevisibility_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceVisibility", dxgk_ddi_set_vid_pn_source_visibility, 0x680, 0x40, true, 0x8462fbaa932e330c)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_commitvidpn_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiCommitVidPn", dxgk_ddi_commit_vid_pn, 0x6c0, 0x40, true, 0xff0c535c87e88df8)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_updateactivevidpnpresentpath_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiUpdateActiveVidPnPresentPath", dxgk_ddi_update_active_vid_pn_present_path, 0x700, 0x40, true, 0x3504049889133d06)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_recommendmonitormodes_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiRecommendMonitorModes", dxgk_ddi_recommend_monitor_modes, 0x740, 0x40, true, 0xb821169542d5bc1f)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getscanline_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiGetScanLine", dxgk_ddi_get_scan_line, 0x780, 0x40, true, 0x1f02744ee95fbcb1)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryvidpnhwcapability_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiQueryVidPnHWCapability", dxgk_ddi_query_vid_pn_hw_capability, 0x7c0, 0x40, true, 0x866a048160920b7)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_presentdisplayonly_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiPresentDisplayOnly", dxgk_ddi_present_display_only, 0x800, 0x40, true, 0xad4f2143bf379ed4)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_stop_device_and_release_post_display_ownership_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiStopDeviceAndReleasePostDisplayOwnership", dxgk_ddi_stop_device_and_release_post_display_ownership, 0x840, 0x40, true, 0xd47b23837f356961)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_system_display_enable_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSystemDisplayEnable", dxgk_ddi_system_display_enable, 0x880, 0x40, true, 0x2ff995b515535f0d)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_system_display_write_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSystemDisplayWrite", dxgk_ddi_system_display_write, 0x8c0, 0x40, true, 0xae814942d4c1d287)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_get_child_container_id_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiGetChildContainerId", dxgk_ddi_get_child_container_id, 0x900, 0x40, true, 0xc99cfb6834e14958)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controlinterrupt_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiControlInterrupt", dxgk_ddi_control_interrupt, 0x940, 0x40, true, 0xcced9ed2eceb0de8)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, uint32_t, uint32_t)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiSetPowerComponentFState", dxgk_ddi_set_power_component_f_state, 0x980, 0x40, true, 0x5e912403d0266a10)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiPowerRuntimeControlRequest", dxgk_ddi_power_runtime_control_request, 0x9c0, 0x40, true, 0xf22b1ec05719c476)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_notify_surprise_removal_t ), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiNotifySurpriseRemoval", dxgk_ddi_notify_surprise_removal, 0xa00, 0x40, true, 0xfe6f4478767e8a17)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, void*)>*), "_KMDDOD_INITIALIZATION_DATA.DxgkDdiPowerRuntimeSetDeviceHandle", dxgk_ddi_power_runtime_set_device_handle, 0xa40, 0x40, true, 0x7dc8a6bdd61a0346)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#endif