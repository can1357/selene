#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_CPU_SET_INFORMATION.Gsiv", gsiv, 0x0, 0x20, true, 0xce13e1094f398c2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_INTERRUPT_CPU_SET_INFORMATION.Group", group, 0x20, 0x10, true, 0xc8095ae2504a4711)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_INTERRUPT_CPU_SET_INFORMATION.CpuSets", cpu_sets, 0x40, 0x40, true, 0xc82f2b2de246f556)
#else
#define _m00
#define _m01
#define _m02
#endif