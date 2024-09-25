#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_PDO_STATIC_FLAGS.Initialized", initialized, 0x0, 0x1, true, 0xfe7f893a5b0fd2d1, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_PDO_STATIC_FLAGS.FlagsAsULONG", flags_as_ulong, 0x0, 0x20, true, 0xa5bf146c849deecf)
#else
#define _m00
#define _m01
#endif