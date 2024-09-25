#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.FullPtrUsed", full_ptr_used, 0x0, 0x1, true, 0x647f5e6ead2ccd15, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.RpcSsAllocUsed", rpc_ss_alloc_used, 0x1, 0x1, true, 0xd010bf767ce71727, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.ObjectProc", object_proc, 0x2, 0x1, true, 0x38247758cf360aef, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.HasRpcFlags", has_rpc_flags, 0x3, 0x1, true, 0xb32ec880db80bf00, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.IgnoreObjectException", ignore_object_exception, 0x4, 0x1, true, 0x2ceee1bfc2104cfe, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.HasCommOrFault", has_comm_or_fault, 0x5, 0x1, true, 0x291c4e35291bd6ea, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_FLAGS.UseNewInitRoutines", use_new_init_routines, 0x6, 0x1, true, 0x5fec3e3f08b6d05f, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif