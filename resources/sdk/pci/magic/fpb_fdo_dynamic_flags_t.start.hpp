#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_FDO_DYNAMIC_FLAGS.BusNumbersNeedCommit", bus_numbers_need_commit, 0x0, 0x1, true, 0x5d7dba5833768553, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_FDO_DYNAMIC_FLAGS.ResourceDynamicallyUpdated", resource_dynamically_updated, 0x1, 0x1, true, 0x7b8534f41fab624, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_FDO_DYNAMIC_FLAGS.FlagsAsULONG", flags_as_ulong, 0x0, 0x20, true, 0x5b32c77059bc997)
#else
#define _m00
#define _m01
#define _m02
#endif