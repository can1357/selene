#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CALLBACK_NODE.CallbackLinks", callback_links, 0x0, 0x80, true, 0xaddf49eeac04362a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_CALLBACK_NODE.Instance", instance, 0x80, 0x40, true, 0x49232127fdc24a8f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*), "_CALLBACK_NODE.PreOperation", pre_operation, 0xc0, 0x40, true, 0xee804678b473423c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "_CALLBACK_NODE.PostOperation", post_operation, 0x100, 0x40, true, 0x9ce1a65a4095642d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*), "_CALLBACK_NODE.GenerateFileName", generate_file_name, 0xc0, 0x40, true, 0x2adfecf2f7291955)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_CALLBACK_NODE.NormalizeNameComponent", normalize_name_component, 0xc0, 0x40, true, 0xf9b2517727755d4b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*), "_CALLBACK_NODE.NormalizeNameComponentEx", normalize_name_component_ex, 0xc0, 0x40, true, 0x3699bcf738a3330f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void**)>*), "_CALLBACK_NODE.NormalizeContextCleanup", normalize_context_cleanup, 0x100, 0x40, true, 0x97244fe0712d00d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::callback_node_flags_t), "_CALLBACK_NODE.Flags", flags, 0x140, 0x20, true, 0x42ddcb9335dcbf07)
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
#endif