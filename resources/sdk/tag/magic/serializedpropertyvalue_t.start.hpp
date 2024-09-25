#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSERIALIZEDPROPERTYVALUE.dwType", dw_type, 0x0, 0x20, true, 0x79907d7acd6bd15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagSERIALIZEDPROPERTYVALUE.rgb", rgb, 0x20, 0x8, true, 0x2e5f492e8de5a554)
#else
#define _m00
#define _m01
#endif