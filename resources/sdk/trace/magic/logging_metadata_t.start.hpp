#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TraceLoggingMetadata_t.Signature", signature, 0x0, 0x20, true, 0x66ffe8f34cfec1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TraceLoggingMetadata_t.Size", size, 0x20, 0x10, true, 0x5f15e39472ae9d87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TraceLoggingMetadata_t.Version", version, 0x30, 0x8, true, 0xc341ccf19d8441b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TraceLoggingMetadata_t.Flags", flags, 0x38, 0x8, true, 0x526b776a82ad2a91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TraceLoggingMetadata_t.Magic", magic, 0x40, 0x40, true, 0x2a84f71622cb2b72)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif