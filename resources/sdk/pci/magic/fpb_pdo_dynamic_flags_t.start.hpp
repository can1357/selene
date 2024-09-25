#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_PDO_DYNAMIC_FLAGS.DecodeMemoryLow", decode_memory_low, 0x0, 0x1, true, 0x645576593f729d8a, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_PDO_DYNAMIC_FLAGS.DecodeMemoryHigh", decode_memory_high, 0x1, 0x1, true, 0xd7c6f851dd586763, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_PDO_DYNAMIC_FLAGS.FlagsAsULONG", flags_as_ulong, 0x0, 0x20, true, 0x6baaba07e4b50835)
#else
#define _m00
#define _m01
#define _m02
#endif