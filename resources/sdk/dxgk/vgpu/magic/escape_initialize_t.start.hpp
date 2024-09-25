#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vgpu::escape_head_t), "_DXGKVGPU_ESCAPE_INITIALIZE.Header", header, 0x0, 0x60, true, 0x54dd752db226742a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGKVGPU_ESCAPE_INITIALIZE.VmGuid", vm_guid, 0x60, 0x80, true, 0x7f81863afada8489)
#else
#define _m00
#define _m01
#endif