#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_MI_DECAY_TIMER_LINKAGE.PreviousDecayPfn", previous_decay_pfn, 0x1, 0x1f, true, 0x5365c1e5413e41f7, 31, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_MI_DECAY_TIMER_LINKAGE.NextDecayPfn", next_decay_pfn, 0x21, 0x1f, true, 0xfe021a3518b2d238, 31, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_DECAY_TIMER_LINKAGE.TimerRemoved", timer_removed, 0x0, 0x0, false, 0x19e7ad6500a51608, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif