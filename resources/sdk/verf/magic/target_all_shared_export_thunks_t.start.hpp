#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verifier::shared_export_thunk_t*), "_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.SharedExportThunks", shared_export_thunks, 0x0, 0x40, true, 0x118ed0df5962afc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verifier::shared_export_thunk_t*), "_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.PoolSharedExportThunks", pool_shared_export_thunks, 0x40, 0x40, true, 0xde44df5324962a3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verifier::shared_export_thunk_t*), "_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.XdvSharedExportThunks", xdv_shared_export_thunks, 0xc0, 0x40, true, 0x5512280e520a7d68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verifier::shared_export_thunk_t*), "_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.OrderDependentSharedExportThunks", order_dependent_shared_export_thunks, 0x80, 0x40, true, 0x111fc9cdfc3599f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif