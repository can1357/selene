#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ConfigAlphaCombine.dwFunction", dw_function, 0x0, 0x20, true, 0x117f8af1ace483db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_DXVA_ConfigAlphaCombine.dwReservedBits", dw_reserved_bits, 0x20, 0x60, true, 0x60f9098965d73514)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaCombine.bConfigBlendType", b_config_blend_type, 0x80, 0x8, true, 0xfd1266c2fbf9cf8b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaCombine.bConfigPictureResizing", b_config_picture_resizing, 0x88, 0x8, true, 0x809fafbfaf9dfb60)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaCombine.bConfigOnlyUsePicDestRectArea", b_config_only_use_pic_dest_rect_area, 0x90, 0x8, true, 0xf5197096ea1fb075)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaCombine.bConfigGraphicResizing", b_config_graphic_resizing, 0x98, 0x8, true, 0x86f34a6035f9225)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaCombine.bConfigWholePlaneAlpha", b_config_whole_plane_alpha, 0xa0, 0x8, true, 0x544f2b071c240ac3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif