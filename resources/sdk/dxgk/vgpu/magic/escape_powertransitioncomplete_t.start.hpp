#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vgpu::escape_head_t), "_DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE.Header", header, 0x0, 0x60, true, 0x34ab1152632fcc5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE.PowerState", power_state, 0x60, 0x20, true, 0x971b4f5ff8997f08)
#else
#define _m00
#define _m01
#endif