#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KSGATE.Count", count, 0x0, 0x0, false, 0xe1b4870884be76a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksgate_t*), "_KSGATE.NextGate", next_gate, 0x0, 0x0, false, 0xa2b19e463069968b)
#else
#define _m00
#define _m01
#endif