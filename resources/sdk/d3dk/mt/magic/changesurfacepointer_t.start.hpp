#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_D3DKMT_CHANGESURFACEPOINTER.hDC", h_dc, 0x0, 0x40, true, 0x2b5b868c8e8bfc0a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CHANGESURFACEPOINTER.hBitmap", h_bitmap, 0x40, 0x40, true, 0xf1d9ce32fbfbbe05)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CHANGESURFACEPOINTER.pSurfacePointer", p_surface_pointer, 0x80, 0x40, true, 0x455e1653dcc1ebac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHANGESURFACEPOINTER.Width", width, 0xc0, 0x20, true, 0xb400ba4289e73fad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHANGESURFACEPOINTER.Height", height, 0xe0, 0x20, true, 0xc835598eb25ff10f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHANGESURFACEPOINTER.Pitch", pitch, 0x100, 0x20, true, 0x7136222fd83d20e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif