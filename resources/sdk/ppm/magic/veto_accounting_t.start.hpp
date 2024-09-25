#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PPM_VETO_ACCOUNTING.VetoPresent", veto_present, 0x0, 0x20, true, 0xad8d091005c892f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PPM_VETO_ACCOUNTING.VetoListHead", veto_list_head, 0x40, 0x80, true, 0xb31b89cfdc5606b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_VETO_ACCOUNTING.CsAccountingBlocks", cs_accounting_blocks, 0xc0, 0x8, true, 0xcfb9dd072188b6bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_VETO_ACCOUNTING.BlocksDrips", blocks_drips, 0xc8, 0x8, true, 0x4f13bd3d8cf8cd71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_VETO_ACCOUNTING.PreallocatedVetoCount", preallocated_veto_count, 0xe0, 0x20, true, 0xce0fb8f4bc1c5afc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::veto_entry_t*), "_PPM_VETO_ACCOUNTING.PreallocatedVetoList", preallocated_veto_list, 0x100, 0x40, true, 0x4e0d3fc438914a5c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif