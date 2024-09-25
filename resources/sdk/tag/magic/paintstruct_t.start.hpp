#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "tagPAINTSTRUCT.hdc", hdc, 0x0, 0x40, true, 0xe709dcd70c5a6b79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPAINTSTRUCT.fErase", f_erase, 0x40, 0x20, true, 0x71d28849b60a7026)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagPAINTSTRUCT.rcPaint", rc_paint, 0x60, 0x80, true, 0xee4d6111a86eb94b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPAINTSTRUCT.fRestore", f_restore, 0xe0, 0x20, true, 0x85cf378adef05f6b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPAINTSTRUCT.fIncUpdate", f_inc_update, 0x100, 0x20, true, 0x9093330d59d751e4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "tagPAINTSTRUCT.rgbReserved", rgb_reserved, 0x120, 0x0, true, 0xe91e35a7c4f11878)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif