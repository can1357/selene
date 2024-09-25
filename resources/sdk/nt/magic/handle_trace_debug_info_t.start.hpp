#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HANDLE_TRACE_DEBUG_INFO.RefCount", ref_count, 0x0, 0x20, true, 0xaef95bca8c53331c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TRACE_DEBUG_INFO.TableSize", table_size, 0x20, 0x20, true, 0xbbae0425e105cbed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TRACE_DEBUG_INFO.BitMaskFlags", bit_mask_flags, 0x40, 0x20, true, 0x65b81b1c264d12fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_HANDLE_TRACE_DEBUG_INFO.CloseCompactionLock", close_compaction_lock, 0x80, 0xc0, true, 0x52f2c86bb7f99e11)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TRACE_DEBUG_INFO.CurrentStackIndex", current_stack_index, 0x240, 0x20, true, 0xc8f72efa1584b0be)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::handle_trace_db_entry_t, 1>), "_HANDLE_TRACE_DEBUG_INFO.TraceDb", trace_db, 0x280, 0x0, true, 0xef66029a6bf819b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif