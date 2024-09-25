#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_WGLSWAP.hdc", hdc, 0x0, 0x40, true, 0xa3dbf3f450e38891)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WGLSWAP.uiFlags", ui_flags, 0x40, 0x20, true, 0xaca91f595a6f1a0b)
#else
#define _m00
#define _m01
#endif