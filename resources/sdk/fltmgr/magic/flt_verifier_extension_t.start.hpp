#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_verifier_extension_flags_t), "_FLT_VERIFIER_EXTENSION.Flags", flags, 0x0, 0x20, true, 0x3190b1501f129a24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_FLT_VERIFIER_EXTENSION.FilterUnload", filter_unload, 0x40, 0x40, true, 0x25a51ac879e6a31d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*), "_FLT_VERIFIER_EXTENSION.InstanceSetup", instance_setup, 0x80, 0x40, true, 0xf7b3d2b58fb77bf0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_VERIFIER_EXTENSION.InstanceQueryTeardown", instance_query_teardown, 0xc0, 0x40, true, 0x8c4c278fb6859558)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_VERIFIER_EXTENSION.InstanceTeardownStart", instance_teardown_start, 0x100, 0x40, true, 0x8175f58afcb48473)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*), "_FLT_VERIFIER_EXTENSION.InstanceTeardownComplete", instance_teardown_complete, 0x140, 0x40, true, 0xff3e1edc3ba13766)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*), "_FLT_VERIFIER_EXTENSION.GenerateFileName", generate_file_name, 0x180, 0x40, true, 0x1bd831689822dbb9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_VERIFIER_EXTENSION.NormalizeNameComponent", normalize_name_component, 0x1c0, 0x40, true, 0xceec089b8eac6aec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_FLT_VERIFIER_EXTENSION.NormalizeNameComponentEx", normalize_name_component_ex, 0x200, 0x40, true, 0x78ca2d09aeb44dc1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::flt_verifier_operations_t, 50>), "_FLT_VERIFIER_EXTENSION.Operations", operations, 0x240, 0x0, true, 0xba4955e5038432c6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_FLT_VERIFIER_EXTENSION.Name", name, 0x1b40, 0x40, true, 0xab0ca08d8e6a85c3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_FLT_VERIFIER_EXTENSION.FltVerifierObjectsLookasideList", flt_verifier_objects_lookaside_list, 0x1c00, 0x0, true, 0x15e68b363589b701)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_root_t), "_FLT_VERIFIER_EXTENSION.List", list, 0x2000, 0x40, true, 0x604de598c7df4fe0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FLT_VERIFIER_EXTENSION.Lock", lock, 0x2040, 0x40, true, 0xe01b94b380c711f0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 11>), "_FLT_VERIFIER_EXTENSION.Count", count, 0x2080, 0x60, true, 0x76f3e20312611c83)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_VERIFIER_EXTENSION.FltVerifierObjectsAllocFailures", flt_verifier_objects_alloc_failures, 0x21e0, 0x20, true, 0xf183a3593b230013)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_VERIFIER_EXTENSION.FltVerifierObjectsUnlinkFailures", flt_verifier_objects_unlink_failures, 0x2200, 0x20, true, 0x93b71812f532c820)
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
#define _m16
#endif