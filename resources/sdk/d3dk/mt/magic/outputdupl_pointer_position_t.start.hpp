#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_OUTPUTDUPL_POINTER_POSITION.Position", position, 0x0, 0x40, true, 0x3e5b4a60d4fa849b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_OUTPUTDUPL_POINTER_POSITION.Visible", visible, 0x40, 0x20, true, 0x1d109fdd743a4a0d)
#else
#define _m00
#define _m01
#endif