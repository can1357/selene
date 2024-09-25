#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CBuffer.Cursor", cursor, 0x0, 0x40, true, 0x82286eccfeafa978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CBuffer.BytesRemaining", bytes_remaining, 0x40, 0x40, true, 0xb0032a1c39fce611)
#else
#define _m00
#define _m01
#endif