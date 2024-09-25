#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLS_WRITE_ENTRY.Buffer", buffer, 0x0, 0x40, true, 0x4ec90f1f12bce453)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_WRITE_ENTRY.ByteLength", byte_length, 0x40, 0x20, true, 0xec79241a1948e844)
#else
#define _m00
#define _m01
#endif