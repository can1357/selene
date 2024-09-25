#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::outdupl_pointer_shape_type_t), "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.Type", type, 0x0, 0x20, true, 0xf49b9e0aa5aa54e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.Width", width, 0x20, 0x20, true, 0xb21db9e8e05e03bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.Height", height, 0x40, 0x20, true, 0x910d5284a9217f3e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.Pitch", pitch, 0x60, 0x20, true, 0xdfa5651a4edb7965)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_OUTDUPL_POINTER_SHAPE_INFO.HotSpot", hot_spot, 0x80, 0x40, true, 0xfaf5e615c3b53b14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif