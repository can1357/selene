#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_HEAP_LFH_UNUSED_BYTES_INFO.UnusedBytes", unused_bytes, 0x0, 0xe, true, 0x7b8283268367bcd8, 14, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_UNUSED_BYTES_INFO.ExtraPresent", extra_present, 0xe, 0x1, true, 0xd09a7265a1081424, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_UNUSED_BYTES_INFO.OneByteUnused", one_byte_unused, 0xf, 0x1, true, 0x7399052b4e1bd171, 1, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_HEAP_LFH_UNUSED_BYTES_INFO.Bytes", bytes, 0x0, 0x10, true, 0xc419fe11445cc40)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif