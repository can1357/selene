#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MEMORY_ALLOCATION_MODE.Flags", flags, 0x0, 0x20, true, 0x6034dc823d58a6bf)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MEMORY_ALLOCATION_MODE.TopDown", top_down, 0x0, 0x1, true, 0x8a3ce5da21da2ee0, 1, uint32_t)
#else
#define _m00
#define _m01
#endif