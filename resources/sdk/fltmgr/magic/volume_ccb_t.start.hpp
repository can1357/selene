#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_VOLUME_CCB.Volume", volume, 0x0, 0x80, true, 0xf538d32b65a3ffc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CCB.Iterator", iterator, 0x80, 0x20, true, 0xfa7e9ffef20bd0b4)
#else
#define _m00
#define _m01
#endif