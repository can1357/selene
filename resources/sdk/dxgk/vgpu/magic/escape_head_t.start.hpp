#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gpup_driver_escape_input_t), "_DXGKVGPU_ESCAPE_HEAD.Luid", luid, 0x0, 0x40, true, 0x17f6854416cba47c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::vgpu::escape_type_t), "_DXGKVGPU_ESCAPE_HEAD.Type", type, 0x40, 0x20, true, 0x659a66a6e1224cc3)
#else
#define _m00
#define _m01
#endif