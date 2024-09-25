#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_object_t), "_FLT_FILTER.Base", base, 0x0, 0x80, true, 0x4126a895f7f1d81a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_FLT_FILTER.Frame", frame, 0x180, 0x40, true, 0x3329f5394e2afffc)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILTER.Name", name, 0x1c0, 0x80, true, 0xa7ed995f9fa1a4fc)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_FILTER.DefaultAltitude", default_altitude, 0x240, 0x80, true, 0xaf868c41550d2a8d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_filter_flags_t), "_FLT_FILTER.Flags", flags, 0x2c0, 0x20, true, 0xebcf7a6afe6e2219)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_FLT_FILTER.DriverObject", driver_object, 0x300, 0x40, true, 0xc5c655e817ec004)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_FLT_FILTER.InstanceList", instance_list, 0x340, 0x0, true, 0xee9ec14abba1d602)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_verifier_extension_t*), "_FLT_FILTER.VerifierExtension", verifier_extension, 0x740, 0x40, true, 0x97fa41266d64fa6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_FILTER.VerifiedFiltersLink", verified_filters_link, 0x780, 0x80, true, 0xabc8884d5303e16d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_FLT_FILTER.FilterUnload", filter_unload, 0x800, 0x40, true, 0x83ab8886b4a4b772)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*), "_FLT_FILTER.InstanceSetup", instance_setup, 0x840, 0x40, true, 0xf2dd8b7de62399ed)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_FILTER.InstanceQueryTeardown", instance_query_teardown, 0x880, 0x40, true, 0xfe7fb061cadaaff7)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_FILTER.InstanceTeardownStart", instance_teardown_start, 0x8c0, 0x40, true, 0xd6a5b849feda104c)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_FILTER.InstanceTeardownComplete", instance_teardown_complete, 0x900, 0x40, true, 0x53a4fe530f3fb4cb)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_FLT_FILTER.SupportedContextsListHead", supported_contexts_list_head, 0x940, 0x40, true, 0xff4f9eecf48bd712)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::allocate_context_header_t*, 7>), "_FLT_FILTER.SupportedContexts", supported_contexts, 0x980, 0xc0, true, 0x7e1d65bd30284856)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*), "_FLT_FILTER.PreVolumeMount", pre_volume_mount, 0xb40, 0x40, true, 0x54507908181738b0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "_FLT_FILTER.PostVolumeMount", post_volume_mount, 0xb80, 0x40, true, 0x5cae11c830758e40)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*), "_FLT_FILTER.GenerateFileName", generate_file_name, 0xbc0, 0x40, true, 0xbd840d05a5d2ba3d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_FILTER.NormalizeNameComponent", normalize_name_component, 0xc00, 0x40, true, 0x88140311a52c0564)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_FILTER.NormalizeNameComponentEx", normalize_name_component_ex, 0xc40, 0x40, true, 0xfd133e287829fe3a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void**)>*), "_FLT_FILTER.NormalizeContextCleanup", normalize_context_cleanup, 0xc80, 0x40, true, 0x50967b1bef0c390f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "_FLT_FILTER.KtmNotification", ktm_notification, 0xcc0, 0x40, true, 0xa16f222da5c05a25)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, void*, struct fltmgr::flt_callback_data_t*)>*), "_FLT_FILTER.SectionNotification", section_notification, 0xd00, 0x40, true, 0xaad5b2e6523eb8ce)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_operation_registration_t*), "_FLT_FILTER.Operations", operations, 0xd40, 0x40, true, 0xb6a3e3bc13d4aa60)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_FLT_FILTER.OldDriverUnload", old_driver_unload, 0xd80, 0x40, true, 0xfab019cd043740d8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLT_FILTER.ActiveOpens", active_opens, 0xdc0, 0x80, true, 0xd4d7f831f6fc04a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLT_FILTER.ConnectionList", connection_list, 0x1040, 0x80, true, 0x5c2266590f8aec77)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLT_FILTER.PortList", port_list, 0x12c0, 0x80, true, 0xd4d4b0cf9b39e0b3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_FLT_FILTER.PortLock", port_lock, 0x1540, 0x40, true, 0xcd8e522ebbe83aac)
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
#endif