#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE.NextHandleNeedingPool", next_handle_needing_pool, 0x0, 0x20, true, 0x71a8d2e13b2c0713)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HANDLE_TABLE.ExtraInfoPages", extra_info_pages, 0x20, 0x20, true, 0x9a9ce3f1ba32578a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_HANDLE_TABLE.TableCode", table_code, 0x40, 0x40, true, 0x90482eae9e82950c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_HANDLE_TABLE.QuotaProcess", quota_process, 0x80, 0x40, true, 0xa4d2cfebc98b279d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HANDLE_TABLE.HandleTableList", handle_table_list, 0xc0, 0x80, true, 0x3d53155da6fdef2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE.UniqueProcessId", unique_process_id, 0x140, 0x20, true, 0xf090fdde3adfb408)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE.Flags", flags, 0x160, 0x20, true, 0x7426741769dd01aa)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE.StrictFIFO", strict_fifo, 0x160, 0x1, true, 0xc0592a22ad562a4f, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE.EnableHandleExceptions", enable_handle_exceptions, 0x161, 0x1, true, 0x10468ab16fde05ed, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE.Rundown", rundown, 0x162, 0x1, true, 0xc6831c6e162be6ff, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE.Duplicated", duplicated, 0x163, 0x1, true, 0x6050e2f624b4699, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HANDLE_TABLE.RaiseUMExceptionOnInvalidHandleClose", raise_um_exception_on_invalid_handle_close, 0x164, 0x1, true, 0xd3409dcf9827b74, 1, uint8_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HANDLE_TABLE.HandleContentionEvent", handle_contention_event, 0x180, 0x40, true, 0x57f342a9ef94bd2b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HANDLE_TABLE.HandleTableLock", handle_table_lock, 0x1c0, 0x40, true, 0x19d0947e196b172b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::handle_table_free_list_t, 1>), "_HANDLE_TABLE.FreeLists", free_lists, 0x200, 0x0, true, 0xdd3a0e7f80d89b1f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_HANDLE_TABLE.ActualEntry", actual_entry, 0x200, 0x0, true, 0xcc94f68e885e7941)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_trace_debug_info_t*), "_HANDLE_TABLE.DebugInfo", debug_info, 0x300, 0x40, true, 0x16af23b9d1c66e09)
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