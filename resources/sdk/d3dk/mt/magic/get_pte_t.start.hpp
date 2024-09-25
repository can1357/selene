#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_PTE.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xa71a0619bf84d65d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_PTE.PageTableLevel", page_table_level, 0x20, 0x20, true, 0x9d635762e011af24)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_D3DKMT_GET_PTE.PageTableIndex", page_table_index, 0x40, 0xc0, true, 0x1863212525482360)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_GET_PTE.b64KBPte", b64kb_pte, 0x100, 0x8, true, 0xab86f4e684cc0deb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_PTE.NumPtes", num_ptes, 0x120, 0x20, true, 0xe7f242533657a9d5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::pte_t, 64>), "_D3DKMT_GET_PTE.Pte", pte, 0x140, 0x0, true, 0x575afadc124f2357)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_PTE.NumValidEntries", num_valid_entries, 0x2140, 0x20, true, 0xbe3fa91b50a2d5ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif