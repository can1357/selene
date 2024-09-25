#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.P1Home", p1_home, 0x0, 0x40, true, 0x981b4a14c0b059a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.P2Home", p2_home, 0x40, 0x40, true, 0xe604687c89cd84e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.P3Home", p3_home, 0x80, 0x40, true, 0x675fc41a1e7db7f4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.P4Home", p4_home, 0xc0, 0x40, true, 0x67aa9267be6e450b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KUMS_CONTEXT_HEADER.StackTop", stack_top, 0x100, 0x40, true, 0xe7b2931ad366f349)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.StackSize", stack_size, 0x140, 0x40, true, 0xaadd30c56c5190f3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.RspOffset", rsp_offset, 0x180, 0x40, true, 0x88ec8784681530ae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.Rip", rip, 0x1c0, 0x40, true, 0x522771b8a73eb60a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::xsave_format*), "_KUMS_CONTEXT_HEADER.FltSave", flt_save, 0x200, 0x40, true, 0xbf9b85801263fb85)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUMS_CONTEXT_HEADER.Volatile", _volatile, 0x240, 0x1, true, 0x466f80dbc59e1098, 1, uint64_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.Flags", flags, 0x240, 0x40, true, 0x14710d53007c463f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::trapframe*), "_KUMS_CONTEXT_HEADER.TrapFrame", trap_frame, 0x280, 0x40, true, 0x494054b68a494155)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::exframe*), "_KUMS_CONTEXT_HEADER.ExceptionFrame", exception_frame, 0x2c0, 0x40, true, 0xe2fe5195603794f3)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KUMS_CONTEXT_HEADER.SourceThread", source_thread, 0x300, 0x40, true, 0x83439c531e5b452a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUMS_CONTEXT_HEADER.Return", _return, 0x340, 0x40, true, 0x4124644b76d07057)
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
#endif