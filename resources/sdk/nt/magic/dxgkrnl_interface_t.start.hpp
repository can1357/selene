#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKRNL_INTERFACE.Size", size, 0x0, 0x20, true, 0x2e7009c117fd3453)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKRNL_INTERFACE.Version", version, 0x20, 0x20, true, 0x2ee5311e222e65c7)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKRNL_INTERFACE.DeviceHandle", device_handle, 0x40, 0x40, true, 0x6f57a0c7da01ecc4)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_eval_acpi_method_t ), "_DXGKRNL_INTERFACE.DxgkCbEvalAcpiMethod", dxgk_cb_eval_acpi_method, 0x80, 0x40, true, 0x2fd76d1ae6d6065)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_get_device_information_t ), "_DXGKRNL_INTERFACE.DxgkCbGetDeviceInformation", dxgk_cb_get_device_information, 0xc0, 0x40, true, 0xa68f2fb7f6a3156f)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_indicate_child_status_t ), "_DXGKRNL_INTERFACE.DxgkCbIndicateChildStatus", dxgk_cb_indicate_child_status, 0x100, 0x40, true, 0x814e568d5e657ebe)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_map_memory_t ), "_DXGKRNL_INTERFACE.DxgkCbMapMemory", dxgk_cb_map_memory, 0x140, 0x40, true, 0x57e7b8f2670ae71a)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_DXGKRNL_INTERFACE.DxgkCbQueueDpc", dxgk_cb_queue_dpc, 0x180, 0x40, true, 0x566c7755046ac2cc)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_query_services_t ), "_DXGKRNL_INTERFACE.DxgkCbQueryServices", dxgk_cb_query_services, 0x1c0, 0x40, true, 0x3e08f2f407ea479a)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t, uint32_t*)>*), "_DXGKRNL_INTERFACE.DxgkCbReadDeviceSpace", dxgk_cb_read_device_space, 0x200, 0x40, true, 0x9e0b29be9755a020)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_synchronize_execution_t ), "_DXGKRNL_INTERFACE.DxgkCbSynchronizeExecution", dxgk_cb_synchronize_execution, 0x240, 0x40, true, 0x7ac3ebe3d0cc5443)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGKRNL_INTERFACE.DxgkCbUnmapMemory", dxgk_cb_unmap_memory, 0x280, 0x40, true, 0x882213a21c70e571)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t, uint32_t*)>*), "_DXGKRNL_INTERFACE.DxgkCbWriteDeviceSpace", dxgk_cb_write_device_space, 0x2c0, 0x40, true, 0xf8fc842a09a6aa60)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_is_device_present_t ), "_DXGKRNL_INTERFACE.DxgkCbIsDevicePresent", dxgk_cb_is_device_present, 0x300, 0x40, true, 0xd13b57339631526c)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_gethandledata_t ), "_DXGKRNL_INTERFACE.DxgkCbGetHandleData", dxgk_cb_get_handle_data, 0x340, 0x40, true, 0xdf930bcd3963d3b5)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbGetHandleParent", dxgk_cb_get_handle_parent, 0x380, 0x40, true, 0xaf91d3e7dc4835ae)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_enumhandlechildren_t ), "_DXGKRNL_INTERFACE.DxgkCbEnumHandleChildren", dxgk_cb_enum_handle_children, 0x3c0, 0x40, true, 0x667915bb71013ba)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_notify_interrupt_t ), "_DXGKRNL_INTERFACE.DxgkCbNotifyInterrupt", dxgk_cb_notify_interrupt, 0x400, 0x40, true, 0xcf03e31521f29588)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*)>*), "_DXGKRNL_INTERFACE.DxgkCbNotifyDpc", dxgk_cb_notify_dpc, 0x440, 0x40, true, 0xa7a397304c33b4c6)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_queryvidpninterface_t ), "_DXGKRNL_INTERFACE.DxgkCbQueryVidPnInterface", dxgk_cb_query_vid_pn_interface, 0x480, 0x40, true, 0x8a29b6ba306800c)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_querymonitorinterface_t ), "_DXGKRNL_INTERFACE.DxgkCbQueryMonitorInterface", dxgk_cb_query_monitor_interface, 0x4c0, 0x40, true, 0xe6a9c9b41bcb7892)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_getcaptureaddress_t ), "_DXGKRNL_INTERFACE.DxgkCbGetCaptureAddress", dxgk_cb_get_capture_address, 0x500, 0x40, true, 0x6eddf7fd85086b63)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_log_etw_event_t ), "_DXGKRNL_INTERFACE.DxgkCbLogEtwEvent", dxgk_cb_log_etw_event, 0x540, 0x40, true, 0x34bd3ad4043b4a7e)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_exclude_adapter_access_t ), "_DXGKRNL_INTERFACE.DxgkCbExcludeAdapterAccess", dxgk_cb_exclude_adapter_access, 0x580, 0x40, true, 0x9a27ea83cfe3e4c4)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_createcontextallocation_t ), "_DXGKRNL_INTERFACE.DxgkCbCreateContextAllocation", dxgk_cb_create_context_allocation, 0x5c0, 0x40, true, 0x1950e90c90e9b3e6)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const void*)>*), "_DXGKRNL_INTERFACE.DxgkCbDestroyContextAllocation", dxgk_cb_destroy_context_allocation, 0x600, 0x40, true, 0x6d7b987bc1e4f072)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbSetPowerComponentActive", dxgk_cb_set_power_component_active, 0x640, 0x40, true, 0x1431fa4f1a398b2)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbSetPowerComponentIdle", dxgk_cb_set_power_component_idle, 0x680, 0x40, true, 0x40c0e97f1f628dbd)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_acquire_post_display_ownership_t ), "_DXGKRNL_INTERFACE.DxgkCbAcquirePostDisplayOwnership", dxgk_cb_acquire_post_display_ownership, 0x6c0, 0x40, true, 0x89a1ec93a4bda550)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*), "_DXGKRNL_INTERFACE.DxgkCbPowerRuntimeControlRequest", dxgk_cb_power_runtime_control_request, 0x700, 0x40, true, 0x609d5234a524dc46)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t, uint64_t)>*), "_DXGKRNL_INTERFACE.DxgkCbSetPowerComponentLatency", dxgk_cb_set_power_component_latency, 0x740, 0x40, true, 0xf01fc565ded231ae)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t, uint64_t)>*), "_DXGKRNL_INTERFACE.DxgkCbSetPowerComponentResidency", dxgk_cb_set_power_component_residency, 0x780, 0x40, true, 0x1d63dfb8953083d8)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbCompleteFStateTransition", dxgk_cb_complete_f_state_transition, 0x7c0, 0x40, true, 0x390433aba41d9e8b)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_completepstatetransition_t ), "_DXGKRNL_INTERFACE.DxgkCbCompletePStateTransition", dxgk_cb_complete_p_state_transition, 0x800, 0x40, true, 0x6c85c91fe9795f1e)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_mapcontextallocation_t ), "_DXGKRNL_INTERFACE.DxgkCbMapContextAllocation", dxgk_cb_map_context_allocation, 0x840, 0x40, true, 0xdb03d198d90cd037)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_updatecontextallocation_t ), "_DXGKRNL_INTERFACE.DxgkCbUpdateContextAllocation", dxgk_cb_update_context_allocation, 0x880, 0x40, true, 0xe5cbde5d9a3e41a4)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_reservegpuvirtualaddressrange_t ), "_DXGKRNL_INTERFACE.DxgkCbReserveGpuVirtualAddressRange", dxgk_cb_reserve_gpu_virtual_address_range, 0x8c0, 0x40, true, 0x2d4506a2489731f5)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_acquirehandledata_t ), "_DXGKRNL_INTERFACE.DxgkCbAcquireHandleData", dxgk_cb_acquire_handle_data, 0x900, 0x40, true, 0xf0d98ee5c8389c65)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_releasehandledata_t ), "_DXGKRNL_INTERFACE.DxgkCbReleaseHandleData", dxgk_cb_release_handle_data, 0x940, 0x40, true, 0xc35af326672cc588)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbHardwareContentProtectionTeardown", dxgk_cb_hardware_content_protection_teardown, 0x980, 0x40, true, 0xe1f0f3c8aa64588c)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbMultiPlaneOverlayDisabled", dxgk_cb_multi_plane_overlay_disabled, 0x9c0, 0x40, true, 0x69f3a0f2ad09f795)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(const void*, uint32_t)>*), "_DXGKRNL_INTERFACE.DxgkCbMitigatedRangeUpdate", dxgk_cb_mitigated_range_update, 0xa00, 0x40, true, 0x6dccfe773b805ca)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_invalidatehwcontext_t ), "_DXGKRNL_INTERFACE.DxgkCbInvalidateHwContext", dxgk_cb_invalidate_hw_context, 0xa40, 0x40, true, 0xa38a0f2d0f5b605d)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const void*)>*), "_DXGKRNL_INTERFACE.DxgkCbIndicateConnectorChange", dxgk_cb_indicate_connector_change, 0xa80, 0x40, true, 0xb0ae58b9e55b7a99)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_unblockuefiframebufferranges_t ), "_DXGKRNL_INTERFACE.DxgkCbUnblockUEFIFrameBufferRanges", dxgk_cb_unblock_uefi_frame_buffer_ranges, 0xac0, 0x40, true, 0xd3c2dd5bea1f7a93)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_acquire_post_display_ownership2_t ), "_DXGKRNL_INTERFACE.DxgkCbAcquirePostDisplayOwnership2", dxgk_cb_acquire_post_display_ownership2, 0xb00, 0x40, true, 0x362399c269419815)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_setprotectedsessionstatus_t ), "_DXGKRNL_INTERFACE.DxgkCbSetProtectedSessionStatus", dxgk_cb_set_protected_session_status, 0xb40, 0x40, true, 0x2f947e4d86e8380b)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_allocatecontiguousmemory_t ), "_DXGKRNL_INTERFACE.DxgkCbAllocateContiguousMemory", dxgk_cb_allocate_contiguous_memory, 0xb80, 0x40, true, 0x94fea03ea1b51048)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_freecontiguousmemory_t ), "_DXGKRNL_INTERFACE.DxgkCbFreeContiguousMemory", dxgk_cb_free_contiguous_memory, 0xbc0, 0x40, true, 0x65579b7c8c47f80d)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_allocatepagesformdl_t ), "_DXGKRNL_INTERFACE.DxgkCbAllocatePagesForMdl", dxgk_cb_allocate_pages_for_mdl, 0xc00, 0x40, true, 0x7d02fc035c9f2cbf)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_freepagesfrommdl_t ), "_DXGKRNL_INTERFACE.DxgkCbFreePagesFromMdl", dxgk_cb_free_pages_from_mdl, 0xc40, 0x40, true, 0x573b1a225a6a0cba)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_pinframebufferforsave_t ), "_DXGKRNL_INTERFACE.DxgkCbPinFrameBufferForSave", dxgk_cb_pin_frame_buffer_for_save, 0xc80, 0x40, true, 0xfc62a753d0c64da2)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_unpinframebufferforsave_t ), "_DXGKRNL_INTERFACE.DxgkCbUnpinFrameBufferForSave", dxgk_cb_unpin_frame_buffer_for_save, 0xcc0, 0x40, true, 0x48be2a146bf1cfc5)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_mapframebufferpointer_t ), "_DXGKRNL_INTERFACE.DxgkCbMapFrameBufferPointer", dxgk_cb_map_frame_buffer_pointer, 0xd00, 0x40, true, 0x5b618231dab76c3)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_unmapframebufferpointer_t ), "_DXGKRNL_INTERFACE.DxgkCbUnmapFrameBufferPointer", dxgk_cb_unmap_frame_buffer_pointer, 0xd40, 0x40, true, 0x94506a1ed6730d7)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_mapmdltoiommu_t ), "_DXGKRNL_INTERFACE.DxgkCbMapMdlToIoMmu", dxgk_cb_map_mdl_to_io_mmu, 0xd80, 0x40, true, 0x696a34441dd51bc3)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_unmapmdlfromiommu_t ), "_DXGKRNL_INTERFACE.DxgkCbUnmapMdlFromIoMmu", dxgk_cb_unmap_mdl_from_io_mmu, 0xdc0, 0x40, true, 0xaef478ce09a41dfb)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_report_diagnostic_t ), "_DXGKRNL_INTERFACE.DxgkCbReportDiagnostic", dxgk_cb_report_diagnostic, 0xe00, 0x40, true, 0x237d058453499b37)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_signalevent_t ), "_DXGKRNL_INTERFACE.DxgkCbSignalEvent", dxgk_cb_signal_event, 0xe40, 0x40, true, 0x75084218ff0148c1)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_isfeatureenabled_t ), "_DXGKRNL_INTERFACE.DxgkCbIsFeatureEnabled", dxgk_cb_is_feature_enabled, 0xe80, 0x40, true, 0xbf93a4ccc5ccb70e)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_savememoryforhotupdate_t ), "_DXGKRNL_INTERFACE.DxgkCbSaveMemoryForHotUpdate", dxgk_cb_save_memory_for_hot_update, 0xec0, 0x40, true, 0xa7fd902ae18cce11)
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
#endif