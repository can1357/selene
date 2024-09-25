#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_EXTENDED_DIAG_DATA_HEADER.Size", size, 0x0, 0x20, true, 0xd9843ac72dfc0013)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_EXTENDED_DIAG_DATA_HEADER.Signature", signature, 0x20, 0x20, true, 0x97f85672fd5c8faa)
#else
#define _m00
#define _m01
#endif