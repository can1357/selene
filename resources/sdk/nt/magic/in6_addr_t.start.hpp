#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "in6_addr.Byte", byte, 0x0, 0x80, true, 0xbf63477728c49d21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "in6_addr.Word", word, 0x0, 0x80, true, 0xe49bd95a7eb77e3f)
#else
#define _m00
#define _m01
#endif