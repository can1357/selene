#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.Version", version, 0x0, 0x0, false, 0x6fa280ff1a3481a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.BlockerActiveDereference", blocker_active_dereference, 0x0, 0x0, false, 0x6d83eb877f1fac47)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.BlockerActiveReference", blocker_active_reference, 0x0, 0x0, false, 0xe2439cf6f84f2181)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, struct pci::sleepstudy_blocker_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.BuildBlocker", build_blocker, 0x0, 0x0, false, 0x2859b8303b686f94)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, uint32_t, struct wdf::sleepstudy_data_entry_t*, struct wdf::sleepstudy_blocker_data_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.CreateBlockerData", create_blocker_data, 0x0, 0x0, false, 0x6d3dc8566d39b777)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, struct nt::device_object_t*, uint32_t, struct wdf::sleepstudy_blocker_builder_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.CreateBlockerFromComponent", create_blocker_from_component, 0x0, 0x0, false, 0x28cec0c1a1aeab25)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, struct nt::device_object_t*, struct wdf::sleepstudy_blocker_builder_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.CreateBlockerFromDevice", create_blocker_from_device, 0x0, 0x0, false, 0x406196054d40029b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, union wdf::sleepstudy_blocker_guid_t*, nt::unicode_view*, enum wdf::sleepstudy_blocker_type_t, struct wdf::sleepstudy_blocker_builder_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.CreateBlockerFromGuid", create_blocker_from_guid, 0x0, 0x0, false, 0xed8bbce80a7e163f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct wdf::sleepstudy_library_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.CreateLibrary", create_library, 0x0, 0x0, false, 0x607ce13c1a060437)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.DestroyBlocker", destroy_blocker, 0x0, 0x0, false, 0xbb9266824600b787)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.DestroyBlockerBuilder", destroy_blocker_builder, 0x0, 0x0, false, 0x6ad4c16d9598ef03)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_data_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.DestroyBlockerData", destroy_blocker_data, 0x0, 0x0, false, 0xd47d0a49f059d9da)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_library_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.DestroyLibrary", destroy_library, 0x0, 0x0, false, 0x2234d7c5f6118306)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::sleepstudy_blocker_t*, union wdf::sleepstudy_blocker_guid_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.GetBlockerGuid", get_blocker_guid, 0x0, 0x0, false, 0x17a28fc25bc75b16)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::sleepstudy_blocker_t*, uint8_t*, uint64_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.QueryBlockerStatistics", query_blocker_statistics, 0x0, 0x0, false, 0x8b61fbbfa4027d7d)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, nt::unicode_view*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.SetBlockerFriendlyName", set_blocker_friendly_name, 0x0, 0x0, false, 0x2be8d59f8ef25d88)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, struct pci::sleepstudy_blocker_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.SetBlockerParentHandle", set_blocker_parent_handle, 0x0, 0x0, false, 0x9851bfab5c9d3b0d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, uint8_t)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.SetBlockerVisible", set_blocker_visible, 0x0, 0x0, false, 0x12e32662a936c02d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::ss_library_t**, void*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.Initialize", initialize, 0x0, 0x0, false, 0x9a1a04994fb98afb)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::ss_library_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.Uninitialize", uninitialize, 0x0, 0x0, false, 0x667fa27906712c14)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum wdf::sleepstudy_helper_namespace_t, uint64_t, struct nt::guid_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.GenerateGuid", generate_guid, 0x0, 0x0, false, 0x11dea92ca1b759a7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::device_object_t*, struct nt::device_object_t*, struct hid::ss_component_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.RegisterPdoWithParentPdo", register_pdo_with_parent_pdo, 0x0, 0x0, false, 0x60d521ca170a118c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::ss_library_t*, void*, struct nt::device_object_t*, struct hid::ss_component_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.RegisterPdoWithParentHandle", register_pdo_with_parent_handle, 0x0, 0x0, false, 0x1da7e29e3c56e280)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::guid_t, struct nt::device_object_t*, struct hid::ss_component_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.RegisterPdoWithParentGuid", register_pdo_with_parent_guid, 0x0, 0x0, false, 0xe66264caa4ce00ca)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::guid_t, struct nt::guid_t, nt::unicode_view*, struct hid::ss_component_t**)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.RegisterComponentEx", register_component_ex, 0x0, 0x0, false, 0x914390f4dae5a9b9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.UnregisterComponent", unregister_component, 0x0, 0x0, false, 0x7fb65c3417df1178)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.ComponentActive", component_active, 0x0, 0x0, false, 0x2c9337c21cffc18c)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.ComponentInactive", component_inactive, 0x0, 0x0, false, 0x453376fc88f6021f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.ComponentActiveLocked", component_active_locked, 0x0, 0x0, false, 0xadb003ff186e2e21)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.ResetComponentsStartTime", reset_components_start_time, 0x0, 0x0, false, 0x85ab8be41f1d0b8d)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*, uint8_t*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.AcquireComponentLock", acquire_component_lock, 0x0, 0x0, false, 0x309f123b88a21af2)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hid::ss_component_t*, uint8_t)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.ReleaseComponentLock", release_component_lock, 0x0, 0x0, false, 0xc2958564df34827b)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, nt::unicode_view*)>*), "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.GetPdoFriendlyName", get_pdo_friendly_name, 0x0, 0x0, false, 0xbfac18fef68238f)
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
#endif