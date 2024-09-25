#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPIXELFORMATDESCRIPTOR.nSize", n_size, 0x0, 0x10, true, 0x403aef139444922f)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPIXELFORMATDESCRIPTOR.nVersion", n_version, 0x10, 0x10, true, 0xef69deb3b57660f2)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPIXELFORMATDESCRIPTOR.dwFlags", dw_flags, 0x20, 0x20, true, 0x2b7a0275f7402a26)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.iPixelType", i_pixel_type, 0x40, 0x8, true, 0x2b7dd048397b1a84)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cColorBits", c_color_bits, 0x48, 0x8, true, 0x3e8fd982c3b28f47)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cRedBits", c_red_bits, 0x50, 0x8, true, 0x99173bdd0f780596)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cRedShift", c_red_shift, 0x58, 0x8, true, 0xab7bcea8f8a04366)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cGreenBits", c_green_bits, 0x60, 0x8, true, 0x867e7e6099245947)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cGreenShift", c_green_shift, 0x68, 0x8, true, 0x9004355192f5fa16)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cBlueBits", c_blue_bits, 0x70, 0x8, true, 0x2f4d95af7e2bc45e)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cBlueShift", c_blue_shift, 0x78, 0x8, true, 0xdba243a7827d429a)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAlphaBits", c_alpha_bits, 0x80, 0x8, true, 0x8334e787731277cd)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAlphaShift", c_alpha_shift, 0x88, 0x8, true, 0x46588ee1cb193bd8)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAccumBits", c_accum_bits, 0x90, 0x8, true, 0xf9d3c81ac812236)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAccumRedBits", c_accum_red_bits, 0x98, 0x8, true, 0x6ed0a86262d267fa)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAccumGreenBits", c_accum_green_bits, 0xa0, 0x8, true, 0x8c410b113cf06a3)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAccumBlueBits", c_accum_blue_bits, 0xa8, 0x8, true, 0x11f6c0301189b288)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAccumAlphaBits", c_accum_alpha_bits, 0xb0, 0x8, true, 0x6d6cefff3164d429)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cDepthBits", c_depth_bits, 0xb8, 0x8, true, 0xbdbea5f8da70ddeb)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cStencilBits", c_stencil_bits, 0xc0, 0x8, true, 0xc9f6e9f461798f8f)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.cAuxBuffers", c_aux_buffers, 0xc8, 0x8, true, 0x4aa85986169e1cd2)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.iLayerType", i_layer_type, 0xd0, 0x8, true, 0xaa38053077bf6faf)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPIXELFORMATDESCRIPTOR.bReserved", b_reserved, 0xd8, 0x8, true, 0x6a7469bd666cb139)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPIXELFORMATDESCRIPTOR.dwLayerMask", dw_layer_mask, 0xe0, 0x20, true, 0x3a5cfe6ba1530a76)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPIXELFORMATDESCRIPTOR.dwVisibleMask", dw_visible_mask, 0x100, 0x20, true, 0xd99314084a5774e5)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPIXELFORMATDESCRIPTOR.dwDamageMask", dw_damage_mask, 0x120, 0x20, true, 0x2dc6b0b6a6b83ece)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#endif