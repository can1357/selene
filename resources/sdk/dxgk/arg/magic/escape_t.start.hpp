#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_ESCAPE.hDevice", h_device, 0x0, 0x40, true, 0x3a2d0216485f850d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::escapeflags_t), "_DXGKARG_ESCAPE.Flags", flags, 0x40, 0x20, true, 0xc2300441c46541a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_ESCAPE.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x75d9d5b478396a02)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_ESCAPE.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0xe3a2fef5987ddcfe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_ESCAPE.hContext", h_context, 0x100, 0x40, true, 0xb6de42acb0eec98)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_ESCAPE.hKmdProcessHandle", h_kmd_process_handle, 0x140, 0x40, true, 0x64fc7d452eb7b56f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif