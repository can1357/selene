#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_GDISURFACEDATA.Width", width, 0x0, 0x20, true, 0xebb2d831130f87)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_GDISURFACEDATA.Height", height, 0x20, 0x20, true, 0x90c5385f6653765c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMDT_GDISURFACEDATA.Format", format, 0x40, 0x20, true, 0xc3b77c5be6072ac2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::gdisurfacetype_t), "_D3DKMDT_GDISURFACEDATA.Type", type, 0x60, 0x20, true, 0xded2d5469857ab3d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::gdisurfaceflags_t), "_D3DKMDT_GDISURFACEDATA.Flags", flags, 0x80, 0x20, true, 0x2f90309c20ae6613)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_GDISURFACEDATA.Pitch", pitch, 0xa0, 0x20, true, 0x45a7deca8ad97c2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif