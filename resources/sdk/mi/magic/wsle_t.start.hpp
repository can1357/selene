#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MI_WSLE.Age", age, 0x0, 0x4, true, 0x90e90158787e8e73, 4, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_WSLE.Protection", protection, 0x4, 0x3, true, 0xbee9f667bddb8e1e, 3, uint8_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_WSLE.EntireWsle", entire_wsle, 0x0, 0x8, true, 0x620833da9aa6d379)
#else
#define _m00
#define _m01
#define _m02
#endif