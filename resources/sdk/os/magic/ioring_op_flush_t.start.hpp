#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_FLUSH.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0xff86f79cd53dd8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_FLUSH.Flags", flags, 0x0, 0x0, false, 0x2aa1e71253a630f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_handleref_t), "_NT_IORING_OP_FLUSH.File", file, 0x0, 0x0, false, 0x58755dc5a60f8fc)
#else
#define _m00
#define _m01
#define _m02
#endif