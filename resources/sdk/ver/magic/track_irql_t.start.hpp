#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_TRACK_IRQL.Thread", thread, 0x0, 0x40, true, 0x7d3cf8c3f74a0e80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VI_TRACK_IRQL.OldIrql", old_irql, 0x40, 0x8, true, 0xb3066cb2ba78ffe2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VI_TRACK_IRQL.NewIrql", new_irql, 0x48, 0x8, true, 0xcf70b32cc4ae2a53)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_VI_TRACK_IRQL.Processor", processor, 0x50, 0x10, true, 0x9142378e6b762e3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_TRACK_IRQL.TickCount", tick_count, 0x60, 0x20, true, 0x16e199fd36c1fd15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 5>), "_VI_TRACK_IRQL.StackTrace", stack_trace, 0x80, 0x40, true, 0xea3668513df8d337)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif