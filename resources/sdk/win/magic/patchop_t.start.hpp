#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCHOP.dwOpcode", dw_opcode, 0x0, 0x20, true, 0x56001c108c5f14d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCHOP.dwNextOpcode", dw_next_opcode, 0x20, 0x20, true, 0x35bca45627da7489)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_PATCHOP.data", data, 0x40, 0x0, true, 0xa38cf8fd694f0a37)
#else
#define _m00
#define _m01
#define _m02
#endif