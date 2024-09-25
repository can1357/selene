#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::blob_id_t), "_BLOB_TYPE.ResourceId", resource_id, 0x0, 0x20, true, 0xdc49f7b898f1b1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BLOB_TYPE.PoolTag", pool_tag, 0x20, 0x20, true, 0xb591da19842f937d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BLOB_TYPE.LookasideIndex", lookaside_index, 0x40, 0x20, true, 0xcd8b25069966b686)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BLOB_TYPE.Flags", flags, 0x60, 0x20, true, 0xbf8a3ec06e1794dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::blob_counters_t*), "_BLOB_TYPE.Counters", counters, 0x80, 0x40, true, 0x3f1a345c1783fb8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BLOB_TYPE.DeleteProcedure", delete_procedure, 0x100, 0x40, true, 0x8eb30a341c8fbef1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_BLOB_TYPE.DestroyProcedure", destroy_procedure, 0x140, 0x40, true, 0x97c641e566d120cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BLOB_TYPE.UsualSize", usual_size, 0x180, 0x40, true, 0x5c3270e25a2f55ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BLOB_TYPE.CleanupProcedure", cleanup_procedure, 0xc0, 0x40, true, 0x9c91cc95bcb62943)
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