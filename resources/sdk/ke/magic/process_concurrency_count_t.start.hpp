#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_KE_PROCESS_CONCURRENCY_COUNT.Fraction", fraction, 0x0, 0x0, false, 0xae1fdde591790a5b, 20, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_KE_PROCESS_CONCURRENCY_COUNT.Count", count, 0x0, 0x0, false, 0xb033765c09c5be73, 12, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KE_PROCESS_CONCURRENCY_COUNT.AllFields", all_fields, 0x0, 0x0, false, 0x6d6d6001f07ad8ac)
#else
#define _m00
#define _m01
#define _m02
#endif