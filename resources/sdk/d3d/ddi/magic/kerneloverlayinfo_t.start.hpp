#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_KERNELOVERLAYINFO.hAllocation", h_allocation, 0x0, 0x20, true, 0x4645f4875ed6c0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddirect_t), "_D3DDDI_KERNELOVERLAYINFO.DstRect", dst_rect, 0x20, 0x80, true, 0x3aa74e5f1d453d1f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddirect_t), "_D3DDDI_KERNELOVERLAYINFO.SrcRect", src_rect, 0xa0, 0x80, true, 0xacba93b2e17299ef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_KERNELOVERLAYINFO.pPrivateDriverData", p_private_driver_data, 0x140, 0x40, true, 0x96f86b017afa994e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_KERNELOVERLAYINFO.PrivateDriverDataSize", private_driver_data_size, 0x180, 0x20, true, 0x2681187f8a828666)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif