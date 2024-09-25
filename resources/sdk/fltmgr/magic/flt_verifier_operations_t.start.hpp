#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*), "FLT_VERIFIER_OPERATIONS.PreOperation", pre_operation, 0x0, 0x40, true, 0x376e66b7bcca74c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "FLT_VERIFIER_OPERATIONS.PostOperation", post_operation, 0x40, 0x40, true, 0x80f254091786d070)
#else
#define _m00
#define _m01
#endif