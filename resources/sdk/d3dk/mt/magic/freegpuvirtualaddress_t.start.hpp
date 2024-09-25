#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FREEGPUVIRTUALADDRESS.hAdapter", h_adapter, 0x0, 0x20, true, 0x6cd81003d7bbeff8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FREEGPUVIRTUALADDRESS.BaseAddress", base_address, 0x40, 0x40, true, 0x63d2f76b2e4b028e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FREEGPUVIRTUALADDRESS.Size", size, 0x80, 0x40, true, 0x3f4b87c26e4c613b)
#else
#define _m00
#define _m01
#define _m02
#endif