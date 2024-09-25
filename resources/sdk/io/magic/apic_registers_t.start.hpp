#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_IO_APIC_REGISTERS.RegisterIndex", register_index, 0x0, 0x20, true, 0x8a67e45d6f8c77a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_IO_APIC_REGISTERS.RegisterValue", register_value, 0x80, 0x20, true, 0xfee4cb8c19ddbc68)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_IO_APIC_REGISTERS.EndOfInterrupt", end_of_interrupt, 0x200, 0x20, true, 0x94caa93e43fcacfe)
#else
#define _m00
#define _m01
#define _m02
#endif