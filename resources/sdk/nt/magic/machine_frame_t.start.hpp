#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_FRAME.Rip", rip, 0x0, 0x40, true, 0xb0c4ff043a65cd33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MACHINE_FRAME.SegCs", seg_cs, 0x40, 0x10, true, 0x7a058ec939a07ba1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MACHINE_FRAME.EFlags", e_flags, 0x80, 0x20, true, 0x938cd92954553fcf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MACHINE_FRAME.Rsp", rsp, 0xc0, 0x40, true, 0x552157b3efe5decf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MACHINE_FRAME.SegSs", seg_ss, 0x100, 0x10, true, 0xa9c3604cc028130a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif