#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicResample.wPicResampleSourcePicIndex", w_pic_resample_source_pic_index, 0x0, 0x10, true, 0x4fd070d932f5b340)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicResample.wPicResampleDestPicIndex", w_pic_resample_dest_pic_index, 0x10, 0x10, true, 0xc51f56bd1d7b9e51)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicResample.wPicResampleRcontrol", w_pic_resample_rcontrol, 0x20, 0x10, true, 0x5a04410f337e2204)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicResample.bPicResampleExtrapWidth", b_pic_resample_extrap_width, 0x30, 0x8, true, 0x5310ede7508f3bf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicResample.bPicResampleExtrapHeight", b_pic_resample_extrap_height, 0x38, 0x8, true, 0x24c70bbf8438696e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleSourceWidth", dw_pic_resample_source_width, 0x40, 0x20, true, 0x57649425e53f6cdc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleSourceHeight", dw_pic_resample_source_height, 0x60, 0x20, true, 0xf1521131a3172db4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleDestWidth", dw_pic_resample_dest_width, 0x80, 0x20, true, 0x51b8919256c40173)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleDestHeight", dw_pic_resample_dest_height, 0xa0, 0x20, true, 0xc6068a55606b9e3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleFullDestWidth", dw_pic_resample_full_dest_width, 0xc0, 0x20, true, 0xbd5d2c07c8008356)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicResample.dwPicResampleFullDestHeight", dw_pic_resample_full_dest_height, 0xe0, 0x20, true, 0xe85f90bcc11cca73)
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
#define _m09
#define _m10
#endif