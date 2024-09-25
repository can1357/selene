#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Wx86TIB.Size", size, 0x0, 0x20, true, 0x1aa98f114067ffdb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Wx86TIB.InitialPc", initial_pc, 0x20, 0x20, true, 0xa6b110819ced1af9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.StackBase", stack_base, 0x40, 0x20, true, 0x6ee7548c25de11a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.StackLimit", stack_limit, 0x60, 0x20, true, 0xe3824492bb6d195)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.DeallocationStack", deallocation_stack, 0x80, 0x20, true, 0x81aade5c0d04224a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Wx86TIB.LogFlags", log_flags, 0xa0, 0x20, true, 0x4d33e8920c5b8c67)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Wx86TIB.InitialSp", initial_sp, 0xc0, 0x20, true, 0xdefafc510ab26b22)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_Wx86TIB.SimulationCount", simulation_count, 0xe0, 0x8, true, 0xc5250147629f4ab4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_Wx86TIB.InCpuSimulation", in_cpu_simulation, 0xe8, 0x8, true, 0xb7a46797a51aa1b9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_Wx86TIB.EmulateInitialPc", emulate_initial_pc, 0xf0, 0x8, true, 0x2ed3119115a56f0d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_Wx86TIB.Initialized", initialized, 0xf8, 0x8, true, 0xb4857ace32f70416)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::unknown /* unhandled pointer */), "_Wx86TIB.ExceptionList", exception_list, 0x100, 0x20, true, 0xed59be76fe443f92)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.CpuContext", cpu_context, 0x120, 0x20, true, 0x487c6be8fc94700e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::unknown /* unhandled pointer */), "_Wx86TIB.InitialExceptionContext", initial_exception_context, 0x140, 0x20, true, 0x4e86bd927b142eab)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.pCallersRIID", p_callers_riid, 0x160, 0x20, true, 0x3f610d05a13232c9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.pCallersUnknown", p_callers_unknown, 0x180, 0x20, true, 0x1269af0eaa4b5c3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Wx86TIB.Flags", flags, 0x1a0, 0x20, true, 0x6c4ff00d83ae119a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.SelfRegDllName", self_reg_dll_name, 0x1c0, 0x20, true, 0x28de8912c856ed7a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_Wx86TIB.SelfRegDllHandle", self_reg_dll_handle, 0x1e0, 0x20, true, 0xc7a4d4f2ff5ae9fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif