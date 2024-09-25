#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_PROTSEQ_VECTORA.Count", count, 0x0, 0x20, true, 0x490ee4ffe6fb7a24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t*, 1>), "_RPC_PROTSEQ_VECTORA.Protseq", protseq, 0x40, 0x40, true, 0x33cf8f18ee1ccf52)
#else
#define _m00
#define _m01
#endif