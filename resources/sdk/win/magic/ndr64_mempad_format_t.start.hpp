#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_MEMPAD_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xb68fd4aeab31676f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_MEMPAD_FORMAT.Reserve1", reserve1, 0x8, 0x8, true, 0x458dbac44d96fc6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_MEMPAD_FORMAT.MemPad", mem_pad, 0x10, 0x10, true, 0x9ac8819d9a183280)
#else
#define _m00
#define _m01
#define _m02
#endif