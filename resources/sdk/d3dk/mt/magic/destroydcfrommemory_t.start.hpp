#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_D3DKMT_DESTROYDCFROMMEMORY.hDc", h_dc, 0x0, 0x40, true, 0xe2fd2d836706394a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_DESTROYDCFROMMEMORY.hBitmap", h_bitmap, 0x40, 0x40, true, 0xc775100e1ff85c95)
#else
#define _m00
#define _m01
#endif