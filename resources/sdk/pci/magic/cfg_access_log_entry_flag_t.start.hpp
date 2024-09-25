#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.ReadAccess", read_access, 0x0, 0x1, true, 0x25176ef8b55ebf3d, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.InternalAccess", internal_access, 0x1, 0x1, true, 0x48e09bae6bd8d9f4, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.DataValid", data_valid, 0x2, 0x1, true, 0x2b26c9ddcb913529, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.Rsvd", rsvd, 0x3, 0x1d, true, 0xf94205538fd35ac0, 29, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.AsULONG", as_ulong, 0x0, 0x20, true, 0x86f85233e925afb6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif