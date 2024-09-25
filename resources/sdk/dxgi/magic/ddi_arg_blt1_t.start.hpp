#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT1.hDevice", h_device, 0x0, 0x40, true, 0xcdb9329dd5e8f29a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT1.hDstResource", h_dst_resource, 0x40, 0x40, true, 0xab07ddfd1e6c4179)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.DstSubresource", dst_subresource, 0x80, 0x20, true, 0x3a818e5ff4300c58)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.DstLeft", dst_left, 0xa0, 0x20, true, 0x32c8486af4718b81)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.DstTop", dst_top, 0xc0, 0x20, true, 0xb287771df2ee6fc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.DstRight", dst_right, 0xe0, 0x20, true, 0x2b42f4d5630c30b1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.DstBottom", dst_bottom, 0x100, 0x20, true, 0xfd3de97e3b2b4db1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT1.hSrcResource", h_src_resource, 0x140, 0x40, true, 0x778f0d8d0e48a326)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.SrcSubresource", src_subresource, 0x180, 0x20, true, 0x6bfea79ff9102ab6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.SrcLeft", src_left, 0x1a0, 0x20, true, 0x71594ad21c5a0d3e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.SrcTop", src_top, 0x1c0, 0x20, true, 0xd9d0e70d4af39cdf)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.SrcRight", src_right, 0x1e0, 0x20, true, 0x31f158f848eb1a37)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT1.SrcBottom", src_bottom, 0x200, 0x20, true, 0xdf009535b94de4e4)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_arg_blt_flags_t), "DXGI_DDI_ARG_BLT1.Flags", flags, 0x220, 0x20, true, 0xdfe7439cfceae293)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI_DDI_ARG_BLT1.Rotate", rotate, 0x240, 0x20, true, 0x2aa9b58dc674f55c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif