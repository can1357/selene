#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_ETW_PAGE_EXTRA_INFO.SharedInitial", shared_initial, 0x0, 0x1, true, 0x9c888fa7ca917ecd, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_ETW_PAGE_EXTRA_INFO.WorkingSetType", working_set_type, 0x0, 0x2, true, 0x9909aa97eb3bd689, 2, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_ETW_PAGE_EXTRA_INFO.NotAddedtoWS", not_addedto_ws, 0x2, 0x1, true, 0xc9ebddb643a09758, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_ETW_PAGE_EXTRA_INFO.COWFault", cow_fault, 0x3, 0x1, true, 0xd62a80f71919bffd, 1, uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_ETW_PAGE_EXTRA_INFO.ProtoPte", proto_pte, 0x0, 0x40, true, 0x63a82e0b24840360)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_ETW_PAGE_EXTRA_INFO.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x4f18df963d89dca0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif