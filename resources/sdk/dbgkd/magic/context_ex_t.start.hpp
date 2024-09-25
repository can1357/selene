#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_CONTEXT_EX.Offset", offset, 0x0, 0x20, true, 0xb40cdc6eaa6857c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_CONTEXT_EX.ByteCount", byte_count, 0x20, 0x20, true, 0xf6f42c5b1b01133b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_CONTEXT_EX.BytesCopied", bytes_copied, 0x40, 0x20, true, 0x674086262b7fadcb)
#else
#define _m00
#define _m01
#define _m02
#endif