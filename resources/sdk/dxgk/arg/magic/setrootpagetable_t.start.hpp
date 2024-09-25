#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETROOTPAGETABLE.hContext", h_context, 0x0, 0x40, true, 0x83cf56c6a2d321ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dgpu_physical_address_t), "_DXGKARG_SETROOTPAGETABLE.Address", address, 0x40, 0x80, true, 0xc1c0a66a41673e7d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETROOTPAGETABLE.NumEntries", num_entries, 0xc0, 0x20, true, 0x4d4e51ee09cb1d63)
#else
#define _m00
#define _m01
#define _m02
#endif