#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IMAGE_AUX_SYMBOL_TOKEN_DEF.bAuxType", b_aux_type, 0x0, 0x8, true, 0xa39051d68e6a2d30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IMAGE_AUX_SYMBOL_TOKEN_DEF.bReserved", b_reserved, 0x8, 0x8, true, 0xb07b49910af7465)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_AUX_SYMBOL_TOKEN_DEF.SymbolTableIndex", symbol_table_index, 0x10, 0x20, true, 0xb0bef86df7ca805f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "IMAGE_AUX_SYMBOL_TOKEN_DEF.rgbReserved", rgb_reserved, 0x30, 0x60, true, 0x90a248a8d6d5998)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif