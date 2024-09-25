#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVER_INITIALIZATION_DATA.Version", version, 0x0, 0x20, true, 0x2a4e2e7682d2a33d)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_add_device_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiAddDevice", dxgk_ddi_add_device, 0x40, 0x40, true, 0x1713955061bdabca)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_start_device_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiStartDevice", dxgk_ddi_start_device, 0x80, 0x40, true, 0x664ec6a9696e8494)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiStopDevice", dxgk_ddi_stop_device, 0xc0, 0x40, true, 0x2ddea3970092e826)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRemoveDevice", dxgk_ddi_remove_device, 0x100, 0x40, true, 0xc51af5f182a3e208)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dispatch_io_request_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDispatchIoRequest", dxgk_ddi_dispatch_io_request, 0x140, 0x40, true, 0x1345c032cc8e54aa)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(const void*, uint32_t)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiInterruptRoutine", dxgk_ddi_interrupt_routine, 0x180, 0x40, true, 0x5dea08aec8dcf1db)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDpcRoutine", dxgk_ddi_dpc_routine, 0x1c0, 0x40, true, 0x715798039c848582)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_child_relations_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryChildRelations", dxgk_ddi_query_child_relations, 0x200, 0x40, true, 0x446a61df98d8b23b)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_child_status_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryChildStatus", dxgk_ddi_query_child_status, 0x240, 0x40, true, 0x92ace457e1a44f03)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_device_descriptor_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryDeviceDescriptor", dxgk_ddi_query_device_descriptor, 0x280, 0x40, true, 0x4f7a72771a46f8a3)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_set_power_state_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPowerState", dxgk_ddi_set_power_state, 0x2c0, 0x40, true, 0x5c9dccde18167456)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_notify_acpi_event_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiNotifyAcpiEvent", dxgk_ddi_notify_acpi_event, 0x300, 0x40, true, 0x48b39092262f173d)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResetDevice", dxgk_ddi_reset_device, 0x340, 0x40, true, 0x8730338389141f5e)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUnload", dxgk_ddi_unload, 0x380, 0x40, true, 0xb6730f1cf2b7cee4)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_query_interface_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryInterface", dxgk_ddi_query_interface, 0x3c0, 0x40, true, 0xe1204aa1183b0ce1)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t, uint32_t, uint8_t)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlEtwLogging", dxgk_ddi_control_etw_logging, 0x400, 0x40, true, 0xfdc6037ec7ba7543)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryadapterinfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryAdapterInfo", dxgk_ddi_query_adapter_info, 0x440, 0x40, true, 0x424abf40494dd7de)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createdevice_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateDevice", dxgk_ddi_create_device, 0x480, 0x40, true, 0x4afa0a63d106df28)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createallocation_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateAllocation", dxgk_ddi_create_allocation, 0x4c0, 0x40, true, 0xdf3034b614105406)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_destroyallocation_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyAllocation", dxgk_ddi_destroy_allocation, 0x500, 0x40, true, 0xd35248888b7a36ab)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_describeallocation_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDescribeAllocation", dxgk_ddi_describe_allocation, 0x540, 0x40, true, 0x4c7489cdab6be664)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getstandardallocationdriverdata_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetStandardAllocationDriverData", dxgk_ddi_get_standard_allocation_driver_data, 0x580, 0x40, true, 0xb02a827952d59214)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_acquireswizzlingrange_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiAcquireSwizzlingRange", dxgk_ddi_acquire_swizzling_range, 0x5c0, 0x40, true, 0x2d729fd168ffc176)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_releaseswizzlingrange_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiReleaseSwizzlingRange", dxgk_ddi_release_swizzling_range, 0x600, 0x40, true, 0x828df943d4b6886)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_patch_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPatch", dxgk_ddi_patch, 0x640, 0x40, true, 0x404c2858de846226)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_submitcommand_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSubmitCommand", dxgk_ddi_submit_command, 0x680, 0x40, true, 0x4ee5030ac06d8de4)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_preemptcommand_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPreemptCommand", dxgk_ddi_preempt_command, 0x6c0, 0x40, true, 0xbf099a34c99c544a)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_buildpagingbuffer_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiBuildPagingBuffer", dxgk_ddi_build_paging_buffer, 0x700, 0x40, true, 0xc0bddb2a8d02bdfb)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpalette_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPalette", dxgk_ddi_set_palette, 0x740, 0x40, true, 0x283253a34e6b3114)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpointerposition_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPointerPosition", dxgk_ddi_set_pointer_position, 0x780, 0x40, true, 0xc9f8ef973ea0e753)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setpointershape_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPointerShape", dxgk_ddi_set_pointer_shape, 0x7c0, 0x40, true, 0xb298bbc81e7ac25f)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResetFromTimeout", dxgk_ddi_reset_from_timeout, 0x800, 0x40, true, 0x41d7f2ddf5c0b9ff)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRestartFromTimeout", dxgk_ddi_restart_from_timeout, 0x840, 0x40, true, 0x37c0a4c20c7f9eac)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_escape_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiEscape", dxgk_ddi_escape, 0x880, 0x40, true, 0x2d26a1b21b1f85a5)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_collectdbginfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCollectDbgInfo", dxgk_ddi_collect_dbg_info, 0x8c0, 0x40, true, 0xa23a8dbfd66a4478)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querycurrentfence_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryCurrentFence", dxgk_ddi_query_current_fence, 0x900, 0x40, true, 0x4b7819d256fbd748)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_issupportedvidpn_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiIsSupportedVidPn", dxgk_ddi_is_supported_vid_pn, 0x940, 0x40, true, 0x9ab8b7f7ce62b52e)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_recommendfunctionalvidpn_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRecommendFunctionalVidPn", dxgk_ddi_recommend_functional_vid_pn, 0x980, 0x40, true, 0xc5b5326ca440d98c)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_enumvidpncofuncmodality_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiEnumVidPnCofuncModality", dxgk_ddi_enum_vid_pn_cofunc_modality, 0x9c0, 0x40, true, 0x5e9ed132d4125092)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourceaddress_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceAddress", dxgk_ddi_set_vid_pn_source_address, 0xa00, 0x40, true, 0x94d3724282d989f)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourcevisibility_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceVisibility", dxgk_ddi_set_vid_pn_source_visibility, 0xa40, 0x40, true, 0x623db4ce511ddba5)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_commitvidpn_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCommitVidPn", dxgk_ddi_commit_vid_pn, 0xa80, 0x40, true, 0xafe089132f31e6a)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_updateactivevidpnpresentpath_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdateActiveVidPnPresentPath", dxgk_ddi_update_active_vid_pn_present_path, 0xac0, 0x40, true, 0x79f51d9243a0629d)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_recommendmonitormodes_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRecommendMonitorModes", dxgk_ddi_recommend_monitor_modes, 0xb00, 0x40, true, 0x6bf6cba1eeafea7c)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_recommendvidpntopology_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRecommendVidPnTopology", dxgk_ddi_recommend_vid_pn_topology, 0xb40, 0x40, true, 0x62f81de5eea56f89)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getscanline_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetScanLine", dxgk_ddi_get_scan_line, 0xb80, 0x40, true, 0xf993cd9d80a374fd)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_stopcapture_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiStopCapture", dxgk_ddi_stop_capture, 0xbc0, 0x40, true, 0xcd19402b7d7894cd)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controlinterrupt_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlInterrupt", dxgk_ddi_control_interrupt, 0xc00, 0x40, true, 0x607f73b7c7097bad)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createoverlay_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateOverlay", dxgk_ddi_create_overlay, 0xc40, 0x40, true, 0x346985622e26e73b)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyDevice", dxgk_ddi_destroy_device, 0xc80, 0x40, true, 0x83138743020ee41d)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_openallocationinfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiOpenAllocation", dxgk_ddi_open_allocation, 0xcc0, 0x40, true, 0x4bde0209eed06bf0)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_closeallocation_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCloseAllocation", dxgk_ddi_close_allocation, 0xd00, 0x40, true, 0xf1118e804f48e136)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_render_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRender", dxgk_ddi_render, 0xd40, 0x40, true, 0x3e15cc212d751c9)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, struct dxgk::arg::present_t*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPresent", dxgk_ddi_present, 0xd80, 0x40, true, 0x52f29b2f7ed2cc55)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_updateoverlay_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdateOverlay", dxgk_ddi_update_overlay, 0xdc0, 0x40, true, 0x1e9379819797e5fc)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_flipoverlay_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiFlipOverlay", dxgk_ddi_flip_overlay, 0xe00, 0x40, true, 0x818d9cefa3fa23f2)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyOverlay", dxgk_ddi_destroy_overlay, 0xe40, 0x40, true, 0x9e8b8f17457775a9)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createcontext_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateContext", dxgk_ddi_create_context, 0xe80, 0x40, true, 0xb8337c094cc57e87)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyContext", dxgk_ddi_destroy_context, 0xec0, 0x40, true, 0xae4bdf3794e1f1b2)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_link_device_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiLinkDevice", dxgk_ddi_link_device, 0xf00, 0x40, true, 0xc55ba3c79a07f13a)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setdisplayprivatedriverformat_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetDisplayPrivateDriverFormat", dxgk_ddi_set_display_private_driver_format, 0xf40, 0x40, true, 0x99d77237113ce989)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDescribePageTable", dxgk_ddi_describe_page_table, 0xf80, 0x40, true, 0x7bbe7befd7417c85)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdatePageTable", dxgk_ddi_update_page_table, 0xfc0, 0x40, true, 0x36c5051e0ac04f30)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdatePageDirectory", dxgk_ddi_update_page_directory, 0x1000, 0x40, true, 0x8899ded3561e6ce9)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiMovePageDirectory", dxgk_ddi_move_page_directory, 0x1040, 0x40, true, 0x5bba4dc08988d5b3)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSubmitRender", dxgk_ddi_submit_render, 0x1080, 0x40, true, 0x3af1a6d2c2b7cf2b)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateAllocation2", dxgk_ddi_create_allocation2, 0x10c0, 0x40, true, 0x62da7dc447d8fe7e)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_render_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRenderKm", dxgk_ddi_render_km, 0x1100, 0x40, true, 0xaf508bea6126dfb7)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryvidpnhwcapability_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryVidPnHWCapability", dxgk_ddi_query_vid_pn_hw_capability, 0x1180, 0x40, true, 0x9eaf6e229d77b1f6)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, uint32_t, uint32_t)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPowerComponentFState", dxgk_ddi_set_power_component_f_state, 0x11c0, 0x40, true, 0x849a5f0b113a63a)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querydependentenginegroup_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryDependentEngineGroup", dxgk_ddi_query_dependent_engine_group, 0x1200, 0x40, true, 0xb62b3ed634716cfe)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryenginestatus_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryEngineStatus", dxgk_ddi_query_engine_status, 0x1240, 0x40, true, 0xbd891d06cf287cbc)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resetengine_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResetEngine", dxgk_ddi_reset_engine, 0x1280, 0x40, true, 0x5970852691791109)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_stop_device_and_release_post_display_ownership_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiStopDeviceAndReleasePostDisplayOwnership", dxgk_ddi_stop_device_and_release_post_display_ownership, 0x12c0, 0x40, true, 0x2ac3016b043d387f)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_system_display_enable_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSystemDisplayEnable", dxgk_ddi_system_display_enable, 0x1300, 0x40, true, 0xea47e6562d5060f4)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_system_display_write_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSystemDisplayWrite", dxgk_ddi_system_display_write, 0x1340, 0x40, true, 0x222cdb323946c06c)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_cancelcommand_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCancelCommand", dxgk_ddi_cancel_command, 0x1380, 0x40, true, 0xfb62b294f7a97a9a)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_get_child_container_id_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetChildContainerId", dxgk_ddi_get_child_container_id, 0x13c0, 0x40, true, 0x8736f07207d16a70)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPowerRuntimeControlRequest", dxgk_ddi_power_runtime_control_request, 0x1400, 0x40, true, 0x8ad5190c35802651)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay", dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay, 0x1440, 0x40, true, 0x4d2e808c18207e02)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_notify_surprise_removal_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiNotifySurpriseRemoval", dxgk_ddi_notify_surprise_removal, 0x1480, 0x40, true, 0x3591cfc8a7bb1d4f)
#define _m082 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getnodemetadata_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetNodeMetadata", dxgk_ddi_get_node_metadata, 0x14c0, 0x40, true, 0x9eef9403e5f3a0f0)
#define _m083 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, uint32_t, uint32_t)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetPowerPState", dxgk_ddi_set_power_p_state, 0x1500, 0x40, true, 0x43dc8605f4532b33)
#define _m084 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controlinterrupt2_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlInterrupt2", dxgk_ddi_control_interrupt2, 0x1540, 0x40, true, 0x58510b487a271f77)
#define _m085 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_checkmultiplaneoverlaysupport_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCheckMultiPlaneOverlaySupport", dxgk_ddi_check_multi_plane_overlay_support, 0x1580, 0x40, true, 0x8531d12c53993252)
#define _m086 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_calibrategpuclock_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCalibrateGpuClock", dxgk_ddi_calibrate_gpu_clock, 0x15c0, 0x40, true, 0x4553984b35313d8e)
#define _m087 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_formathistorybuffer_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiFormatHistoryBuffer", dxgk_ddi_format_history_buffer, 0x1600, 0x40, true, 0x93c9dc7a012f88d0)
#define _m088 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_rendergdi_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRenderGdi", dxgk_ddi_render_gdi, 0x1640, 0x40, true, 0x1885d354045015c4)
#define _m089 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_submitcommandvirtual_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSubmitCommandVirtual", dxgk_ddi_submit_command_virtual, 0x1680, 0x40, true, 0xf6ea299458231ed1)
#define _m090 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setrootpagetable_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetRootPageTable", dxgk_ddi_set_root_page_table, 0x16c0, 0x40, true, 0x1245c160132dbc2a)
#define _m091 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getrootpagetablesize_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetRootPageTableSize", dxgk_ddi_get_root_page_table_size, 0x1700, 0x40, true, 0x48c2165120b43b19)
#define _m092 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_mapcpuhostaperture_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiMapCpuHostAperture", dxgk_ddi_map_cpu_host_aperture, 0x1740, 0x40, true, 0x78970b26d10d612b)
#define _m093 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_unmapcpuhostaperture_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUnmapCpuHostAperture", dxgk_ddi_unmap_cpu_host_aperture, 0x1780, 0x40, true, 0xf22a64b36c4ce096)
#define _m094 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_checkmultiplaneoverlaysupport2_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCheckMultiPlaneOverlaySupport2", dxgk_ddi_check_multi_plane_overlay_support2, 0x17c0, 0x40, true, 0x13ce729ec3d4dfab)
#define _m095 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createprocess_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateProcess", dxgk_ddi_create_process, 0x1800, 0x40, true, 0x99b6b81fe7df2a76)
#define _m096 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyProcess", dxgk_ddi_destroy_process, 0x1840, 0x40, true, 0xe2ded4ea958636ff)
#define _m097 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay2_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay2", dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay2, 0x1880, 0x40, true, 0x1fe019b3bdab8071)
#define _m098 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPowerRuntimeSetDeviceHandle", dxgk_ddi_power_runtime_set_device_handle, 0x1940, 0x40, true, 0xbbfc0b6e50a2ad32)
#define _m099 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setstablepowerstate_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetStablePowerState", dxgk_ddi_set_stable_power_state, 0x1980, 0x40, true, 0xc4f215292ec32eaf)
#define _m100 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvideoprotectedregion_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVideoProtectedRegion", dxgk_ddi_set_video_protected_region, 0x19c0, 0x40, true, 0x58ee11bc43a7b409)
#define _m101 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_checkmultiplaneoverlaysupport3_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCheckMultiPlaneOverlaySupport3", dxgk_ddi_check_multi_plane_overlay_support3, 0x1a00, 0x40, true, 0xea8372b4a05bfba9)
#define _m102 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay3_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay3", dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay3, 0x1a40, 0x40, true, 0xbfa03727b14bf550)
#define _m103 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_postmultiplaneoverlaypresent_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPostMultiPlaneOverlayPresent", dxgk_ddi_post_multi_plane_overlay_present, 0x1a80, 0x40, true, 0x7c0cc5ff422d56bc)
#define _m104 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_validateupdateallocationproperty_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiValidateUpdateAllocationProperty", dxgk_ddi_validate_update_allocation_property, 0x1ac0, 0x40, true, 0xc503479c398b4277)
#define _m105 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controlmodebehavior_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlModeBehavior", dxgk_ddi_control_mode_behavior, 0x1b00, 0x40, true, 0xb440f69aa9ab7caf)
#define _m106 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_updatemonitorlinkinfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdateMonitorLinkInfo", dxgk_ddi_update_monitor_link_info, 0x1b40, 0x40, true, 0x97ad3a6ce08588b1)
#define _m107 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createhwcontext_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateHwContext", dxgk_ddi_create_hw_context, 0x1b80, 0x40, true, 0x2b49f3baed1b7beb)
#define _m108 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyHwContext", dxgk_ddi_destroy_hw_context, 0x1bc0, 0x40, true, 0xc32e3541410093d6)
#define _m109 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createhwqueue_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateHwQueue", dxgk_ddi_create_hw_queue, 0x1c00, 0x40, true, 0xe3477b9d1ada0662)
#define _m110 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyHwQueue", dxgk_ddi_destroy_hw_queue, 0x1c40, 0x40, true, 0x39d51970f9af41a3)
#define _m111 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_submitcommandtohwqueue_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSubmitCommandToHwQueue", dxgk_ddi_submit_command_to_hw_queue, 0x1c80, 0x40, true, 0x87b4c7f833d4d0d3)
#define _m112 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_switchtohwcontextlist_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSwitchToHwContextList", dxgk_ddi_switch_to_hw_context_list, 0x1cc0, 0x40, true, 0xa44b444a728539c9)
#define _m113 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resethwengine_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResetHwEngine", dxgk_ddi_reset_hw_engine, 0x1d00, 0x40, true, 0xfccf8272db5d5466)
#define _m114 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createperiodicframenotification_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreatePeriodicFrameNotification", dxgk_ddi_create_periodic_frame_notification, 0x1d40, 0x40, true, 0x75970767cadf6893)
#define _m115 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_destroyperiodicframenotification_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyPeriodicFrameNotification", dxgk_ddi_destroy_periodic_frame_notification, 0x1d80, 0x40, true, 0xa5321a34acff6556)
#define _m116 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settimingsfromvidpn_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTimingsFromVidPn", dxgk_ddi_set_timings_from_vid_pn, 0x1dc0, 0x40, true, 0x3f831ffb62b424f)
#define _m117 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settargetgamma_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTargetGamma", dxgk_ddi_set_target_gamma, 0x1e00, 0x40, true, 0x22963e4b87ba2c97)
#define _m118 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settargetcontenttype_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTargetContentType", dxgk_ddi_set_target_content_type, 0x1e40, 0x40, true, 0x7905d4b4534537b8)
#define _m119 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settargetanalogcopyprotection_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTargetAnalogCopyProtection", dxgk_ddi_set_target_analog_copy_protection, 0x1e80, 0x40, true, 0x4480dc8ac7356255)
#define _m120 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settargetadjustedcolorimetry_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTargetAdjustedColorimetry", dxgk_ddi_set_target_adjusted_colorimetry, 0x1ec0, 0x40, true, 0x78e4de241027f897)
#define _m121 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_displaydetectcontrol_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDisplayDetectControl", dxgk_ddi_display_detect_control, 0x1f00, 0x40, true, 0x4a2ea335516c26ad)
#define _m122 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_queryconnectionchange_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryConnectionChange", dxgk_ddi_query_connection_change, 0x1f40, 0x40, true, 0x86ee0854e542e2d1)
#define _m123 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_exchangeprestartinfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiExchangePreStartInfo", dxgk_ddi_exchange_pre_start_info, 0x1f80, 0x40, true, 0x5f3c5627aac6e4ce)
#define _m124 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getmultiplaneoverlaycaps_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetMultiPlaneOverlayCaps", dxgk_ddi_get_multi_plane_overlay_caps, 0x1fc0, 0x40, true, 0xe1e02c3265c56ba8)
#define _m125 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getpostcompositioncaps_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiGetPostCompositionCaps", dxgk_ddi_get_post_composition_caps, 0x2000, 0x40, true, 0x9296ae5e824e0c2b)
#define _m126 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_updatehwcontextstate_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiUpdateHwContextState", dxgk_ddi_update_hw_context_state, 0x2040, 0x40, true, 0xdb0b39834a43e02c)
#define _m127 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createprotectedsession_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCreateProtectedSession", dxgk_ddi_create_protected_session, 0x2080, 0x40, true, 0x60311427a8d181a)
#define _m128 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiDestroyProtectedSession", dxgk_ddi_destroy_protected_session, 0x20c0, 0x40, true, 0xf158bd592f2de40d)
#define _m129 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setschedulinglogbuffer_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetSchedulingLogBuffer", dxgk_ddi_set_scheduling_log_buffer, 0x2100, 0x40, true, 0xdc88752421538a9f)
#define _m130 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setupprioritybands_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetupPriorityBands", dxgk_ddi_setup_priority_bands, 0x2140, 0x40, true, 0x64d60160280dccd2)
#define _m131 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiNotifyFocusPresent", dxgk_ddi_notify_focus_present, 0x2180, 0x40, true, 0x944c18d060695073)
#define _m132 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setcontextschedulingproperties_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetContextSchedulingProperties", dxgk_ddi_set_context_scheduling_properties, 0x21c0, 0x40, true, 0x8bf713ca5d2bad8c)
#define _m133 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_suspendcontext_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSuspendContext", dxgk_ddi_suspend_context, 0x2200, 0x40, true, 0x294b8a79dc2a9d30)
#define _m134 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resumecontext_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResumeContext", dxgk_ddi_resume_context, 0x2240, 0x40, true, 0xb8e8f41e4bc57195)
#define _m135 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvirtualmachinedata_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetVirtualMachineData", dxgk_ddi_set_virtual_machine_data, 0x2280, 0x40, true, 0xcb24deb2b4afe15f)
#define _m136 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_beginexclusiveaccess_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiBeginExclusiveAccess", dxgk_ddi_begin_exclusive_access, 0x22c0, 0x40, true, 0x8b0f6707eee3bce0)
#define _m137 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_endexclusiveaccess_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiEndExclusiveAccess", dxgk_ddi_end_exclusive_access, 0x2300, 0x40, true, 0xd89ca530853fa506)
#define _m138 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_querydiagnostictypessupport_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiQueryDiagnosticTypesSupport", dxgk_ddi_query_diagnostic_types_support, 0x2340, 0x40, true, 0x6a66709f8ca952a5)
#define _m139 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controldiagnosticreporting_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlDiagnosticReporting", dxgk_ddi_control_diagnostic_reporting, 0x2380, 0x40, true, 0xc0c71be88c8af9e2)
#define _m140 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resumehwengine_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiResumeHwEngine", dxgk_ddi_resume_hw_engine, 0x23c0, 0x40, true, 0x4db82e612a3dd40d)
#define _m141 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_signalmonitoredfence_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSignalMonitoredFence", dxgk_ddi_signal_monitored_fence, 0x2400, 0x40, true, 0x949d34111417faca)
#define _m142 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, struct dxgk::arg::present_t*)>*), "_DRIVER_INITIALIZATION_DATA.DxgkDdiPresentToHwQueue", dxgk_ddi_present_to_hw_queue, 0x2440, 0x40, true, 0xec42fe9f38c09994)
#define _m143 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_validatesubmitcommand_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiValidateSubmitCommand", dxgk_ddi_validate_submit_command, 0x2480, 0x40, true, 0x13af27c5205ebfbf)
#define _m144 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settargetadjustedcolorimetry2_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTargetAdjustedColorimetry2", dxgk_ddi_set_target_adjusted_colorimetry2, 0x24c0, 0x40, true, 0x70d889c2fcfec7b6)
#define _m145 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_settrackedworkloadpowerlevel_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSetTrackedWorkloadPowerLevel", dxgk_ddi_set_tracked_workload_power_level, 0x2500, 0x40, true, 0x5037fc5332420bc1)
#define _m146 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_savememoryforhotupdate_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiSaveMemoryForHotUpdate", dxgk_ddi_save_memory_for_hot_update, 0x2540, 0x40, true, 0xcf002ae44aeb9279)
#define _m147 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_restorememoryforhotupdate_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiRestoreMemoryForHotUpdate", dxgk_ddi_restore_memory_for_hot_update, 0x2580, 0x40, true, 0xf06ce342781a656)
#define _m148 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_collectdiagnosticinfo_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiCollectDiagnosticInfo", dxgk_ddi_collect_diagnostic_info, 0x25c0, 0x40, true, 0xf9b67d43c363315e)
#define _m149 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_controlinterrupt3_t ), "_DRIVER_INITIALIZATION_DATA.DxgkDdiControlInterrupt3", dxgk_ddi_control_interrupt3, 0x2640, 0x40, true, 0x27b12fb2edb929b3)
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
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#endif