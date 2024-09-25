#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_OPERATION_REGISTRATION.MajorFunction", major_function, 0x0, 0x8, true, 0x3b86b5455edc3c3e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_OPERATION_REGISTRATION.Flags", flags, 0x20, 0x20, true, 0x1cfbf3d2ede71fd0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*), "_FLT_OPERATION_REGISTRATION.PreOperation", pre_operation, 0x40, 0x40, true, 0x1b0450cdd14475e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*), "_FLT_OPERATION_REGISTRATION.PostOperation", post_operation, 0x80, 0x40, true, 0x4d4eb5b30f937043)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif