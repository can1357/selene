#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistcreate_t ), "_WDFFUNCTIONS.pfnWdfChildListCreate", pfn_wdf_child_list_create, 0x0, 0x40, true, 0xc97d67fb62242745)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistgetdevice_t ), "_WDFFUNCTIONS.pfnWdfChildListGetDevice", pfn_wdf_child_list_get_device, 0x40, 0x40, true, 0x70b7dd365269b5ac)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistretrievepdo_t ), "_WDFFUNCTIONS.pfnWdfChildListRetrievePdo", pfn_wdf_child_list_retrieve_pdo, 0x80, 0x40, true, 0x8a4ddbf1b76e472a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_address_description_header_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListRetrieveAddressDescription", pfn_wdf_child_list_retrieve_address_description, 0xc0, 0x40, true, 0x4eafa2cc32d63b3a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListBeginScan", pfn_wdf_child_list_begin_scan, 0x100, 0x40, true, 0x6ce464d161a96239)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListEndScan", pfn_wdf_child_list_end_scan, 0x140, 0x40, true, 0x27a307b82cba12b7)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*, struct wdf::child_list_iterator_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListBeginIteration", pfn_wdf_child_list_begin_iteration, 0x180, 0x40, true, 0xa068b61475c4fa13)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistretrievenextdevice_t ), "_WDFFUNCTIONS.pfnWdfChildListRetrieveNextDevice", pfn_wdf_child_list_retrieve_next_device, 0x1c0, 0x40, true, 0x5e9c5f38ac10b7c6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*, struct wdf::child_list_iterator_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListEndIteration", pfn_wdf_child_list_end_iteration, 0x200, 0x40, true, 0x1d50844e282d7bbb)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_address_description_header_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListAddOrUpdateChildDescriptionAsPresent", pfn_wdf_child_list_add_or_update_child_description_as_present, 0x240, 0x40, true, 0x1cab8620dcd48f2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistupdatechilddescriptionasmissing_t ), "_WDFFUNCTIONS.pfnWdfChildListUpdateChildDescriptionAsMissing", pfn_wdf_child_list_update_child_description_as_missing, 0x280, 0x40, true, 0xc0efc10badd365b8)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfchildlist_t*)>*), "_WDFFUNCTIONS.pfnWdfChildListUpdateAllChildDescriptionsAsPresent", pfn_wdf_child_list_update_all_child_descriptions_as_present, 0x2c0, 0x40, true, 0x17847395be512db)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfchildlistrequestchildeject_t ), "_WDFFUNCTIONS.pfnWdfChildListRequestChildEject", pfn_wdf_child_list_request_child_eject, 0x300, 0x40, true, 0xf63880287031ba99)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectioncreate_t ), "_WDFFUNCTIONS.pfnWdfCollectionCreate", pfn_wdf_collection_create, 0x340, 0x40, true, 0xfbef595d9c400ec5)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectiongetcount_t ), "_WDFFUNCTIONS.pfnWdfCollectionGetCount", pfn_wdf_collection_get_count, 0x380, 0x40, true, 0xec537b25b2676033)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectionadd_t ), "_WDFFUNCTIONS.pfnWdfCollectionAdd", pfn_wdf_collection_add, 0x3c0, 0x40, true, 0x621984dd678fe193)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectionremove_t ), "_WDFFUNCTIONS.pfnWdfCollectionRemove", pfn_wdf_collection_remove, 0x400, 0x40, true, 0xf44d012ce06ecb8d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectionremoveitem_t ), "_WDFFUNCTIONS.pfnWdfCollectionRemoveItem", pfn_wdf_collection_remove_item, 0x440, 0x40, true, 0xc7274cce2544ecc5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcollectiongetitem_t ), "_WDFFUNCTIONS.pfnWdfCollectionGetItem", pfn_wdf_collection_get_item, 0x480, 0x40, true, 0xc62cd6722bbd5bb8)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct wdf::driver_globals_t*, struct wdf::wdfcollection_t*)>*), "_WDFFUNCTIONS.pfnWdfCollectionGetFirstItem", pfn_wdf_collection_get_first_item, 0x4c0, 0x40, true, 0x6bfbc05c50395aa4)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct wdf::driver_globals_t*, struct wdf::wdfcollection_t*)>*), "_WDFFUNCTIONS.pfnWdfCollectionGetLastItem", pfn_wdf_collection_get_last_item, 0x500, 0x40, true, 0x7a3fa1db41f1095f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcommonbuffercreate_t ), "_WDFFUNCTIONS.pfnWdfCommonBufferCreate", pfn_wdf_common_buffer_create, 0x540, 0x40, true, 0x41863546537bd78d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcommonbuffergetalignedvirtualaddress_t ), "_WDFFUNCTIONS.pfnWdfCommonBufferGetAlignedVirtualAddress", pfn_wdf_common_buffer_get_aligned_virtual_address, 0x580, 0x40, true, 0xb74bda836c2859d7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcommonbuffergetalignedlogicaladdress_t ), "_WDFFUNCTIONS.pfnWdfCommonBufferGetAlignedLogicalAddress", pfn_wdf_common_buffer_get_aligned_logical_address, 0x5c0, 0x40, true, 0x193983a706d2d758)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcommonbuffergetlength_t ), "_WDFFUNCTIONS.pfnWdfCommonBufferGetLength", pfn_wdf_common_buffer_get_length, 0x600, 0x40, true, 0xf40e14aaceea0f9d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcontroldeviceinitallocate_t ), "_WDFFUNCTIONS.pfnWdfControlDeviceInitAllocate", pfn_wdf_control_device_init_allocate, 0x640, 0x40, true, 0x83828ca7a2f90edf)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcontroldeviceinitsetshutdownnotification_t ), "_WDFFUNCTIONS.pfnWdfControlDeviceInitSetShutdownNotification", pfn_wdf_control_device_init_set_shutdown_notification, 0x680, 0x40, true, 0x344e9e7a8ef69cbf)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfControlFinishInitializing", pfn_wdf_control_finish_initializing, 0x6c0, 0x40, true, 0x86794dba93af0c72)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct wdf::device_state_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceGetDeviceState", pfn_wdf_device_get_device_state, 0x700, 0x40, true, 0x1aff29ded34a5352)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct wdf::device_state_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceSetDeviceState", pfn_wdf_device_set_device_state, 0x740, 0x40, true, 0xe83ae7017b80bcab)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwdmdevicegetwdfdevicehandle_t ), "_WDFFUNCTIONS.pfnWdfWdmDeviceGetWdfDeviceHandle", pfn_wdf_wdm_device_get_wdf_device_handle, 0x780, 0x40, true, 0x9ce9cdc1fce3b22)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceWdmGetDeviceObject", pfn_wdf_device_wdm_get_device_object, 0x7c0, 0x40, true, 0x21eab955a99abe3a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceWdmGetAttachedDevice", pfn_wdf_device_wdm_get_attached_device, 0x800, 0x40, true, 0xf4bfb1e23e5aba60)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceWdmGetPhysicalDevice", pfn_wdf_device_wdm_get_physical_device, 0x840, 0x40, true, 0xf9dac4c4f4f3c098)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicewdmdispatchpreprocessedirp_t ), "_WDFFUNCTIONS.pfnWdfDeviceWdmDispatchPreprocessedIrp", pfn_wdf_device_wdm_dispatch_preprocessed_irp, 0x880, 0x40, true, 0x76b18486816b363f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceAddDependentUsageDeviceObject", pfn_wdf_device_add_dependent_usage_device_object, 0x8c0, 0x40, true, 0x88b24c16cc463d7c)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceAddRemovalRelationsPhysicalDevice", pfn_wdf_device_add_removal_relations_physical_device, 0x900, 0x40, true, 0x59b5510a0dcb31ae)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceRemoveRemovalRelationsPhysicalDevice", pfn_wdf_device_remove_removal_relations_physical_device, 0x940, 0x40, true, 0x2429a008d25ee6a2)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceClearRemovalRelationsDevices", pfn_wdf_device_clear_removal_relations_devices, 0x980, 0x40, true, 0xce975d6d5d32faaf)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetdriver_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetDriver", pfn_wdf_device_get_driver, 0x9c0, 0x40, true, 0xbf9cd99ee9ef22a1)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceretrievedevicename_t ), "_WDFFUNCTIONS.pfnWdfDeviceRetrieveDeviceName", pfn_wdf_device_retrieve_device_name, 0xa00, 0x40, true, 0x8ab967b587c6d6a4)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfDeviceAssignMofResourceName", pfn_wdf_device_assign_mof_resource_name, 0xa40, 0x40, true, 0x4cc609120aace01b)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct wdf::wdfiotarget_t*(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceGetIoTarget", pfn_wdf_device_get_io_target, 0xa80, 0x40, true, 0xc5128581efc6c672)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetdevicepnpstate_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetDevicePnpState", pfn_wdf_device_get_device_pnp_state, 0xac0, 0x40, true, 0xd5db691d36f1dd0b)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetdevicepowerstate_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetDevicePowerState", pfn_wdf_device_get_device_power_state, 0xb00, 0x40, true, 0x2e7d841ac59494df)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetdevicepowerpolicystate_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetDevicePowerPolicyState", pfn_wdf_device_get_device_power_policy_state, 0xb40, 0x40, true, 0x7b34d2271251a2b4)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceassigns0idlesettings_t ), "_WDFFUNCTIONS.pfnWdfDeviceAssignS0IdleSettings", pfn_wdf_device_assign_s0_idle_settings, 0xb80, 0x40, true, 0x9fb11a219f4d04a8)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceassignsxwakesettings_t ), "_WDFFUNCTIONS.pfnWdfDeviceAssignSxWakeSettings", pfn_wdf_device_assign_sx_wake_settings, 0xbc0, 0x40, true, 0x5a5d9fd9f1024563)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceopenregistrykey_t ), "_WDFFUNCTIONS.pfnWdfDeviceOpenRegistryKey", pfn_wdf_device_open_registry_key, 0xc00, 0x40, true, 0xc88d1d4656a71384)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetspecialfilesupport_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetSpecialFileSupport", pfn_wdf_device_set_special_file_support, 0xc40, 0x40, true, 0x22ca47f1ca6263d0)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceSetCharacteristics", pfn_wdf_device_set_characteristics, 0xc80, 0x40, true, 0x928cb1f4332da727)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceGetCharacteristics", pfn_wdf_device_get_characteristics, 0xcc0, 0x40, true, 0x138cc323a1e18554)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceGetAlignmentRequirement", pfn_wdf_device_get_alignment_requirement, 0xd00, 0x40, true, 0x8d278bfd9131092a)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceSetAlignmentRequirement", pfn_wdf_device_set_alignment_requirement, 0xd40, 0x40, true, 0x5a022d4baae37f9)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitFree", pfn_wdf_device_init_free, 0xd80, 0x40, true, 0x974a1ac35cbcb130)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetpnppowereventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPnpPowerEventCallbacks", pfn_wdf_device_init_set_pnp_power_event_callbacks, 0xdc0, 0x40, true, 0xd89df06008501980)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetpowerpolicyeventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPowerPolicyEventCallbacks", pfn_wdf_device_init_set_power_policy_event_callbacks, 0xe00, 0x40, true, 0xfb172675771cb662)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, uint8_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPowerPolicyOwnership", pfn_wdf_device_init_set_power_policy_ownership, 0xe40, 0x40, true, 0x4d14b617762275f2)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitregisterpnpstatechangecallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitRegisterPnpStateChangeCallback", pfn_wdf_device_init_register_pnp_state_change_callback, 0xe80, 0x40, true, 0x3d48623ad1bd99f0)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitregisterpowerstatechangecallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitRegisterPowerStateChangeCallback", pfn_wdf_device_init_register_power_state_change_callback, 0xec0, 0x40, true, 0xfa084eb8a93353c0)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitregisterpowerpolicystatechangecallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitRegisterPowerPolicyStateChangeCallback", pfn_wdf_device_init_register_power_policy_state_change_callback, 0xf00, 0x40, true, 0xb402a251acac5905)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetiotype_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetIoType", pfn_wdf_device_init_set_io_type, 0xf40, 0x40, true, 0xab6c8b81996e1239)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, uint8_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetExclusive", pfn_wdf_device_init_set_exclusive, 0xf80, 0x40, true, 0xe011f56f2b747e29)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPowerNotPageable", pfn_wdf_device_init_set_power_not_pageable, 0xfc0, 0x40, true, 0x7b831c67c48b8045)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPowerPageable", pfn_wdf_device_init_set_power_pageable, 0x1000, 0x40, true, 0x4af472933fcde2a8)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetPowerInrush", pfn_wdf_device_init_set_power_inrush, 0x1040, 0x40, true, 0x8e78c739a6413671)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitSetDeviceType", pfn_wdf_device_init_set_device_type, 0x1080, 0x40, true, 0x2d2ce0bc135eda09)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitAssignName", pfn_wdf_device_init_assign_name, 0x10c0, 0x40, true, 0x2e5cee8557ea003a)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitAssignSDDLString", pfn_wdf_device_init_assign_sddl_string, 0x1100, 0x40, true, 0x230b19037afc1071)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetdeviceclass_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetDeviceClass", pfn_wdf_device_init_set_device_class, 0x1140, 0x40, true, 0x20be75bfea1fb8db)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetcharacteristics_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetCharacteristics", pfn_wdf_device_init_set_characteristics, 0x1180, 0x40, true, 0x637c6d8b55b3b147)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetfileobjectconfig_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetFileObjectConfig", pfn_wdf_device_init_set_file_object_config, 0x11c0, 0x40, true, 0xcd21fe6f0733e54e)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetrequestattributes_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetRequestAttributes", pfn_wdf_device_init_set_request_attributes, 0x1200, 0x40, true, 0xc7283d5d610a94a5)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitassignwdmirppreprocesscallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitAssignWdmIrpPreprocessCallback", pfn_wdf_device_init_assign_wdm_irp_preprocess_callback, 0x1240, 0x40, true, 0x6183ba05c9c8727)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetioincallercontextcallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetIoInCallerContextCallback", pfn_wdf_device_init_set_io_in_caller_context_callback, 0x1280, 0x40, true, 0x79c34ed54791c1c)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicecreate_t ), "_WDFFUNCTIONS.pfnWdfDeviceCreate", pfn_wdf_device_create, 0x12c0, 0x40, true, 0xefce00a7d6215b2d)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetstaticstopremove_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetStaticStopRemove", pfn_wdf_device_set_static_stop_remove, 0x1300, 0x40, true, 0x52484d3f8168cac6)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicecreatedeviceinterface_t ), "_WDFFUNCTIONS.pfnWdfDeviceCreateDeviceInterface", pfn_wdf_device_create_device_interface, 0x1340, 0x40, true, 0xc1f8dc1683f46643)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetdeviceinterfacestate_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetDeviceInterfaceState", pfn_wdf_device_set_device_interface_state, 0x1380, 0x40, true, 0xf54cba34a6cdb38c)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceretrievedeviceinterfacestring_t ), "_WDFFUNCTIONS.pfnWdfDeviceRetrieveDeviceInterfaceString", pfn_wdf_device_retrieve_device_interface_string, 0x13c0, 0x40, true, 0xa4bf1ed8cc1eb208)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfDeviceCreateSymbolicLink", pfn_wdf_device_create_symbolic_link, 0x1400, 0x40, true, 0x6e9b195243d0f1b6)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicequeryproperty_t ), "_WDFFUNCTIONS.pfnWdfDeviceQueryProperty", pfn_wdf_device_query_property, 0x1440, 0x40, true, 0x49f62e220156ca00)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceallocandqueryproperty_t ), "_WDFFUNCTIONS.pfnWdfDeviceAllocAndQueryProperty", pfn_wdf_device_alloc_and_query_property, 0x1480, 0x40, true, 0x8c147e9da6d53d90)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetpnpcapabilities_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetPnpCapabilities", pfn_wdf_device_set_pnp_capabilities, 0x14c0, 0x40, true, 0x45879a404c4dac52)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetpowercapabilities_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetPowerCapabilities", pfn_wdf_device_set_power_capabilities, 0x1500, 0x40, true, 0xa05027fbcb9986b7)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetbusinformationforchildren_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetBusInformationForChildren", pfn_wdf_device_set_bus_information_for_children, 0x1540, 0x40, true, 0x847804c69caa956c)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceindicatewakestatus_t ), "_WDFFUNCTIONS.pfnWdfDeviceIndicateWakeStatus", pfn_wdf_device_indicate_wake_status, 0x1580, 0x40, true, 0x415e744efb008118)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicesetfailed_t ), "_WDFFUNCTIONS.pfnWdfDeviceSetFailed", pfn_wdf_device_set_failed, 0x15c0, 0x40, true, 0x21266f4f8daa913a)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicestopidlenotrack_t ), "_WDFFUNCTIONS.pfnWdfDeviceStopIdleNoTrack", pfn_wdf_device_stop_idle_no_track, 0x1600, 0x40, true, 0x8cf37101c457e851)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceResumeIdleNoTrack", pfn_wdf_device_resume_idle_no_track, 0x1640, 0x40, true, 0xd6fedd0cd57821f9)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetfileobject_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetFileObject", pfn_wdf_device_get_file_object, 0x1680, 0x40, true, 0xac1a9af265a7251b)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceenqueuerequest_t ), "_WDFFUNCTIONS.pfnWdfDeviceEnqueueRequest", pfn_wdf_device_enqueue_request, 0x16c0, 0x40, true, 0x50067c0036099727)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetdefaultqueue_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetDefaultQueue", pfn_wdf_device_get_default_queue, 0x1700, 0x40, true, 0xaf8a4242153eaaf9)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceconfigurerequestdispatching_t ), "_WDFFUNCTIONS.pfnWdfDeviceConfigureRequestDispatching", pfn_wdf_device_configure_request_dispatching, 0x1740, 0x40, true, 0x2234d80dadd40f17)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmaenablercreate_t ), "_WDFFUNCTIONS.pfnWdfDmaEnablerCreate", pfn_wdf_dma_enabler_create, 0x1780, 0x40, true, 0x88ee024977f8f1d3)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(struct wdf::driver_globals_t*, struct wdf::wdfdmaenabler_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaEnablerGetMaximumLength", pfn_wdf_dma_enabler_get_maximum_length, 0x17c0, 0x40, true, 0xc8b923ba614cc9b9)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(struct wdf::driver_globals_t*, struct wdf::wdfdmaenabler_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaEnablerGetMaximumScatterGatherElements", pfn_wdf_dma_enabler_get_maximum_scatter_gather_elements, 0x1800, 0x40, true, 0x97bd4662f17af195)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmaenablersetmaximumscattergatherelements_t ), "_WDFFUNCTIONS.pfnWdfDmaEnablerSetMaximumScatterGatherElements", pfn_wdf_dma_enabler_set_maximum_scatter_gather_elements, 0x1840, 0x40, true, 0x349e90d8e8b091f3)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactioncreate_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionCreate", pfn_wdf_dma_transaction_create, 0x1880, 0x40, true, 0x8b90774946f9458d)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactioninitialize_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionInitialize", pfn_wdf_dma_transaction_initialize, 0x18c0, 0x40, true, 0xecea8c402eb950f3)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactioninitializeusingrequest_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionInitializeUsingRequest", pfn_wdf_dma_transaction_initialize_using_request, 0x1900, 0x40, true, 0xddd6088cf3fd0ea8)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionexecute_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionExecute", pfn_wdf_dma_transaction_execute, 0x1940, 0x40, true, 0x3e08d0f57089f0a2)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionrelease_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionRelease", pfn_wdf_dma_transaction_release, 0x1980, 0x40, true, 0x74e57a7015018b3c)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactiondmacompleted_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionDmaCompleted", pfn_wdf_dma_transaction_dma_completed, 0x19c0, 0x40, true, 0xde8519ece430f55f)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*, uint64_t, int32_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionDmaCompletedWithLength", pfn_wdf_dma_transaction_dma_completed_with_length, 0x1a00, 0x40, true, 0x1d05a65cc767dce8)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*, uint64_t, int32_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionDmaCompletedFinal", pfn_wdf_dma_transaction_dma_completed_final, 0x1a40, 0x40, true, 0x3a21bb974941beca)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionGetBytesTransferred", pfn_wdf_dma_transaction_get_bytes_transferred, 0x1a80, 0x40, true, 0x98fe869b29016773)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionsetmaximumlength_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetMaximumLength", pfn_wdf_dma_transaction_set_maximum_length, 0x1ac0, 0x40, true, 0x269ed49994065791)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactiongetrequest_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionGetRequest", pfn_wdf_dma_transaction_get_request, 0x1b00, 0x40, true, 0x3a316fab7b53e956)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionGetCurrentDmaTransferLength", pfn_wdf_dma_transaction_get_current_dma_transfer_length, 0x1b40, 0x40, true, 0x4bdbdf412167d48b)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactiongetdevice_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionGetDevice", pfn_wdf_dma_transaction_get_device, 0x1b80, 0x40, true, 0xf2d316601de7b684)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdpccreate_t ), "_WDFFUNCTIONS.pfnWdfDpcCreate", pfn_wdf_dpc_create, 0x1bc0, 0x40, true, 0xb9f15ec287aad179)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdpcenqueue_t ), "_WDFFUNCTIONS.pfnWdfDpcEnqueue", pfn_wdf_dpc_enqueue, 0x1c00, 0x40, true, 0x86d9112d712e1e9a)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdpccancel_t ), "_WDFFUNCTIONS.pfnWdfDpcCancel", pfn_wdf_dpc_cancel, 0x1c40, 0x40, true, 0x4f82752325cade58)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdpcgetparentobject_t ), "_WDFFUNCTIONS.pfnWdfDpcGetParentObject", pfn_wdf_dpc_get_parent_object, 0x1c80, 0x40, true, 0x107c0ea8e5625913)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdpcwdmgetdpc_t ), "_WDFFUNCTIONS.pfnWdfDpcWdmGetDpc", pfn_wdf_dpc_wdm_get_dpc, 0x1cc0, 0x40, true, 0x7f295d036d848385)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdrivercreate_t ), "_WDFFUNCTIONS.pfnWdfDriverCreate", pfn_wdf_driver_create, 0x1d00, 0x40, true, 0xaea8da1470b8ae0)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdrivergetregistrypath_t ), "_WDFFUNCTIONS.pfnWdfDriverGetRegistryPath", pfn_wdf_driver_get_registry_path, 0x1d40, 0x40, true, 0xcc1f4f1352dd1ef9)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriverwdmgetdriverobject_t ), "_WDFFUNCTIONS.pfnWdfDriverWdmGetDriverObject", pfn_wdf_driver_wdm_get_driver_object, 0x1d80, 0x40, true, 0xd8a36791dfab164f)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriveropenparametersregistrykey_t ), "_WDFFUNCTIONS.pfnWdfDriverOpenParametersRegistryKey", pfn_wdf_driver_open_parameters_registry_key, 0x1dc0, 0x40, true, 0x16fc6d5d52466e91)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwdmdrivergetwdfdriverhandle_t ), "_WDFFUNCTIONS.pfnWdfWdmDriverGetWdfDriverHandle", pfn_wdf_wdm_driver_get_wdf_driver_handle, 0x1e00, 0x40, true, 0xc9f9380422754bc5)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriverregistertraceinfo_t ), "_WDFFUNCTIONS.pfnWdfDriverRegisterTraceInfo", pfn_wdf_driver_register_trace_info, 0x1e40, 0x40, true, 0x2d88cb1299f18398)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriverretrieveversionstring_t ), "_WDFFUNCTIONS.pfnWdfDriverRetrieveVersionString", pfn_wdf_driver_retrieve_version_string, 0x1e80, 0x40, true, 0x32184e863f7d5d86)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriverisversionavailable_t ), "_WDFFUNCTIONS.pfnWdfDriverIsVersionAvailable", pfn_wdf_driver_is_version_available, 0x1ec0, 0x40, true, 0x6ff862fcdb5b6ccf)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitwdmgetphysicaldevice_t ), "_WDFFUNCTIONS.pfnWdfFdoInitWdmGetPhysicalDevice", pfn_wdf_fdo_init_wdm_get_physical_device, 0x1f00, 0x40, true, 0xd202ffe487b46c79)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitopenregistrykey_t ), "_WDFFUNCTIONS.pfnWdfFdoInitOpenRegistryKey", pfn_wdf_fdo_init_open_registry_key, 0x1f40, 0x40, true, 0x6471f62abb8139b2)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitqueryproperty_t ), "_WDFFUNCTIONS.pfnWdfFdoInitQueryProperty", pfn_wdf_fdo_init_query_property, 0x1f80, 0x40, true, 0xef822284d997db7)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitallocandqueryproperty_t ), "_WDFFUNCTIONS.pfnWdfFdoInitAllocAndQueryProperty", pfn_wdf_fdo_init_alloc_and_query_property, 0x1fc0, 0x40, true, 0xea220eb5cca79d0f)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitseteventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfFdoInitSetEventCallbacks", pfn_wdf_fdo_init_set_event_callbacks, 0x2000, 0x40, true, 0x993e193e498dc9f8)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfFdoInitSetFilter", pfn_wdf_fdo_init_set_filter, 0x2040, 0x40, true, 0x797eb6d21ed695c0)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitsetdefaultchildlistconfig_t ), "_WDFFUNCTIONS.pfnWdfFdoInitSetDefaultChildListConfig", pfn_wdf_fdo_init_set_default_child_list_config, 0x2080, 0x40, true, 0xc4d1e3b0d9aa4a30)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoqueryforinterface_t ), "_WDFFUNCTIONS.pfnWdfFdoQueryForInterface", pfn_wdf_fdo_query_for_interface, 0x20c0, 0x40, true, 0xdc62f626fc18f756)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdogetdefaultchildlist_t ), "_WDFFUNCTIONS.pfnWdfFdoGetDefaultChildList", pfn_wdf_fdo_get_default_child_list, 0x2100, 0x40, true, 0x681b342a1f95b4bb)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoaddstaticchild_t ), "_WDFFUNCTIONS.pfnWdfFdoAddStaticChild", pfn_wdf_fdo_add_static_child, 0x2140, 0x40, true, 0x7de0da1026420e84)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfFdoLockStaticChildListForIteration", pfn_wdf_fdo_lock_static_child_list_for_iteration, 0x2180, 0x40, true, 0x2b8813262f2ad48b)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoretrievenextstaticchild_t ), "_WDFFUNCTIONS.pfnWdfFdoRetrieveNextStaticChild", pfn_wdf_fdo_retrieve_next_static_child, 0x21c0, 0x40, true, 0xfcf65c3ff9804fc7)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfFdoUnlockStaticChildListFromIteration", pfn_wdf_fdo_unlock_static_child_list_from_iteration, 0x2200, 0x40, true, 0x81cc5337dc132ed2)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffileobjectgetfilename_t ), "_WDFFUNCTIONS.pfnWdfFileObjectGetFileName", pfn_wdf_file_object_get_file_name, 0x2240, 0x40, true, 0xe3cb08db5c616098)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffileobjectgetflags_t ), "_WDFFUNCTIONS.pfnWdfFileObjectGetFlags", pfn_wdf_file_object_get_flags, 0x2280, 0x40, true, 0x7967a81d9fcbb24d)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffileobjectgetdevice_t ), "_WDFFUNCTIONS.pfnWdfFileObjectGetDevice", pfn_wdf_file_object_get_device, 0x22c0, 0x40, true, 0x1c0a27a5b97755e5)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffileobjectwdmgetfileobject_t ), "_WDFFUNCTIONS.pfnWdfFileObjectWdmGetFileObject", pfn_wdf_file_object_wdm_get_file_object, 0x2300, 0x40, true, 0xf4e779b37785368e)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptcreate_t ), "_WDFFUNCTIONS.pfnWdfInterruptCreate", pfn_wdf_interrupt_create, 0x2340, 0x40, true, 0x7cee64fbae149a61)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptQueueDpcForIsr", pfn_wdf_interrupt_queue_dpc_for_isr, 0x2380, 0x40, true, 0xbf31f36ba0245e5e)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptsynchronize_t ), "_WDFFUNCTIONS.pfnWdfInterruptSynchronize", pfn_wdf_interrupt_synchronize, 0x23c0, 0x40, true, 0xa43e2e309a4fe71b)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptAcquireLock", pfn_wdf_interrupt_acquire_lock, 0x2400, 0x40, true, 0xde2ee73806440685)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptReleaseLock", pfn_wdf_interrupt_release_lock, 0x2440, 0x40, true, 0xdf1dd717bae5ee2a)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptEnable", pfn_wdf_interrupt_enable, 0x2480, 0x40, true, 0xa7703cef6ed5873e)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptDisable", pfn_wdf_interrupt_disable, 0x24c0, 0x40, true, 0xecf7c6847e128d57)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptwdmgetinterrupt_t ), "_WDFFUNCTIONS.pfnWdfInterruptWdmGetInterrupt", pfn_wdf_interrupt_wdm_get_interrupt, 0x2500, 0x40, true, 0xd598c78a5abe2ae3)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptgetinfo_t ), "_WDFFUNCTIONS.pfnWdfInterruptGetInfo", pfn_wdf_interrupt_get_info, 0x2540, 0x40, true, 0x9b38f3328318f1dc)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptsetpolicy_t ), "_WDFFUNCTIONS.pfnWdfInterruptSetPolicy", pfn_wdf_interrupt_set_policy, 0x2580, 0x40, true, 0x425390b7b1557959)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptgetdevice_t ), "_WDFFUNCTIONS.pfnWdfInterruptGetDevice", pfn_wdf_interrupt_get_device, 0x25c0, 0x40, true, 0xf2d58bcdf2e171e)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueuecreate_t ), "_WDFFUNCTIONS.pfnWdfIoQueueCreate", pfn_wdf_io_queue_create, 0x2600, 0x40, true, 0x62f02f6c932594fd)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueuegetstate_t ), "_WDFFUNCTIONS.pfnWdfIoQueueGetState", pfn_wdf_io_queue_get_state, 0x2640, 0x40, true, 0x580d74554ac176ec)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueStart", pfn_wdf_io_queue_start, 0x2680, 0x40, true, 0x1ab24e9b91bfc11d)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*, sdk::function<void(struct wdf::wdfqueue_t*, void*)>*, void*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueStop", pfn_wdf_io_queue_stop, 0x26c0, 0x40, true, 0x439968f1499c408d)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueStopSynchronously", pfn_wdf_io_queue_stop_synchronously, 0x2700, 0x40, true, 0xca5f71506985f102)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueuegetdevice_t ), "_WDFFUNCTIONS.pfnWdfIoQueueGetDevice", pfn_wdf_io_queue_get_device, 0x2740, 0x40, true, 0x1159f9c396d8243d)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueueretrievenextrequest_t ), "_WDFFUNCTIONS.pfnWdfIoQueueRetrieveNextRequest", pfn_wdf_io_queue_retrieve_next_request, 0x2780, 0x40, true, 0xcfad1748ff11fd05)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueueretrieverequestbyfileobject_t ), "_WDFFUNCTIONS.pfnWdfIoQueueRetrieveRequestByFileObject", pfn_wdf_io_queue_retrieve_request_by_file_object, 0x27c0, 0x40, true, 0x10515a995ff6a0aa)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueuefindrequest_t ), "_WDFFUNCTIONS.pfnWdfIoQueueFindRequest", pfn_wdf_io_queue_find_request, 0x2800, 0x40, true, 0x9081a7394a52edb1)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueueretrievefoundrequest_t ), "_WDFFUNCTIONS.pfnWdfIoQueueRetrieveFoundRequest", pfn_wdf_io_queue_retrieve_found_request, 0x2840, 0x40, true, 0x1bfc22ac2481fead)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueDrainSynchronously", pfn_wdf_io_queue_drain_synchronously, 0x2880, 0x40, true, 0xb2d799ee647c979c)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*, sdk::function<void(struct wdf::wdfqueue_t*, void*)>*, void*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueDrain", pfn_wdf_io_queue_drain, 0x28c0, 0x40, true, 0x48160c9df5ca6549)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*)>*), "_WDFFUNCTIONS.pfnWdfIoQueuePurgeSynchronously", pfn_wdf_io_queue_purge_synchronously, 0x2900, 0x40, true, 0x2861dfe9caf2ddb7)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*, sdk::function<void(struct wdf::wdfqueue_t*, void*)>*, void*)>*), "_WDFFUNCTIONS.pfnWdfIoQueuePurge", pfn_wdf_io_queue_purge, 0x2940, 0x40, true, 0xcf0d035e56300ec2)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueuereadynotify_t ), "_WDFFUNCTIONS.pfnWdfIoQueueReadyNotify", pfn_wdf_io_queue_ready_notify, 0x2980, 0x40, true, 0x9ba4ba09d06755a5)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetcreate_t ), "_WDFFUNCTIONS.pfnWdfIoTargetCreate", pfn_wdf_io_target_create, 0x29c0, 0x40, true, 0xd2027674abd0373d)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetopen_t ), "_WDFFUNCTIONS.pfnWdfIoTargetOpen", pfn_wdf_io_target_open, 0x2a00, 0x40, true, 0x96632f190aaa1a88)
#define _m169 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetCloseForQueryRemove", pfn_wdf_io_target_close_for_query_remove, 0x2a40, 0x40, true, 0x9dd60e28631c610e)
#define _m170 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetClose", pfn_wdf_io_target_close, 0x2a80, 0x40, true, 0x60991b27f6a209d3)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetstart_t ), "_WDFFUNCTIONS.pfnWdfIoTargetStart", pfn_wdf_io_target_start, 0x2ac0, 0x40, true, 0x33a141bae1b47a51)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetstop_t ), "_WDFFUNCTIONS.pfnWdfIoTargetStop", pfn_wdf_io_target_stop, 0x2b00, 0x40, true, 0x8a300d38cda31622)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetgetstate_t ), "_WDFFUNCTIONS.pfnWdfIoTargetGetState", pfn_wdf_io_target_get_state, 0x2b40, 0x40, true, 0xc81d90e3b3ac9884)
#define _m174 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetgetdevice_t ), "_WDFFUNCTIONS.pfnWdfIoTargetGetDevice", pfn_wdf_io_target_get_device, 0x2b80, 0x40, true, 0xd5a2234b71e4997b)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetquerytargetproperty_t ), "_WDFFUNCTIONS.pfnWdfIoTargetQueryTargetProperty", pfn_wdf_io_target_query_target_property, 0x2bc0, 0x40, true, 0x3c8ace925c0f810a)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetallocandquerytargetproperty_t ), "_WDFFUNCTIONS.pfnWdfIoTargetAllocAndQueryTargetProperty", pfn_wdf_io_target_alloc_and_query_target_property, 0x2c00, 0x40, true, 0x55d1d7c0775e1803)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetqueryforinterface_t ), "_WDFFUNCTIONS.pfnWdfIoTargetQueryForInterface", pfn_wdf_io_target_query_for_interface, 0x2c40, 0x40, true, 0x5c104998eae59cee)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetWdmGetTargetDeviceObject", pfn_wdf_io_target_wdm_get_target_device_object, 0x2c80, 0x40, true, 0x3abb57fcdd0f213a)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::device_object_t*(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetWdmGetTargetPhysicalDevice", pfn_wdf_io_target_wdm_get_target_physical_device, 0x2cc0, 0x40, true, 0xe05504a51a1971d0)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetwdmgettargetfileobject_t ), "_WDFFUNCTIONS.pfnWdfIoTargetWdmGetTargetFileObject", pfn_wdf_io_target_wdm_get_target_file_object, 0x2d00, 0x40, true, 0x4130346d32b0bf7f)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetwdmgettargetfilehandle_t ), "_WDFFUNCTIONS.pfnWdfIoTargetWdmGetTargetFileHandle", pfn_wdf_io_target_wdm_get_target_file_handle, 0x2d40, 0x40, true, 0xe93e3dcb94c167d2)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, struct wdf::memory_descriptor_t*, int64_t*, struct wdf::request_send_options_t*, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetSendReadSynchronously", pfn_wdf_io_target_send_read_synchronously, 0x2d80, 0x40, true, 0x47edb345ce2eb1f3)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*, int64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetFormatRequestForRead", pfn_wdf_io_target_format_request_for_read, 0x2dc0, 0x40, true, 0xcaebf9eb31a594de)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, struct wdf::memory_descriptor_t*, int64_t*, struct wdf::request_send_options_t*, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetSendWriteSynchronously", pfn_wdf_io_target_send_write_synchronously, 0x2e00, 0x40, true, 0xb343787ff8911810)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*, int64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetFormatRequestForWrite", pfn_wdf_io_target_format_request_for_write, 0x2e40, 0x40, true, 0xb12b2540340e61d6)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, uint32_t, struct wdf::memory_descriptor_t*, struct wdf::memory_descriptor_t*, struct wdf::request_send_options_t*, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetSendIoctlSynchronously", pfn_wdf_io_target_send_ioctl_synchronously, 0x2e80, 0x40, true, 0xb019bada153d20d8)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, uint32_t, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetFormatRequestForIoctl", pfn_wdf_io_target_format_request_for_ioctl, 0x2ec0, 0x40, true, 0x7bdba65253b52163)
#define _m188 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, uint32_t, struct wdf::memory_descriptor_t*, struct wdf::memory_descriptor_t*, struct wdf::request_send_options_t*, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetSendInternalIoctlSynchronously", pfn_wdf_io_target_send_internal_ioctl_synchronously, 0x2f00, 0x40, true, 0xce28047a25c99f38)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfiotarget_t*, struct wdf::wdfrequest_t*, uint32_t, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*)>*), "_WDFFUNCTIONS.pfnWdfIoTargetFormatRequestForInternalIoctl", pfn_wdf_io_target_format_request_for_internal_ioctl, 0x2f40, 0x40, true, 0x361eedef5da3b1f4)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetsendinternalioctlotherssynchronously_t ), "_WDFFUNCTIONS.pfnWdfIoTargetSendInternalIoctlOthersSynchronously", pfn_wdf_io_target_send_internal_ioctl_others_synchronously, 0x2f80, 0x40, true, 0xe16ca19c7699b43a)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetformatrequestforinternalioctlothers_t ), "_WDFFUNCTIONS.pfnWdfIoTargetFormatRequestForInternalIoctlOthers", pfn_wdf_io_target_format_request_for_internal_ioctl_others, 0x2fc0, 0x40, true, 0xed5011d30ac178e8)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfmemorycreate_t ), "_WDFFUNCTIONS.pfnWdfMemoryCreate", pfn_wdf_memory_create, 0x3000, 0x40, true, 0x7a4348f7478dd266)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfmemorycreatepreallocated_t ), "_WDFFUNCTIONS.pfnWdfMemoryCreatePreallocated", pfn_wdf_memory_create_preallocated, 0x3040, 0x40, true, 0xc4b3924d89ffc5)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfmemorygetbuffer_t ), "_WDFFUNCTIONS.pfnWdfMemoryGetBuffer", pfn_wdf_memory_get_buffer, 0x3080, 0x40, true, 0xb2de242cc28fb362)
#define _m195 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfmemoryassignbuffer_t ), "_WDFFUNCTIONS.pfnWdfMemoryAssignBuffer", pfn_wdf_memory_assign_buffer, 0x30c0, 0x40, true, 0x70e090e34f03ab32)
#define _m196 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfmemory_t*, uint64_t, void*, uint64_t)>*), "_WDFFUNCTIONS.pfnWdfMemoryCopyToBuffer", pfn_wdf_memory_copy_to_buffer, 0x3100, 0x40, true, 0xe375be75e436c169)
#define _m197 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfmemory_t*, uint64_t, void*, uint64_t)>*), "_WDFFUNCTIONS.pfnWdfMemoryCopyFromBuffer", pfn_wdf_memory_copy_from_buffer, 0x3140, 0x40, true, 0x6a2524b499bac5b6)
#define _m198 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdflookasidelistcreate_t ), "_WDFFUNCTIONS.pfnWdfLookasideListCreate", pfn_wdf_lookaside_list_create, 0x3180, 0x40, true, 0x54d607de5ef048ce)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfmemorycreatefromlookaside_t ), "_WDFFUNCTIONS.pfnWdfMemoryCreateFromLookaside", pfn_wdf_memory_create_from_lookaside, 0x31c0, 0x40, true, 0x6ac157cae68aef4d)
#define _m200 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceminiportcreate_t ), "_WDFFUNCTIONS.pfnWdfDeviceMiniportCreate", pfn_wdf_device_miniport_create, 0x3200, 0x40, true, 0x4aaa2ef03ae56863)
#define _m201 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdriverminiportunload_t ), "_WDFFUNCTIONS.pfnWdfDriverMiniportUnload", pfn_wdf_driver_miniport_unload, 0x3240, 0x40, true, 0x497efa68212f5973)
#define _m202 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfobjectgettypedcontextworker_t ), "_WDFFUNCTIONS.pfnWdfObjectGetTypedContextWorker", pfn_wdf_object_get_typed_context_worker, 0x3280, 0x40, true, 0xf72f0566ce56be2c)
#define _m203 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfobjectallocatecontext_t ), "_WDFFUNCTIONS.pfnWdfObjectAllocateContext", pfn_wdf_object_allocate_context, 0x32c0, 0x40, true, 0xf834eaff34f5dc1f)
#define _m204 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfobjectcontextgetobject_t ), "_WDFFUNCTIONS.pfnWdfObjectContextGetObject", pfn_wdf_object_context_get_object, 0x3300, 0x40, true, 0xcaba8f7574fa1b38)
#define _m205 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct wdf::driver_globals_t*, void*, void*, int32_t, char*)>*, sdk::function<void(struct wdf::driver_globals_t*, void*, void*, int32_t, const char*)>*>), "_WDFFUNCTIONS.pfnWdfObjectReferenceActual", pfn_wdf_object_reference_actual, 0x3340, 0x40, true, 0x91d43f99c14b8aa4)
#define _m206 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct wdf::driver_globals_t*, void*, void*, int32_t, char*)>*, sdk::function<void(struct wdf::driver_globals_t*, void*, void*, int32_t, const char*)>*>), "_WDFFUNCTIONS.pfnWdfObjectDereferenceActual", pfn_wdf_object_dereference_actual, 0x3380, 0x40, true, 0x9abe7d37752f3ea1)
#define _m207 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfobjectcreate_t ), "_WDFFUNCTIONS.pfnWdfObjectCreate", pfn_wdf_object_create, 0x33c0, 0x40, true, 0x1b34312367e40548)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, void*)>*), "_WDFFUNCTIONS.pfnWdfObjectDelete", pfn_wdf_object_delete, 0x3400, 0x40, true, 0x389f20ade2b9c8a0)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfobjectquery_t ), "_WDFFUNCTIONS.pfnWdfObjectQuery", pfn_wdf_object_query, 0x3440, 0x40, true, 0xd16d1fd57a667a8a)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdoinitallocate_t ), "_WDFFUNCTIONS.pfnWdfPdoInitAllocate", pfn_wdf_pdo_init_allocate, 0x3480, 0x40, true, 0xe7f665f8cb6febbb)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdoinitseteventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfPdoInitSetEventCallbacks", pfn_wdf_pdo_init_set_event_callbacks, 0x34c0, 0x40, true, 0x2583b27be5c0e99b)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAssignDeviceID", pfn_wdf_pdo_init_assign_device_id, 0x3500, 0x40, true, 0x29f8c50f26b22269)
#define _m213 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAssignInstanceID", pfn_wdf_pdo_init_assign_instance_id, 0x3540, 0x40, true, 0xba72f7c3b2d6a3c4)
#define _m214 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAddHardwareID", pfn_wdf_pdo_init_add_hardware_id, 0x3580, 0x40, true, 0xf2f942d05abb165b)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAddCompatibleID", pfn_wdf_pdo_init_add_compatible_id, 0x35c0, 0x40, true, 0x500e0083783be2a4)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdoinitadddevicetext_t ), "_WDFFUNCTIONS.pfnWdfPdoInitAddDeviceText", pfn_wdf_pdo_init_add_device_text, 0x3600, 0x40, true, 0x9d71fdb85c98af5)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfPdoInitSetDefaultLocale", pfn_wdf_pdo_init_set_default_locale, 0x3640, 0x40, true, 0x554a8b59bae6fd7c)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdoinitassignrawdevice_t ), "_WDFFUNCTIONS.pfnWdfPdoInitAssignRawDevice", pfn_wdf_pdo_init_assign_raw_device, 0x3680, 0x40, true, 0xe793ca49bc50d2a9)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdomarkmissing_t ), "_WDFFUNCTIONS.pfnWdfPdoMarkMissing", pfn_wdf_pdo_mark_missing, 0x36c0, 0x40, true, 0xa53cd7da9f11c599)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoRequestEject", pfn_wdf_pdo_request_eject, 0x3700, 0x40, true, 0xbf54d0282a5c7565)
#define _m221 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdogetparent_t ), "_WDFFUNCTIONS.pfnWdfPdoGetParent", pfn_wdf_pdo_get_parent, 0x3740, 0x40, true, 0xc7f122d122c83236)
#define _m222 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfpdoretrieveidentificationdescription_t ), "_WDFFUNCTIONS.pfnWdfPdoRetrieveIdentificationDescription", pfn_wdf_pdo_retrieve_identification_description, 0x3780, 0x40, true, 0x683f0195169b219e)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct wdf::child_address_description_header_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoRetrieveAddressDescription", pfn_wdf_pdo_retrieve_address_description, 0x37c0, 0x40, true, 0x5f509cfab61625f)
#define _m224 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct wdf::child_address_description_header_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoUpdateAddressDescription", pfn_wdf_pdo_update_address_description, 0x3800, 0x40, true, 0xc3fc04b7658a30f1)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoAddEjectionRelationsPhysicalDevice", pfn_wdf_pdo_add_ejection_relations_physical_device, 0x3840, 0x40, true, 0xfd25ef439ce8deac)
#define _m226 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoRemoveEjectionRelationsPhysicalDevice", pfn_wdf_pdo_remove_ejection_relations_physical_device, 0x3880, 0x40, true, 0x34611a84a70f38ee)
#define _m227 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoClearEjectionRelationsDevices", pfn_wdf_pdo_clear_ejection_relations_devices, 0x38c0, 0x40, true, 0xe2149cdcf68dc64e)
#define _m228 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceaddqueryinterface_t ), "_WDFFUNCTIONS.pfnWdfDeviceAddQueryInterface", pfn_wdf_device_add_query_interface, 0x3900, 0x40, true, 0x1e6bd23744831400)
#define _m229 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryopenkey_t ), "_WDFFUNCTIONS.pfnWdfRegistryOpenKey", pfn_wdf_registry_open_key, 0x3940, 0x40, true, 0x1ce81e923906c834)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistrycreatekey_t ), "_WDFFUNCTIONS.pfnWdfRegistryCreateKey", pfn_wdf_registry_create_key, 0x3980, 0x40, true, 0x1b067ace7989b68f)
#define _m231 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryclose_t ), "_WDFFUNCTIONS.pfnWdfRegistryClose", pfn_wdf_registry_close, 0x39c0, 0x40, true, 0x69f6c4d3155ae8b5)
#define _m232 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistrywdmgethandle_t ), "_WDFFUNCTIONS.pfnWdfRegistryWdmGetHandle", pfn_wdf_registry_wdm_get_handle, 0x3a00, 0x40, true, 0x3993df590622dd10)
#define _m233 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryremovekey_t ), "_WDFFUNCTIONS.pfnWdfRegistryRemoveKey", pfn_wdf_registry_remove_key, 0x3a40, 0x40, true, 0xc3919fec8c45d94)
#define _m234 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryremovevalue_t ), "_WDFFUNCTIONS.pfnWdfRegistryRemoveValue", pfn_wdf_registry_remove_value, 0x3a80, 0x40, true, 0x1360a914f717a5ff)
#define _m235 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryqueryvalue_t ), "_WDFFUNCTIONS.pfnWdfRegistryQueryValue", pfn_wdf_registry_query_value, 0x3ac0, 0x40, true, 0x56a57fb77c5ce5b6)
#define _m236 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryquerymemory_t ), "_WDFFUNCTIONS.pfnWdfRegistryQueryMemory", pfn_wdf_registry_query_memory, 0x3b00, 0x40, true, 0xf6a3ae646d5f72bf)
#define _m237 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryquerymultistring_t ), "_WDFFUNCTIONS.pfnWdfRegistryQueryMultiString", pfn_wdf_registry_query_multi_string, 0x3b40, 0x40, true, 0x685d4b4213ed1497)
#define _m238 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryqueryunicodestring_t ), "_WDFFUNCTIONS.pfnWdfRegistryQueryUnicodeString", pfn_wdf_registry_query_unicode_string, 0x3b80, 0x40, true, 0x22936aef9012fd32)
#define _m239 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfkey_t*, const nt::unicode_view*, struct wdf::wdfstring_t*)>*), "_WDFFUNCTIONS.pfnWdfRegistryQueryString", pfn_wdf_registry_query_string, 0x3bc0, 0x40, true, 0x9ddb06170d290003)
#define _m240 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryqueryulong_t ), "_WDFFUNCTIONS.pfnWdfRegistryQueryULong", pfn_wdf_registry_query_u_long, 0x3c00, 0x40, true, 0x16a3ff94a5a5cc54)
#define _m241 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryassignvalue_t ), "_WDFFUNCTIONS.pfnWdfRegistryAssignValue", pfn_wdf_registry_assign_value, 0x3c40, 0x40, true, 0x7015cd4962b9b8da)
#define _m242 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryassignmemory_t ), "_WDFFUNCTIONS.pfnWdfRegistryAssignMemory", pfn_wdf_registry_assign_memory, 0x3c80, 0x40, true, 0xbbe903c5b5a02b00)
#define _m243 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryassignmultistring_t ), "_WDFFUNCTIONS.pfnWdfRegistryAssignMultiString", pfn_wdf_registry_assign_multi_string, 0x3cc0, 0x40, true, 0x6f145775f2c33197)
#define _m244 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryassignunicodestring_t ), "_WDFFUNCTIONS.pfnWdfRegistryAssignUnicodeString", pfn_wdf_registry_assign_unicode_string, 0x3d00, 0x40, true, 0xdcf4062220b6d34)
#define _m245 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfkey_t*, const nt::unicode_view*, struct wdf::wdfstring_t*)>*), "_WDFFUNCTIONS.pfnWdfRegistryAssignString", pfn_wdf_registry_assign_string, 0x3d40, 0x40, true, 0xd0e87d984e34ab00)
#define _m246 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfregistryassignulong_t ), "_WDFFUNCTIONS.pfnWdfRegistryAssignULong", pfn_wdf_registry_assign_u_long, 0x3d80, 0x40, true, 0x5bdf688bbfa38718)
#define _m247 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestcreate_t ), "_WDFFUNCTIONS.pfnWdfRequestCreate", pfn_wdf_request_create, 0x3dc0, 0x40, true, 0xf39121e1a9e3544d)
#define _m248 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestcreatefromirp_t ), "_WDFFUNCTIONS.pfnWdfRequestCreateFromIrp", pfn_wdf_request_create_from_irp, 0x3e00, 0x40, true, 0x15d6057e41611e12)
#define _m249 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestreuse_t ), "_WDFFUNCTIONS.pfnWdfRequestReuse", pfn_wdf_request_reuse, 0x3e40, 0x40, true, 0x866b74ae764a54e8)
#define _m250 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestchangetarget_t ), "_WDFFUNCTIONS.pfnWdfRequestChangeTarget", pfn_wdf_request_change_target, 0x3e80, 0x40, true, 0xb010e222588a4f99)
#define _m251 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestformatrequestusingcurrenttype_t ), "_WDFFUNCTIONS.pfnWdfRequestFormatRequestUsingCurrentType", pfn_wdf_request_format_request_using_current_type, 0x3ec0, 0x40, true, 0x9bf9b951b5428378)
#define _m252 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestwdmformatusingstacklocation_t ), "_WDFFUNCTIONS.pfnWdfRequestWdmFormatUsingStackLocation", pfn_wdf_request_wdm_format_using_stack_location, 0x3f00, 0x40, true, 0x1109e445b54df31f)
#define _m253 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestsend_t ), "_WDFFUNCTIONS.pfnWdfRequestSend", pfn_wdf_request_send, 0x3f40, 0x40, true, 0x1511c7b099858bc2)
#define _m254 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestGetStatus", pfn_wdf_request_get_status, 0x3f80, 0x40, true, 0x8a8779037632d06)
#define _m255 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestmarkcancelable_t ), "_WDFFUNCTIONS.pfnWdfRequestMarkCancelable", pfn_wdf_request_mark_cancelable, 0x3fc0, 0x40, true, 0x1928fbbbf68a97bf)
#define _m256 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestUnmarkCancelable", pfn_wdf_request_unmark_cancelable, 0x4000, 0x40, true, 0x7b0dae2e5fd401b)
#define _m257 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestIsCanceled", pfn_wdf_request_is_canceled, 0x4040, 0x40, true, 0xae11187552140174)
#define _m258 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestCancelSentRequest", pfn_wdf_request_cancel_sent_request, 0x4080, 0x40, true, 0xa2fbe98cae7daf97)
#define _m259 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestIsFrom32BitProcess", pfn_wdf_request_is_from32_bit_process, 0x40c0, 0x40, true, 0xa9ebd1e4afc58df1)
#define _m260 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestsetcompletionroutine_t ), "_WDFFUNCTIONS.pfnWdfRequestSetCompletionRoutine", pfn_wdf_request_set_completion_routine, 0x4100, 0x40, true, 0x3fdeba341ab13f8e)
#define _m261 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetcompletionparams_t ), "_WDFFUNCTIONS.pfnWdfRequestGetCompletionParams", pfn_wdf_request_get_completion_params, 0x4140, 0x40, true, 0x14ac0feaec21336d)
#define _m262 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestAllocateTimer", pfn_wdf_request_allocate_timer, 0x4180, 0x40, true, 0x70e026d40ccbecc4)
#define _m263 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestcomplete_t ), "_WDFFUNCTIONS.pfnWdfRequestComplete", pfn_wdf_request_complete, 0x41c0, 0x40, true, 0x9e07b71b8cd72194)
#define _m264 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestcompletewithpriorityboost_t ), "_WDFFUNCTIONS.pfnWdfRequestCompleteWithPriorityBoost", pfn_wdf_request_complete_with_priority_boost, 0x4200, 0x40, true, 0xcb7c99242f664a5)
#define _m265 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestcompletewithinformation_t ), "_WDFFUNCTIONS.pfnWdfRequestCompleteWithInformation", pfn_wdf_request_complete_with_information, 0x4240, 0x40, true, 0xab3e37fa41580f95)
#define _m266 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetparameters_t ), "_WDFFUNCTIONS.pfnWdfRequestGetParameters", pfn_wdf_request_get_parameters, 0x4280, 0x40, true, 0x18f92a9d86f4f152)
#define _m267 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveInputMemory", pfn_wdf_request_retrieve_input_memory, 0x42c0, 0x40, true, 0xb76c5afa85e90623)
#define _m268 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveOutputMemory", pfn_wdf_request_retrieve_output_memory, 0x4300, 0x40, true, 0xdebd5ceb052e6e0d)
#define _m269 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, uint64_t, void**, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveInputBuffer", pfn_wdf_request_retrieve_input_buffer, 0x4340, 0x40, true, 0xbbcef24ccb3fec2)
#define _m270 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, uint64_t, void**, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveOutputBuffer", pfn_wdf_request_retrieve_output_buffer, 0x4380, 0x40, true, 0xed401456aabc1b92)
#define _m271 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, struct nt::mdl_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveInputWdmMdl", pfn_wdf_request_retrieve_input_wdm_mdl, 0x43c0, 0x40, true, 0xce22c5e741ea7f26)
#define _m272 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, struct nt::mdl_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveOutputWdmMdl", pfn_wdf_request_retrieve_output_wdm_mdl, 0x4400, 0x40, true, 0x80d1906a88703d2b)
#define _m273 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, uint64_t, void**, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveUnsafeUserInputBuffer", pfn_wdf_request_retrieve_unsafe_user_input_buffer, 0x4440, 0x40, true, 0x3a852d14f37c6909)
#define _m274 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, uint64_t, void**, uint64_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestRetrieveUnsafeUserOutputBuffer", pfn_wdf_request_retrieve_unsafe_user_output_buffer, 0x4480, 0x40, true, 0xe7ff0b3d1c9f9f52)
#define _m275 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestsetinformation_t ), "_WDFFUNCTIONS.pfnWdfRequestSetInformation", pfn_wdf_request_set_information, 0x44c0, 0x40, true, 0xa05277aa07b5c3ea)
#define _m276 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetinformation_t ), "_WDFFUNCTIONS.pfnWdfRequestGetInformation", pfn_wdf_request_get_information, 0x4500, 0x40, true, 0xf39b9e55fa8c338a)
#define _m277 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetfileobject_t ), "_WDFFUNCTIONS.pfnWdfRequestGetFileObject", pfn_wdf_request_get_file_object, 0x4540, 0x40, true, 0x5411c217e127793e)
#define _m278 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, void*, uint64_t, struct wdf::wdfmemory_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestProbeAndLockUserBufferForRead", pfn_wdf_request_probe_and_lock_user_buffer_for_read, 0x4580, 0x40, true, 0xcc1f55dc7f0af296)
#define _m279 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*, void*, uint64_t, struct wdf::wdfmemory_t**)>*), "_WDFFUNCTIONS.pfnWdfRequestProbeAndLockUserBufferForWrite", pfn_wdf_request_probe_and_lock_user_buffer_for_write, 0x45c0, 0x40, true, 0xf53f0b902be90356)
#define _m280 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetrequestormode_t ), "_WDFFUNCTIONS.pfnWdfRequestGetRequestorMode", pfn_wdf_request_get_requestor_mode, 0x4600, 0x40, true, 0x73b77c08a349d077)
#define _m281 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestforwardtoioqueue_t ), "_WDFFUNCTIONS.pfnWdfRequestForwardToIoQueue", pfn_wdf_request_forward_to_io_queue, 0x4640, 0x40, true, 0x1e9a6f807ec99ab3)
#define _m282 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetioqueue_t ), "_WDFFUNCTIONS.pfnWdfRequestGetIoQueue", pfn_wdf_request_get_io_queue, 0x4680, 0x40, true, 0x3e5798cc9d1642df)
#define _m283 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestRequeue", pfn_wdf_request_requeue, 0x46c0, 0x40, true, 0x4b1e6f28ed644f35)
#define _m284 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequeststopacknowledge_t ), "_WDFFUNCTIONS.pfnWdfRequestStopAcknowledge", pfn_wdf_request_stop_acknowledge, 0x4700, 0x40, true, 0x532694f2b982b06c)
#define _m285 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestwdmgetirp_t ), "_WDFFUNCTIONS.pfnWdfRequestWdmGetIrp", pfn_wdf_request_wdm_get_irp, 0x4740, 0x40, true, 0x47b5a42da1bf9e3d)
#define _m286 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfioresreqlist_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListSetSlotNumber", pfn_wdf_io_resource_requirements_list_set_slot_number, 0x4780, 0x40, true, 0x1635428a51ef82d7)
#define _m287 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistsetinterfacetype_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListSetInterfaceType", pfn_wdf_io_resource_requirements_list_set_interface_type, 0x47c0, 0x40, true, 0xd9f0f3694f51c737)
#define _m288 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistappendioreslist_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListAppendIoResList", pfn_wdf_io_resource_requirements_list_append_io_res_list, 0x4800, 0x40, true, 0xa4dfd98440304e17)
#define _m289 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistinsertioreslist_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListInsertIoResList", pfn_wdf_io_resource_requirements_list_insert_io_res_list, 0x4840, 0x40, true, 0x756bf314edf1dd20)
#define _m290 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistgetcount_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListGetCount", pfn_wdf_io_resource_requirements_list_get_count, 0x4880, 0x40, true, 0x5205937ccb2b2140)
#define _m291 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistgetioreslist_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListGetIoResList", pfn_wdf_io_resource_requirements_list_get_io_res_list, 0x48c0, 0x40, true, 0x29a95203f54118de)
#define _m292 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfioresreqlist_t*, uint32_t)>*), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListRemove", pfn_wdf_io_resource_requirements_list_remove, 0x4900, 0x40, true, 0x8f7675e493c5fff2)
#define _m293 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcerequirementslistremovebyioreslist_t ), "_WDFFUNCTIONS.pfnWdfIoResourceRequirementsListRemoveByIoResList", pfn_wdf_io_resource_requirements_list_remove_by_io_res_list, 0x4940, 0x40, true, 0x67ef44a0a97dff2d)
#define _m294 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistcreate_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListCreate", pfn_wdf_io_resource_list_create, 0x4980, 0x40, true, 0x459703af1a9ed9e7)
#define _m295 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistappenddescriptor_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListAppendDescriptor", pfn_wdf_io_resource_list_append_descriptor, 0x49c0, 0x40, true, 0xdef8cfae334db08a)
#define _m296 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistinsertdescriptor_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListInsertDescriptor", pfn_wdf_io_resource_list_insert_descriptor, 0x4a00, 0x40, true, 0x813cb3b8e307e017)
#define _m297 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistupdatedescriptor_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListUpdateDescriptor", pfn_wdf_io_resource_list_update_descriptor, 0x4a40, 0x40, true, 0xe682e609d72005c6)
#define _m298 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistgetcount_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListGetCount", pfn_wdf_io_resource_list_get_count, 0x4a80, 0x40, true, 0x580eaaa741ad1ec2)
#define _m299 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistgetdescriptor_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListGetDescriptor", pfn_wdf_io_resource_list_get_descriptor, 0x4ac0, 0x40, true, 0x6f9ebc3c1da16f1c)
#define _m300 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistremove_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListRemove", pfn_wdf_io_resource_list_remove, 0x4b00, 0x40, true, 0xaffbe691ba7c6fd7)
#define _m301 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioresourcelistremovebydescriptor_t ), "_WDFFUNCTIONS.pfnWdfIoResourceListRemoveByDescriptor", pfn_wdf_io_resource_list_remove_by_descriptor, 0x4b40, 0x40, true, 0xe65f1619369b1fa5)
#define _m302 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistappenddescriptor_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListAppendDescriptor", pfn_wdf_cm_resource_list_append_descriptor, 0x4b80, 0x40, true, 0x2cb22b6a37623378)
#define _m303 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistinsertdescriptor_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListInsertDescriptor", pfn_wdf_cm_resource_list_insert_descriptor, 0x4bc0, 0x40, true, 0xa8aa24b0fbf48bc9)
#define _m304 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistgetcount_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListGetCount", pfn_wdf_cm_resource_list_get_count, 0x4c00, 0x40, true, 0x5a0e90116c18c728)
#define _m305 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistgetdescriptor_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListGetDescriptor", pfn_wdf_cm_resource_list_get_descriptor, 0x4c40, 0x40, true, 0x7419650c01b493a2)
#define _m306 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistremove_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListRemove", pfn_wdf_cm_resource_list_remove, 0x4c80, 0x40, true, 0x914b1439ff2b85a)
#define _m307 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcmresourcelistremovebydescriptor_t ), "_WDFFUNCTIONS.pfnWdfCmResourceListRemoveByDescriptor", pfn_wdf_cm_resource_list_remove_by_descriptor, 0x4cc0, 0x40, true, 0x3fde41d76b1867d4)
#define _m308 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfstringcreate_t ), "_WDFFUNCTIONS.pfnWdfStringCreate", pfn_wdf_string_create, 0x4d00, 0x40, true, 0xf4a2092306a43939)
#define _m309 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfstringgetunicodestring_t ), "_WDFFUNCTIONS.pfnWdfStringGetUnicodeString", pfn_wdf_string_get_unicode_string, 0x4d40, 0x40, true, 0xa5ecb3467c07c301)
#define _m310 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, void*)>*), "_WDFFUNCTIONS.pfnWdfObjectAcquireLock", pfn_wdf_object_acquire_lock, 0x4d80, 0x40, true, 0xb76305016a074cde)
#define _m311 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, void*)>*), "_WDFFUNCTIONS.pfnWdfObjectReleaseLock", pfn_wdf_object_release_lock, 0x4dc0, 0x40, true, 0x41978763b7173855)
#define _m312 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwaitlockcreate_t ), "_WDFFUNCTIONS.pfnWdfWaitLockCreate", pfn_wdf_wait_lock_create, 0x4e00, 0x40, true, 0xe30273f07bc76b8a)
#define _m313 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwaitlockacquire_t ), "_WDFFUNCTIONS.pfnWdfWaitLockAcquire", pfn_wdf_wait_lock_acquire, 0x4e40, 0x40, true, 0x1f7859890982a5e5)
#define _m314 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwaitlockrelease_t ), "_WDFFUNCTIONS.pfnWdfWaitLockRelease", pfn_wdf_wait_lock_release, 0x4e80, 0x40, true, 0x8fa29755a67ca314)
#define _m315 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfspinlockcreate_t ), "_WDFFUNCTIONS.pfnWdfSpinLockCreate", pfn_wdf_spin_lock_create, 0x4ec0, 0x40, true, 0x3f216df201987c1b)
#define _m316 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfspinlock_t*)>*), "_WDFFUNCTIONS.pfnWdfSpinLockAcquire", pfn_wdf_spin_lock_acquire, 0x4f00, 0x40, true, 0x5c323b8a7a486bd5)
#define _m317 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfspinlock_t*)>*), "_WDFFUNCTIONS.pfnWdfSpinLockRelease", pfn_wdf_spin_lock_release, 0x4f40, 0x40, true, 0x74c65ea2fbc6f9f3)
#define _m318 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdftimercreate_t ), "_WDFFUNCTIONS.pfnWdfTimerCreate", pfn_wdf_timer_create, 0x4f80, 0x40, true, 0xed7e11d48546c80)
#define _m319 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdftimerstart_t ), "_WDFFUNCTIONS.pfnWdfTimerStart", pfn_wdf_timer_start, 0x4fc0, 0x40, true, 0x6fab50978e8bbfbe)
#define _m320 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdftimerstop_t ), "_WDFFUNCTIONS.pfnWdfTimerStop", pfn_wdf_timer_stop, 0x5000, 0x40, true, 0xf52e0fd1485e09a1)
#define _m321 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdftimergetparentobject_t ), "_WDFFUNCTIONS.pfnWdfTimerGetParentObject", pfn_wdf_timer_get_parent_object, 0x5040, 0x40, true, 0x6d9caec5a55e9dd0)
#define _m322 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicecreate_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceCreate", pfn_wdf_usb_target_device_create, 0x5080, 0x40, true, 0xcb617168988f1c57)
#define _m323 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceretrieveinformation_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceRetrieveInformation", pfn_wdf_usb_target_device_retrieve_information, 0x50c0, 0x40, true, 0x1f2e7d3091b2184a)
#define _m324 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicegetdevicedescriptor_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceGetDeviceDescriptor", pfn_wdf_usb_target_device_get_device_descriptor, 0x5100, 0x40, true, 0xedd9b28c8a169ce4)
#define _m325 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceretrieveconfigdescriptor_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceRetrieveConfigDescriptor", pfn_wdf_usb_target_device_retrieve_config_descriptor, 0x5140, 0x40, true, 0x4a302c934fc05bd7)
#define _m326 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicequerystring_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceQueryString", pfn_wdf_usb_target_device_query_string, 0x5180, 0x40, true, 0x1d60b66be95b25b2)
#define _m327 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceallocandquerystring_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceAllocAndQueryString", pfn_wdf_usb_target_device_alloc_and_query_string, 0x51c0, 0x40, true, 0xcd3bf5e1ed51313f)
#define _m328 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceformatrequestforstring_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceFormatRequestForString", pfn_wdf_usb_target_device_format_request_for_string, 0x5200, 0x40, true, 0xea5bfe48aca50112)
#define _m329 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicegetnuminterfaces_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceGetNumInterfaces", pfn_wdf_usb_target_device_get_num_interfaces, 0x5240, 0x40, true, 0x19190183ee1cbe3c)
#define _m330 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceselectconfig_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceSelectConfig", pfn_wdf_usb_target_device_select_config, 0x5280, 0x40, true, 0x48f1fecf26c688cc)
#define _m331 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicewdmgetconfigurationhandle_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceWdmGetConfigurationHandle", pfn_wdf_usb_target_device_wdm_get_configuration_handle, 0x52c0, 0x40, true, 0xd108079c8f3a90f2)
#define _m332 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceretrievecurrentframenumber_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceRetrieveCurrentFrameNumber", pfn_wdf_usb_target_device_retrieve_current_frame_number, 0x5300, 0x40, true, 0x8213bf575e94ca4)
#define _m333 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicesendcontroltransfersynchronously_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceSendControlTransferSynchronously", pfn_wdf_usb_target_device_send_control_transfer_synchronously, 0x5340, 0x40, true, 0x6f0a0536efa4dbc3)
#define _m334 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceformatrequestforcontroltransfer_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceFormatRequestForControlTransfer", pfn_wdf_usb_target_device_format_request_for_control_transfer, 0x5380, 0x40, true, 0x68ddf72c5f27e105)
#define _m335 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceIsConnectedSynchronous", pfn_wdf_usb_target_device_is_connected_synchronous, 0x53c0, 0x40, true, 0xe3f8c180df2e1724)
#define _m336 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceResetPortSynchronously", pfn_wdf_usb_target_device_reset_port_synchronously, 0x5400, 0x40, true, 0x7e2e640b852e4a24)
#define _m337 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceCyclePortSynchronously", pfn_wdf_usb_target_device_cycle_port_synchronously, 0x5440, 0x40, true, 0x2136cb03dd3c7a93)
#define _m338 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceformatrequestforcycleport_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceFormatRequestForCyclePort", pfn_wdf_usb_target_device_format_request_for_cycle_port, 0x5480, 0x40, true, 0x9e570252c45e8a61)
#define _m339 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicesendurbsynchronously_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceSendUrbSynchronously", pfn_wdf_usb_target_device_send_urb_synchronously, 0x54c0, 0x40, true, 0x65f21ed46f4cb918)
#define _m340 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdeviceformatrequestforurb_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceFormatRequestForUrb", pfn_wdf_usb_target_device_format_request_for_urb, 0x5500, 0x40, true, 0xe1469f2650dc7f26)
#define _m341 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipegetinformation_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeGetInformation", pfn_wdf_usb_target_pipe_get_information, 0x5540, 0x40, true, 0x6a9c60f3f3ac45fa)
#define _m342 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeIsInEndpoint", pfn_wdf_usb_target_pipe_is_in_endpoint, 0x5580, 0x40, true, 0xfa20bd06d5ddba78)
#define _m343 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeIsOutEndpoint", pfn_wdf_usb_target_pipe_is_out_endpoint, 0x55c0, 0x40, true, 0x581b2de663da624)
#define _m344 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipegettype_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeGetType", pfn_wdf_usb_target_pipe_get_type, 0x5600, 0x40, true, 0xfb1765e1b31bbfce)
#define _m345 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipesetnomaximumpacketsizecheck_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeSetNoMaximumPacketSizeCheck", pfn_wdf_usb_target_pipe_set_no_maximum_packet_size_check, 0x5640, 0x40, true, 0x4c113850ca2600a8)
#define _m346 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::request_send_options_t*, struct wdf::memory_descriptor_t*, uint32_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeWriteSynchronously", pfn_wdf_usb_target_pipe_write_synchronously, 0x5680, 0x40, true, 0x96bd68dc59610bc)
#define _m347 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeFormatRequestForWrite", pfn_wdf_usb_target_pipe_format_request_for_write, 0x56c0, 0x40, true, 0x25754186cd78dc79)
#define _m348 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::request_send_options_t*, struct wdf::memory_descriptor_t*, uint32_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeReadSynchronously", pfn_wdf_usb_target_pipe_read_synchronously, 0x5700, 0x40, true, 0x3b5eaa1d05d092ab)
#define _m349 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeFormatRequestForRead", pfn_wdf_usb_target_pipe_format_request_for_read, 0x5740, 0x40, true, 0xc309c7d43e7c329f)
#define _m350 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipeconfigcontinuousreader_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeConfigContinuousReader", pfn_wdf_usb_target_pipe_config_continuous_reader, 0x5780, 0x40, true, 0xdd96be9a23d693a)
#define _m351 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::request_send_options_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeAbortSynchronously", pfn_wdf_usb_target_pipe_abort_synchronously, 0x57c0, 0x40, true, 0x38db4985ea982a4e)
#define _m352 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeFormatRequestForAbort", pfn_wdf_usb_target_pipe_format_request_for_abort, 0x5800, 0x40, true, 0x6463177fe57d6504)
#define _m353 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::request_send_options_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeResetSynchronously", pfn_wdf_usb_target_pipe_reset_synchronously, 0x5840, 0x40, true, 0xf072645d607a4d17)
#define _m354 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeFormatRequestForReset", pfn_wdf_usb_target_pipe_format_request_for_reset, 0x5880, 0x40, true, 0x3321ce25aca9dde1)
#define _m355 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipesendurbsynchronously_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeSendUrbSynchronously", pfn_wdf_usb_target_pipe_send_urb_synchronously, 0x58c0, 0x40, true, 0x613958840f7e6ece)
#define _m356 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfusbpipe_t*, struct wdf::wdfrequest_t*, struct wdf::wdfmemory_t*, struct wdf::wdfmemory_offset_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeFormatRequestForUrb", pfn_wdf_usb_target_pipe_format_request_for_urb, 0x5900, 0x40, true, 0x2480ecca2fd9f902)
#define _m357 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbinterface_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetInterfaceNumber", pfn_wdf_usb_interface_get_interface_number, 0x5940, 0x40, true, 0x6aad91d24a98ea55)
#define _m358 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbinterfacegetnumendpoints_t ), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetNumEndpoints", pfn_wdf_usb_interface_get_num_endpoints, 0x5980, 0x40, true, 0x8edceb59de5164e9)
#define _m359 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbinterfacegetdescriptor_t ), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetDescriptor", pfn_wdf_usb_interface_get_descriptor, 0x59c0, 0x40, true, 0xb14a302d3c110e0e)
#define _m360 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbinterfaceselectsetting_t ), "_WDFFUNCTIONS.pfnWdfUsbInterfaceSelectSetting", pfn_wdf_usb_interface_select_setting, 0x5a00, 0x40, true, 0xd9bef95209db4295)
#define _m361 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbinterfacegetendpointinformation_t ), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetEndpointInformation", pfn_wdf_usb_interface_get_endpoint_information, 0x5a40, 0x40, true, 0x297d5e68729ef222)
#define _m362 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicegetinterface_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceGetInterface", pfn_wdf_usb_target_device_get_interface, 0x5a80, 0x40, true, 0x6c77d99e9c4c7c03)
#define _m363 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbinterface_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetConfiguredSettingIndex", pfn_wdf_usb_interface_get_configured_setting_index, 0x5ac0, 0x40, true, 0x32f20d99eb0f9785)
#define _m364 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbinterface_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetNumConfiguredPipes", pfn_wdf_usb_interface_get_num_configured_pipes, 0x5b00, 0x40, true, 0x91bcdb5602fb8568)
#define _m365 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbinterfacegetconfiguredpipe_t ), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetConfiguredPipe", pfn_wdf_usb_interface_get_configured_pipe, 0x5b40, 0x40, true, 0xbc9daf7f1b3d1807)
#define _m366 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetpipewdmgetpipehandle_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetPipeWdmGetPipeHandle", pfn_wdf_usb_target_pipe_wdm_get_pipe_handle, 0x5b80, 0x40, true, 0xd8356e4a5bb633d6)
#define _m367 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfverifierdbgbreakpoint_t ), "_WDFFUNCTIONS.pfnWdfVerifierDbgBreakPoint", pfn_wdf_verifier_dbg_break_point, 0x5bc0, 0x40, true, 0x49ca7d31eee6b66f)
#define _m368 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfverifierkebugcheck_t ), "_WDFFUNCTIONS.pfnWdfVerifierKeBugCheck", pfn_wdf_verifier_ke_bug_check, 0x5c00, 0x40, true, 0x9c43c80bd0d58df5)
#define _m369 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiprovidercreate_t ), "_WDFFUNCTIONS.pfnWdfWmiProviderCreate", pfn_wdf_wmi_provider_create, 0x5c40, 0x40, true, 0x338670af81598354)
#define _m370 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiprovidergetdevice_t ), "_WDFFUNCTIONS.pfnWdfWmiProviderGetDevice", pfn_wdf_wmi_provider_get_device, 0x5c80, 0x40, true, 0xcd3f636f03a70149)
#define _m371 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiproviderisenabled_t ), "_WDFFUNCTIONS.pfnWdfWmiProviderIsEnabled", pfn_wdf_wmi_provider_is_enabled, 0x5cc0, 0x40, true, 0x1c0f1d2505cfce0a)
#define _m372 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiprovidergettracinghandle_t ), "_WDFFUNCTIONS.pfnWdfWmiProviderGetTracingHandle", pfn_wdf_wmi_provider_get_tracing_handle, 0x5d00, 0x40, true, 0xdf27e2d0c7b32a8a)
#define _m373 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstancecreate_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceCreate", pfn_wdf_wmi_instance_create, 0x5d40, 0x40, true, 0xbc7285837fa3b38c)
#define _m374 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstanceregister_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceRegister", pfn_wdf_wmi_instance_register, 0x5d80, 0x40, true, 0x191a72bc05296aea)
#define _m375 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstancederegister_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceDeregister", pfn_wdf_wmi_instance_deregister, 0x5dc0, 0x40, true, 0xbee5eeedf8d246b8)
#define _m376 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstancegetdevice_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceGetDevice", pfn_wdf_wmi_instance_get_device, 0x5e00, 0x40, true, 0x1d4416eac0c32732)
#define _m377 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstancegetprovider_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceGetProvider", pfn_wdf_wmi_instance_get_provider, 0x5e40, 0x40, true, 0x8dab552fe07ff674)
#define _m378 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfwmiinstancefireevent_t ), "_WDFFUNCTIONS.pfnWdfWmiInstanceFireEvent", pfn_wdf_wmi_instance_fire_event, 0x5e80, 0x40, true, 0x4b34c4069c717821)
#define _m379 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfworkitemcreate_t ), "_WDFFUNCTIONS.pfnWdfWorkItemCreate", pfn_wdf_work_item_create, 0x5ec0, 0x40, true, 0x616a2d7e7a0c97f9)
#define _m380 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfworkitem_t*)>*), "_WDFFUNCTIONS.pfnWdfWorkItemEnqueue", pfn_wdf_work_item_enqueue, 0x5f00, 0x40, true, 0xa0aa94f1a5b3213c)
#define _m381 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfworkitemgetparentobject_t ), "_WDFFUNCTIONS.pfnWdfWorkItemGetParentObject", pfn_wdf_work_item_get_parent_object, 0x5f40, 0x40, true, 0x14f401a728f3d895)
#define _m382 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfworkitem_t*)>*), "_WDFFUNCTIONS.pfnWdfWorkItemFlush", pfn_wdf_work_item_flush, 0x5f80, 0x40, true, 0x9056b610967212d8)
#define _m383 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcommonbuffercreatewithconfig_t ), "_WDFFUNCTIONS.pfnWdfCommonBufferCreateWithConfig", pfn_wdf_common_buffer_create_with_config, 0x5fc0, 0x40, true, 0x15a8605c67d24655)
#define _m384 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmaenablergetfragmentlength_t ), "_WDFFUNCTIONS.pfnWdfDmaEnablerGetFragmentLength", pfn_wdf_dma_enabler_get_fragment_length, 0x6000, 0x40, true, 0xab9ed0049458521d)
#define _m385 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmaenablerwdmgetdmaadapter_t ), "_WDFFUNCTIONS.pfnWdfDmaEnablerWdmGetDmaAdapter", pfn_wdf_dma_enabler_wdm_get_dma_adapter, 0x6040, 0x40, true, 0xb444895d4c9987d4)
#define _m386 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfusbinterface_t*)>*), "_WDFFUNCTIONS.pfnWdfUsbInterfaceGetNumSettings", pfn_wdf_usb_interface_get_num_settings, 0x6080, 0x40, true, 0xa9185cbe9b4a8376)
#define _m387 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, struct nt::device_object_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceRemoveDependentUsageDeviceObject", pfn_wdf_device_remove_dependent_usage_device_object, 0x60c0, 0x40, true, 0xc9b230392ccc09c8)
#define _m388 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicegetsystempoweraction_t ), "_WDFFUNCTIONS.pfnWdfDeviceGetSystemPowerAction", pfn_wdf_device_get_system_power_action, 0x6100, 0x40, true, 0x7f5e5bda0ea874e8)
#define _m389 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfinterruptsetextendedpolicy_t ), "_WDFFUNCTIONS.pfnWdfInterruptSetExtendedPolicy", pfn_wdf_interrupt_set_extended_policy, 0x6140, 0x40, true, 0x7013243c0f7d1a6)
#define _m390 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfioqueueassignforwardprogresspolicy_t ), "_WDFFUNCTIONS.pfnWdfIoQueueAssignForwardProgressPolicy", pfn_wdf_io_queue_assign_forward_progress_policy, 0x6180, 0x40, true, 0xa71614bdd04c3a74)
#define _m391 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*, const nt::unicode_view*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAssignContainerID", pfn_wdf_pdo_init_assign_container_id, 0x61c0, 0x40, true, 0x1a43f1e70eaaf14c)
#define _m392 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitAllowForwardingRequestToParent", pfn_wdf_pdo_init_allow_forwarding_request_to_parent, 0x6200, 0x40, true, 0x3de3c7790d94cba7)
#define _m393 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestmarkcancelableex_t ), "_WDFFUNCTIONS.pfnWdfRequestMarkCancelableEx", pfn_wdf_request_mark_cancelable_ex, 0x6240, 0x40, true, 0xf3e5f856ebaadc71)
#define _m394 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfrequest_t*)>*), "_WDFFUNCTIONS.pfnWdfRequestIsReserved", pfn_wdf_request_is_reserved, 0x6280, 0x40, true, 0xcba232171102de0)
#define _m395 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestforwardtoparentdeviceioqueue_t ), "_WDFFUNCTIONS.pfnWdfRequestForwardToParentDeviceIoQueue", pfn_wdf_request_forward_to_parent_device_io_queue, 0x62c0, 0x40, true, 0x3e2f170a4ec3b978)
#define _m396 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitallocate_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitAllocate", pfn_wdf_cx_device_init_allocate, 0x6300, 0x40, true, 0x9249962a88fef26e)
#define _m397 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitassignwdmirppreprocesscallback_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitAssignWdmIrpPreprocessCallback", pfn_wdf_cx_device_init_assign_wdm_irp_preprocess_callback, 0x6340, 0x40, true, 0x3e584cfc2ba48380)
#define _m398 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitsetioincallercontextcallback_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitSetIoInCallerContextCallback", pfn_wdf_cx_device_init_set_io_in_caller_context_callback, 0x6380, 0x40, true, 0x1767d86565e8ab05)
#define _m399 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitsetrequestattributes_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitSetRequestAttributes", pfn_wdf_cx_device_init_set_request_attributes, 0x63c0, 0x40, true, 0x7a225a26029f0bd4)
#define _m400 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitsetfileobjectconfig_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitSetFileObjectConfig", pfn_wdf_cx_device_init_set_file_object_config, 0x6400, 0x40, true, 0xb2f66948306d07d5)
#define _m401 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicewdmdispatchirp_t ), "_WDFFUNCTIONS.pfnWdfDeviceWdmDispatchIrp", pfn_wdf_device_wdm_dispatch_irp, 0x6440, 0x40, true, 0x35d0ab52a71d7fee)
#define _m402 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicewdmdispatchirptoioqueue_t ), "_WDFFUNCTIONS.pfnWdfDeviceWdmDispatchIrpToIoQueue", pfn_wdf_device_wdm_dispatch_irp_to_io_queue, 0x6480, 0x40, true, 0xc9f11310c17cfdf6)
#define _m403 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetremovelockoptions_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetRemoveLockOptions", pfn_wdf_device_init_set_remove_lock_options, 0x64c0, 0x40, true, 0xd9818fcc47619360)
#define _m404 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceconfigurewdmirpdispatchcallback_t ), "_WDFFUNCTIONS.pfnWdfDeviceConfigureWdmIrpDispatchCallback", pfn_wdf_device_configure_wdm_irp_dispatch_callback, 0x6500, 0x40, true, 0x7b661625a710ccbe)
#define _m405 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmaenablerconfiguresystemprofile_t ), "_WDFFUNCTIONS.pfnWdfDmaEnablerConfigureSystemProfile", pfn_wdf_dma_enabler_configure_system_profile, 0x6540, 0x40, true, 0xd406ad6311c9e653)
#define _m406 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactioninitializeusingoffset_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionInitializeUsingOffset", pfn_wdf_dma_transaction_initialize_using_offset, 0x6580, 0x40, true, 0x7cc0fd5a1f107f4b)
#define _m407 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactiongettransferinfo_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionGetTransferInfo", pfn_wdf_dma_transaction_get_transfer_info, 0x65c0, 0x40, true, 0x84cfeaa435730de4)
#define _m408 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionsetchannelconfigurationcallback_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetChannelConfigurationCallback", pfn_wdf_dma_transaction_set_channel_configuration_callback, 0x6600, 0x40, true, 0x7da13a5ef84fb0ba)
#define _m409 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionsettransfercompletecallback_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetTransferCompleteCallback", pfn_wdf_dma_transaction_set_transfer_complete_callback, 0x6640, 0x40, true, 0x42051eb80b682565)
#define _m410 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*, uint8_t)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetImmediateExecution", pfn_wdf_dma_transaction_set_immediate_execution, 0x6680, 0x40, true, 0xe7d2ddf45c0af3e1)
#define _m411 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionallocateresources_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionAllocateResources", pfn_wdf_dma_transaction_allocate_resources, 0x66c0, 0x40, true, 0x14d531fdbbabbc4f)
#define _m412 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionsetdeviceaddressoffset_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetDeviceAddressOffset", pfn_wdf_dma_transaction_set_device_address_offset, 0x6700, 0x40, true, 0xd3e25b77f007fa5c)
#define _m413 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionFreeResources", pfn_wdf_dma_transaction_free_resources, 0x6740, 0x40, true, 0xd0936819a4e3dddf)
#define _m414 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactioncancel_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionCancel", pfn_wdf_dma_transaction_cancel, 0x6780, 0x40, true, 0x51ac8f3e61eb988d)
#define _m415 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdmatransactionwdmgettransfercontext_t ), "_WDFFUNCTIONS.pfnWdfDmaTransactionWdmGetTransferContext", pfn_wdf_dma_transaction_wdm_get_transfer_context, 0x67c0, 0x40, true, 0x798ba1e7482dc20f)
#define _m416 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptQueueWorkItemForIsr", pfn_wdf_interrupt_queue_work_item_for_isr, 0x6800, 0x40, true, 0xfa1b5bc9226a4d37)
#define _m417 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptTryToAcquireLock", pfn_wdf_interrupt_try_to_acquire_lock, 0x6840, 0x40, true, 0xa35dd5aecebe11c9)
#define _m418 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*, sdk::function<void(struct wdf::wdfqueue_t*, void*)>*, void*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueStopAndPurge", pfn_wdf_io_queue_stop_and_purge, 0x6880, 0x40, true, 0xc1046a2d725a1fc9)
#define _m419 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfqueue_t*)>*), "_WDFFUNCTIONS.pfnWdfIoQueueStopAndPurgeSynchronously", pfn_wdf_io_queue_stop_and_purge_synchronously, 0x68c0, 0x40, true, 0xd53f438d6c90c6b3)
#define _m420 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetpurge_t ), "_WDFFUNCTIONS.pfnWdfIoTargetPurge", pfn_wdf_io_target_purge, 0x6900, 0x40, true, 0xe92810178b1c2cb1)
#define _m421 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicecreatewithparameters_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceCreateWithParameters", pfn_wdf_usb_target_device_create_with_parameters, 0x6940, 0x40, true, 0xe36d3473294d4f92)
#define _m422 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicequeryusbcapability_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceQueryUsbCapability", pfn_wdf_usb_target_device_query_usb_capability, 0x6980, 0x40, true, 0x222c59003d9d14dc)
#define _m423 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicecreateurb_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceCreateUrb", pfn_wdf_usb_target_device_create_urb, 0x69c0, 0x40, true, 0xb0d8c7fb79fc08a5)
#define _m424 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfusbtargetdevicecreateisochurb_t ), "_WDFFUNCTIONS.pfnWdfUsbTargetDeviceCreateIsochUrb", pfn_wdf_usb_target_device_create_isoch_urb, 0x6a00, 0x40, true, 0x510b5cd97d1144c7)
#define _m425 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicewdmassignpowerframeworksettings_t ), "_WDFFUNCTIONS.pfnWdfDeviceWdmAssignPowerFrameworkSettings", pfn_wdf_device_wdm_assign_power_framework_settings, 0x6a40, 0x40, true, 0x86a47109e9e51fe6)
#define _m426 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionStopSystemTransfer", pfn_wdf_dma_transaction_stop_system_transfer, 0x6a80, 0x40, true, 0x54f590248e094b30)
#define _m427 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxverifierkebugcheck_t ), "_WDFFUNCTIONS.pfnWdfCxVerifierKeBugCheck", pfn_wdf_cx_verifier_ke_bug_check, 0x6ac0, 0x40, true, 0xe72fab47ada89bdc)
#define _m428 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptReportActive", pfn_wdf_interrupt_report_active, 0x6b00, 0x40, true, 0x496043ec98fd303f)
#define _m429 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfinterrupt_t*)>*), "_WDFFUNCTIONS.pfnWdfInterruptReportInactive", pfn_wdf_interrupt_report_inactive, 0x6b40, 0x40, true, 0x553a9901f2d96366)
#define _m430 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetreleasehardwareorderonfailure_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetReleaseHardwareOrderOnFailure", pfn_wdf_device_init_set_release_hardware_order_on_failure, 0x6b80, 0x40, true, 0x5dce6b4f4c19c359)
#define _m431 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfgettriageinfo_t ), "_WDFFUNCTIONS.pfnWdfGetTriageInfo", pfn_wdf_get_triage_info, 0x6bc0, 0x40, true, 0xf38ec2b535bf572b)
#define _m432 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceinitsetiotypeex_t ), "_WDFFUNCTIONS.pfnWdfDeviceInitSetIoTypeEx", pfn_wdf_device_init_set_io_type_ex, 0x6c00, 0x40, true, 0x4d5cfd4f37b19f73)
#define _m433 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevicequerypropertyex_t ), "_WDFFUNCTIONS.pfnWdfDeviceQueryPropertyEx", pfn_wdf_device_query_property_ex, 0x6c40, 0x40, true, 0x28760eeafe97b890)
#define _m434 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceallocandquerypropertyex_t ), "_WDFFUNCTIONS.pfnWdfDeviceAllocAndQueryPropertyEx", pfn_wdf_device_alloc_and_query_property_ex, 0x6c80, 0x40, true, 0xbe3f92003102993c)
#define _m435 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceassignproperty_t ), "_WDFFUNCTIONS.pfnWdfDeviceAssignProperty", pfn_wdf_device_assign_property, 0x6cc0, 0x40, true, 0xb084699a4961d4e1)
#define _m436 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitquerypropertyex_t ), "_WDFFUNCTIONS.pfnWdfFdoInitQueryPropertyEx", pfn_wdf_fdo_init_query_property_ex, 0x6d00, 0x40, true, 0x401853990eb86f4b)
#define _m437 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdffdoinitallocandquerypropertyex_t ), "_WDFFUNCTIONS.pfnWdfFdoInitAllocAndQueryPropertyEx", pfn_wdf_fdo_init_alloc_and_query_property_ex, 0x6d40, 0x40, true, 0x9cc3be1de29efde7)
#define _m438 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, uint8_t, void*, int32_t, char*)>*, sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, uint8_t, void*, int32_t, const char*)>*>), "_WDFFUNCTIONS.pfnWdfDeviceStopIdleActual", pfn_wdf_device_stop_idle_actual, 0x6d80, 0x40, true, 0x981757dba000944e)
#define _m439 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, void*, int32_t, char*)>*, sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, void*, int32_t, const char*)>*>), "_WDFFUNCTIONS.pfnWdfDeviceResumeIdleActual", pfn_wdf_device_resume_idle_actual, 0x6dc0, 0x40, true, 0xa8388af32d00f0aa)
#define _m440 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct wdf::wdfiotarget_t*(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceGetSelfIoTarget", pfn_wdf_device_get_self_io_target, 0x6e00, 0x40, true, 0xc083f5fd180a436d)
#define _m441 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfDeviceInitAllowSelfIoTarget", pfn_wdf_device_init_allow_self_io_target, 0x6e40, 0x40, true, 0xe93131bac332584e)
#define _m442 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfiotargetselfassigndefaultioqueue_t ), "_WDFFUNCTIONS.pfnWdfIoTargetSelfAssignDefaultIoQueue", pfn_wdf_io_target_self_assign_default_io_queue, 0x6e80, 0x40, true, 0xb059be174f6f6e75)
#define _m443 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceopendevicemapkey_t ), "_WDFFUNCTIONS.pfnWdfDeviceOpenDevicemapKey", pfn_wdf_device_open_devicemap_key, 0x6ec0, 0x40, true, 0x796564d569dbd7f8)
#define _m444 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdmatransaction_t*, uint8_t)>*), "_WDFFUNCTIONS.pfnWdfDmaTransactionSetSingleTransferRequirement", pfn_wdf_dma_transaction_set_single_transfer_requirement, 0x6f00, 0x40, true, 0x3be4b90b0301d826)
#define _m445 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitsetpnppowereventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitSetPnpPowerEventCallbacks", pfn_wdf_cx_device_init_set_pnp_power_event_callbacks, 0x6f40, 0x40, true, 0xde5d853ffa5c4033)
#define _m446 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct wdf::driver_globals_t*, struct wdf::wdffileobject_t*)>*), "_WDFFUNCTIONS.pfnWdfFileObjectGetInitiatorProcessId", pfn_wdf_file_object_get_initiator_process_id, 0x6f80, 0x40, true, 0x43c009321d2d9503)
#define _m447 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfrequestgetrequestorprocessid_t ), "_WDFFUNCTIONS.pfnWdfRequestGetRequestorProcessId", pfn_wdf_request_get_requestor_process_id, 0x6fc0, 0x40, true, 0xc88f3a55b12f031)
#define _m448 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdeviceretrievecompaniontarget_t ), "_WDFFUNCTIONS.pfnWdfDeviceRetrieveCompanionTarget", pfn_wdf_device_retrieve_companion_target, 0x7000, 0x40, true, 0xe07fe74695f986f4)
#define _m449 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcompaniontargetsendtasksynchronously_t ), "_WDFFUNCTIONS.pfnWdfCompanionTargetSendTaskSynchronously", pfn_wdf_companion_target_send_task_synchronously, 0x7040, 0x40, true, 0xfc0adfcb013ad425)
#define _m450 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcompaniontargetwdmgetcompanionprocess_t ), "_WDFFUNCTIONS.pfnWdfCompanionTargetWdmGetCompanionProcess", pfn_wdf_companion_target_wdm_get_companion_process, 0x7080, 0x40, true, 0x7b1ece132c77872f)
#define _m451 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::driver_globals_t*, struct wdf::wdfdriver_t*, uint32_t, struct wdf::object_attributes_t*, struct wdf::wdfkey_t**)>*), "_WDFFUNCTIONS.pfnWdfDriverOpenPersistentStateRegistryKey", pfn_wdf_driver_open_persistent_state_registry_key, 0x70c0, 0x40, true, 0xa3f843006f750634)
#define _m452 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdrivererrorreportapimissing_t ), "_WDFFUNCTIONS.pfnWdfDriverErrorReportApiMissing", pfn_wdf_driver_error_report_api_missing, 0x7100, 0x40, true, 0x904ea2ee6dd3c1b0)
#define _m453 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_init_t*)>*), "_WDFFUNCTIONS.pfnWdfPdoInitRemovePowerDependencyOnParent", pfn_wdf_pdo_init_remove_power_dependency_on_parent, 0x7140, 0x40, true, 0xb548d0e481ef0ff1)
#define _m454 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitallocatecontext_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitAllocateContext", pfn_wdf_cx_device_init_allocate_context, 0x7180, 0x40, true, 0x25f9a49dc5e7fef1)
#define _m455 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitgettypedcontextworker_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitGetTypedContextWorker", pfn_wdf_cx_device_init_get_typed_context_worker, 0x71c0, 0x40, true, 0xe04088a4538d757e)
#define _m456 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcxdeviceinitsetpowerpolicyeventcallbacks_t ), "_WDFFUNCTIONS.pfnWdfCxDeviceInitSetPowerPolicyEventCallbacks", pfn_wdf_cx_device_init_set_power_policy_event_callbacks, 0x7200, 0x40, true, 0x46c2ac12ddfd7215)
#define _m457 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::driver_globals_t*, struct wdf::wdfdevice_t*, const struct nt::guid_t*, const nt::unicode_view*, uint8_t)>*), "_WDFFUNCTIONS.pfnWdfDeviceSetDeviceInterfaceStateEx", pfn_wdf_device_set_device_interface_state_ex, 0x7240, 0x40, true, 0x10f948fe0e50d4d5)
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
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#define _m164
#define _m165
#define _m166
#define _m167
#define _m168
#define _m169
#define _m170
#define _m171
#define _m172
#define _m173
#define _m174
#define _m175
#define _m176
#define _m177
#define _m178
#define _m179
#define _m180
#define _m181
#define _m182
#define _m183
#define _m184
#define _m185
#define _m186
#define _m187
#define _m188
#define _m189
#define _m190
#define _m191
#define _m192
#define _m193
#define _m194
#define _m195
#define _m196
#define _m197
#define _m198
#define _m199
#define _m200
#define _m201
#define _m202
#define _m203
#define _m204
#define _m205
#define _m206
#define _m207
#define _m208
#define _m209
#define _m210
#define _m211
#define _m212
#define _m213
#define _m214
#define _m215
#define _m216
#define _m217
#define _m218
#define _m219
#define _m220
#define _m221
#define _m222
#define _m223
#define _m224
#define _m225
#define _m226
#define _m227
#define _m228
#define _m229
#define _m230
#define _m231
#define _m232
#define _m233
#define _m234
#define _m235
#define _m236
#define _m237
#define _m238
#define _m239
#define _m240
#define _m241
#define _m242
#define _m243
#define _m244
#define _m245
#define _m246
#define _m247
#define _m248
#define _m249
#define _m250
#define _m251
#define _m252
#define _m253
#define _m254
#define _m255
#define _m256
#define _m257
#define _m258
#define _m259
#define _m260
#define _m261
#define _m262
#define _m263
#define _m264
#define _m265
#define _m266
#define _m267
#define _m268
#define _m269
#define _m270
#define _m271
#define _m272
#define _m273
#define _m274
#define _m275
#define _m276
#define _m277
#define _m278
#define _m279
#define _m280
#define _m281
#define _m282
#define _m283
#define _m284
#define _m285
#define _m286
#define _m287
#define _m288
#define _m289
#define _m290
#define _m291
#define _m292
#define _m293
#define _m294
#define _m295
#define _m296
#define _m297
#define _m298
#define _m299
#define _m300
#define _m301
#define _m302
#define _m303
#define _m304
#define _m305
#define _m306
#define _m307
#define _m308
#define _m309
#define _m310
#define _m311
#define _m312
#define _m313
#define _m314
#define _m315
#define _m316
#define _m317
#define _m318
#define _m319
#define _m320
#define _m321
#define _m322
#define _m323
#define _m324
#define _m325
#define _m326
#define _m327
#define _m328
#define _m329
#define _m330
#define _m331
#define _m332
#define _m333
#define _m334
#define _m335
#define _m336
#define _m337
#define _m338
#define _m339
#define _m340
#define _m341
#define _m342
#define _m343
#define _m344
#define _m345
#define _m346
#define _m347
#define _m348
#define _m349
#define _m350
#define _m351
#define _m352
#define _m353
#define _m354
#define _m355
#define _m356
#define _m357
#define _m358
#define _m359
#define _m360
#define _m361
#define _m362
#define _m363
#define _m364
#define _m365
#define _m366
#define _m367
#define _m368
#define _m369
#define _m370
#define _m371
#define _m372
#define _m373
#define _m374
#define _m375
#define _m376
#define _m377
#define _m378
#define _m379
#define _m380
#define _m381
#define _m382
#define _m383
#define _m384
#define _m385
#define _m386
#define _m387
#define _m388
#define _m389
#define _m390
#define _m391
#define _m392
#define _m393
#define _m394
#define _m395
#define _m396
#define _m397
#define _m398
#define _m399
#define _m400
#define _m401
#define _m402
#define _m403
#define _m404
#define _m405
#define _m406
#define _m407
#define _m408
#define _m409
#define _m410
#define _m411
#define _m412
#define _m413
#define _m414
#define _m415
#define _m416
#define _m417
#define _m418
#define _m419
#define _m420
#define _m421
#define _m422
#define _m423
#define _m424
#define _m425
#define _m426
#define _m427
#define _m428
#define _m429
#define _m430
#define _m431
#define _m432
#define _m433
#define _m434
#define _m435
#define _m436
#define _m437
#define _m438
#define _m439
#define _m440
#define _m441
#define _m442
#define _m443
#define _m444
#define _m445
#define _m446
#define _m447
#define _m448
#define _m449
#define _m450
#define _m451
#define _m452
#define _m453
#define _m454
#define _m455
#define _m456
#define _m457
#endif