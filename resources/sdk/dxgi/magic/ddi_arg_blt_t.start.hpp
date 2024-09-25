#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT.hDevice", h_device, 0x0, 0x40, true, 0x5ffad6cac4f4dca5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT.hDstResource", h_dst_resource, 0x40, 0x40, true, 0x28272b4ae62629e1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.DstSubresource", dst_subresource, 0x80, 0x20, true, 0x2af950a3e7b45c14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.DstLeft", dst_left, 0xa0, 0x20, true, 0x980e43094f224787)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.DstTop", dst_top, 0xc0, 0x20, true, 0xd4a734fa59c50dd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.DstRight", dst_right, 0xe0, 0x20, true, 0x4ceaf7c1292362fb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.DstBottom", dst_bottom, 0x100, 0x20, true, 0xa5d9001ad54feca5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_BLT.hSrcResource", h_src_resource, 0x140, 0x40, true, 0xa7577a43e253fd2d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_BLT.SrcSubresource", src_subresource, 0x180, 0x20, true, 0xe93a15ff23b291bb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_arg_blt_flags_t), "DXGI_DDI_ARG_BLT.Flags", flags, 0x1a0, 0x20, true, 0x76d5630bd8bebc9e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI_DDI_ARG_BLT.Rotate", rotate, 0x1c0, 0x20, true, 0xe24d6154bc93e818)
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
#endif