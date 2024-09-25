#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_SEC_AER_CAPABILITIES.SecondaryUncorrectableFirstErrorPtr", secondary_uncorrectable_first_error_ptr, 0x0, 0x5, true, 0x1ae4d8a016474e22, 5, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SEC_AER_CAPABILITIES.AsULONG", as_ulong, 0x0, 0x20, true, 0x85fd525a544d1e27)
#else
#define _m00
#define _m01
#endif