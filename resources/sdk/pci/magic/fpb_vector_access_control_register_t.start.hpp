#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.VectorAccessOffset", vector_access_offset, 0x0, 0x8, true, 0x895a712240af9d98, 8, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.Rsvd0", rsvd0, 0x8, 0x6, true, 0x6455d450487c6bbf, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.VectorSelect", vector_select, 0xe, 0x2, true, 0xa5c74865268311f5, 2, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.Rsvd1", rsvd1, 0x10, 0x10, true, 0x2e201a80c84fd08d, 16, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x5fd9825dfc4366e2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif