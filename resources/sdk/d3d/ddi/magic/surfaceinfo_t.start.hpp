#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SURFACEINFO.Width", width, 0x0, 0x20, true, 0xdf2ce6d0fe4ca6b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SURFACEINFO.Height", height, 0x20, 0x20, true, 0xcb058e1f06a95236)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SURFACEINFO.Depth", depth, 0x40, 0x20, true, 0x7b012b33d1c1a1f5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DDDI_SURFACEINFO.pSysMem", p_sys_mem, 0x80, 0x40, true, 0x3faefacdb15f9cce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SURFACEINFO.SysMemPitch", sys_mem_pitch, 0xc0, 0x20, true, 0xa8620ffbca614e58)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SURFACEINFO.SysMemSlicePitch", sys_mem_slice_pitch, 0xe0, 0x20, true, 0xb7a0bd288ae038ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif