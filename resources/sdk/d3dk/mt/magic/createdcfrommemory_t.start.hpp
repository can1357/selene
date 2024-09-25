#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEDCFROMMEMORY.pMemory", p_memory, 0x0, 0x40, true, 0xec8ce7a9b885de1b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMT_CREATEDCFROMMEMORY.Format", format, 0x40, 0x20, true, 0x797b4aedf029009a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDCFROMMEMORY.Width", width, 0x60, 0x20, true, 0x8fa27eb92caeb93d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDCFROMMEMORY.Height", height, 0x80, 0x20, true, 0x8d50a33b942da71f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDCFROMMEMORY.Pitch", pitch, 0xa0, 0x20, true, 0x2eadcb735ccdd364)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_D3DKMT_CREATEDCFROMMEMORY.hDeviceDc", h_device_dc, 0xc0, 0x40, true, 0x3d57ce9c617eb7bc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::paletteentry_t*), "_D3DKMT_CREATEDCFROMMEMORY.pColorTable", p_color_table, 0x100, 0x40, true, 0x2a37a2425b2c644e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_D3DKMT_CREATEDCFROMMEMORY.hDc", h_dc, 0x140, 0x40, true, 0xa5c747f25818711e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEDCFROMMEMORY.hBitmap", h_bitmap, 0x180, 0x40, true, 0xecaaf98eef69e5c0)
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
#endif