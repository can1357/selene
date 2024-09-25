#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_CM_DIRTY_VECTOR_LOG_ENTRY.Thread", thread, 0x0, 0x40, true, 0x737b654b3f26c19e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum cm::dirty_vector_operation_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Operation", operation, 0x40, 0x20, true, 0x6d0adceb6599666)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyVectorModifiedContext.Start", start, 0x0, 0x20, true, 0xf65fec40122cc730)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyVectorModifiedContext.Length", length, 0x20, 0x20, true, 0xbccaddffe3e597b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_dirty_vector_modified_context_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyVectorModifiedContext", dirty_vector_modified_context, 0x0, 0x40, true, 0xbbde0bd75be095a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyDataCaptureContext.RangeCount", range_count, 0x0, 0x20, true, 0xa954ccfc6377947c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyDataCaptureContext.SetBitCount", set_bit_count, 0x20, 0x20, true, 0x816ad288c35c012b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_dirty_data_capture_context_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyDataCaptureContext", dirty_data_capture_context, 0x0, 0x40, true, 0x6821a70d0467a3a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.Raw.Context1", context1, 0x0, 0x20, true, 0xa9be6d5ed3d6d9d2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.Raw.Context2", context2, 0x20, 0x20, true, 0x959a955193e01b5d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_raw_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.Raw", raw, 0x0, 0x40, true, 0xc9c141f1d1e18b5f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_CM_DIRTY_VECTOR_LOG_ENTRY.Data", data, 0x60, 0x40, true, 0x4beb5e781af9bee)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 6>), "_CM_DIRTY_VECTOR_LOG_ENTRY.Stack", stack, 0xc0, 0x80, true, 0x78b92223cd03710a)
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
#endif