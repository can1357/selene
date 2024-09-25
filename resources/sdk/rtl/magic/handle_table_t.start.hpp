#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HANDLE_TABLE.MaximumNumberOfHandles", maximum_number_of_handles, 0x0, 0x20, true, 0x1b813b91a978403)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HANDLE_TABLE.SizeOfHandleTableEntry", size_of_handle_table_entry, 0x20, 0x20, true, 0xaa55ad76a28dfa2b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::handle_table_entry_t*), "_RTL_HANDLE_TABLE.FreeHandles", free_handles, 0x80, 0x40, true, 0x1fb0a25eafbe1a3e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::handle_table_entry_t*), "_RTL_HANDLE_TABLE.CommittedHandles", committed_handles, 0xc0, 0x40, true, 0x2faf798470b6adb6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::handle_table_entry_t*), "_RTL_HANDLE_TABLE.UnCommittedHandles", un_committed_handles, 0x100, 0x40, true, 0x8cf009ba73fd926d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::handle_table_entry_t*), "_RTL_HANDLE_TABLE.MaxReservedHandles", max_reserved_handles, 0x140, 0x40, true, 0x58c1661276ed40c9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HANDLE_TABLE.UseHeap", use_heap, 0x40, 0x20, true, 0xb6b95f16b9f82763)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HANDLE_TABLE.TableSize", table_size, 0x60, 0x20, true, 0xfc05a8e2f36d93fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif