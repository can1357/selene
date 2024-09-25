#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::lookaside_list_ex_t), "_NDIS_NPAGED_LOOKASIDE_LIST.List", list, 0x0, 0x0, true, 0xc3aa816dbbb0524)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NDIS_NPAGED_LOOKASIDE_LIST.BackupList", backup_list, 0x400, 0x80, true, 0xd272c1d999c64860)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t*), "_NDIS_NPAGED_LOOKASIDE_LIST.AllocListPtr", alloc_list_ptr, 0x600, 0x40, true, 0x62a9b295a348d3d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t*), "_NDIS_NPAGED_LOOKASIDE_LIST.FreeListPtr", free_list_ptr, 0x640, 0x40, true, 0xa1adf96dd0c04b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_t>), "_NDIS_NPAGED_LOOKASIDE_LIST.ListSwapLock", list_swap_lock, 0x680, 0x40, true, 0x5bbd91268e8f5ba6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NPAGED_LOOKASIDE_LIST.Initialized", initialized, 0x6c0, 0x8, true, 0x6123d3af54510cc0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif