#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLAYERPLANEDESCRIPTOR.nSize", n_size, 0x0, 0x10, true, 0xd3b1a7c4a8b3ca02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLAYERPLANEDESCRIPTOR.nVersion", n_version, 0x10, 0x10, true, 0x5571e8d999ca4c4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLAYERPLANEDESCRIPTOR.dwFlags", dw_flags, 0x20, 0x20, true, 0xbcbc9fe7b1e12a1a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.iPixelType", i_pixel_type, 0x40, 0x8, true, 0xc2e7855d87b12714)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cColorBits", c_color_bits, 0x48, 0x8, true, 0xe64e217b788b0858)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cRedBits", c_red_bits, 0x50, 0x8, true, 0x722ba7ee93d34cb6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cRedShift", c_red_shift, 0x58, 0x8, true, 0x736fb7552ed10b85)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cGreenBits", c_green_bits, 0x60, 0x8, true, 0x2af202701a76c808)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cGreenShift", c_green_shift, 0x68, 0x8, true, 0x5012793f2c446417)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cBlueBits", c_blue_bits, 0x70, 0x8, true, 0x9de6a9d6571cce84)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cBlueShift", c_blue_shift, 0x78, 0x8, true, 0x868d5530acbe59e5)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAlphaBits", c_alpha_bits, 0x80, 0x8, true, 0x59259b26804aa998)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAlphaShift", c_alpha_shift, 0x88, 0x8, true, 0x8005d038c1fc3e75)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAccumBits", c_accum_bits, 0x90, 0x8, true, 0x7909a6eb6dbe492e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAccumRedBits", c_accum_red_bits, 0x98, 0x8, true, 0xa038bd6faf71c36d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAccumGreenBits", c_accum_green_bits, 0xa0, 0x8, true, 0x8d1fdffb6a25f72f)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAccumBlueBits", c_accum_blue_bits, 0xa8, 0x8, true, 0xdbff61d63285a800)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAccumAlphaBits", c_accum_alpha_bits, 0xb0, 0x8, true, 0x81117ac99c3f3f0a)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cDepthBits", c_depth_bits, 0xb8, 0x8, true, 0x599bbf9e7a4c44cb)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cStencilBits", c_stencil_bits, 0xc0, 0x8, true, 0x115c3983ce60f627)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.cAuxBuffers", c_aux_buffers, 0xc8, 0x8, true, 0xa59d1de7c9310efb)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.iLayerPlane", i_layer_plane, 0xd0, 0x8, true, 0x4fd39f1c9c14cbe2)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLAYERPLANEDESCRIPTOR.bReserved", b_reserved, 0xd8, 0x8, true, 0xe44a6dd09e926241)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLAYERPLANEDESCRIPTOR.crTransparent", cr_transparent, 0xe0, 0x20, true, 0x91903423116e43a5)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif