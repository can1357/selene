#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HANDLE_TABLE_FREE_LIST.FreeListLock", free_list_lock, 0x0, 0x40, true, 0x6ae51f4d2f4d0ce1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::handle_table_entry_t*), "_HANDLE_TABLE_FREE_LIST.FirstFreeHandleEntry", first_free_handle_entry, 0x40, 0x40, true, 0xef0c1801d9b9acc9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::handle_table_entry_t*), "_HANDLE_TABLE_FREE_LIST.LastFreeHandleEntry", last_free_handle_entry, 0x80, 0x40, true, 0xb21a8bdc505985bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HANDLE_TABLE_FREE_LIST.HandleCount", handle_count, 0xc0, 0x20, true, 0x3f315ec830a89a66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TABLE_FREE_LIST.HighWaterMark", high_water_mark, 0xe0, 0x20, true, 0x70474cc3736a521)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif