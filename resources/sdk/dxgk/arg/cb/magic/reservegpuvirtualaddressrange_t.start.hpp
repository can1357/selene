#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.hDxgkProcess", h_dxgk_process, 0x0, 0x40, true, 0x5e6166a8e42dd447)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0xbefd6546274e9cf4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.Alignment", alignment, 0x80, 0x20, true, 0xff9fcf64a2d05349)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.StartVirtualAddress", start_virtual_address, 0xc0, 0x40, true, 0x1b759e8d82e6e03b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.BaseAddress", base_address, 0x100, 0x40, true, 0x6b015693f55c5a48)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.AllowUserModeMapping", allow_user_mode_mapping, 0x140, 0x1, true, 0xe3e926afbada6304, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE.Flags", flags, 0x140, 0x20, true, 0x426f065c3fa06bc1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif