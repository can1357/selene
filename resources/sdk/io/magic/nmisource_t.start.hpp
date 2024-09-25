#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_NMISOURCE.Type", type, 0x0, 0x8, true, 0x29f01cca83f0cff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_NMISOURCE.Length", length, 0x8, 0x8, true, 0xbeaee411a7e624d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_NMISOURCE.Flags", flags, 0x10, 0x10, true, 0x13e1c665cc504450)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_NMISOURCE.GlobalSystemInterruptVector", global_system_interrupt_vector, 0x20, 0x20, true, 0xde00994cecb5b201)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif