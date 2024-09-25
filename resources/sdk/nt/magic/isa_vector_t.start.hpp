#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISA_VECTOR.Type", type, 0x0, 0x8, true, 0x69e71f2726e143ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISA_VECTOR.Length", length, 0x8, 0x8, true, 0x4dd21858c697b304)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISA_VECTOR.Bus", bus, 0x10, 0x8, true, 0x2cd0e4d556dbda61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISA_VECTOR.Source", source, 0x18, 0x8, true, 0x4d2b4d1d8940e0f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ISA_VECTOR.GlobalSystemInterruptVector", global_system_interrupt_vector, 0x20, 0x20, true, 0x89584b48d7f50b84)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ISA_VECTOR.Flags", flags, 0x40, 0x10, true, 0x4b0b0be182fa0d56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif