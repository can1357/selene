#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_PROTSEQ_VECTORW.Count", count, 0x0, 0x20, true, 0x3556633221cda4a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t*, 1>), "_RPC_PROTSEQ_VECTORW.Protseq", protseq, 0x40, 0x40, true, 0x5d4ff299b883193d)
#else
#define _m00
#define _m01
#endif