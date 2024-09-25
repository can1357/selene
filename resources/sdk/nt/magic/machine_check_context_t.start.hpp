#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::machine_frame_t), "_MACHINE_CHECK_CONTEXT.MachineFrame", machine_frame, 0x0, 0x40, true, 0xff0d0637eaa69203)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_CHECK_CONTEXT.Rax", rax, 0x140, 0x40, true, 0x11037ace3dcfa3ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_CHECK_CONTEXT.Rcx", rcx, 0x180, 0x40, true, 0xb8b02fa50eef1a12)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_CHECK_CONTEXT.Rdx", rdx, 0x1c0, 0x40, true, 0x89f4478929849560)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_CHECK_CONTEXT.GsBase", gs_base, 0x200, 0x40, true, 0xaed8c089d81b59f4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_CHECK_CONTEXT.Cr3", cr3, 0x240, 0x40, true, 0xb3d77db90d4358ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif