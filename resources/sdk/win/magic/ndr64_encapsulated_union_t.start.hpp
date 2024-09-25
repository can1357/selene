#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_ENCAPSULATED_UNION.FormatCode", format_code, 0x0, 0x8, true, 0x6fd12e91de2c1e2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_ENCAPSULATED_UNION.Alignment", alignment, 0x8, 0x8, true, 0xe9259c3e238290cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_ENCAPSULATED_UNION.Flags", flags, 0x10, 0x8, true, 0xdd96a2e46479433c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_ENCAPSULATED_UNION.SwitchType", switch_type, 0x18, 0x8, true, 0xaddb9b5334a56563)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_ENCAPSULATED_UNION.MemoryOffset", memory_offset, 0x20, 0x20, true, 0x5bdb3c404fd30c66)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_ENCAPSULATED_UNION.MemorySize", memory_size, 0x40, 0x20, true, 0x81907cf57dcc27f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif