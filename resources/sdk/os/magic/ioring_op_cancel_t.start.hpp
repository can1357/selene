#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_CANCEL.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0xb7e3b8b826061bc4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_handleref_t), "_NT_IORING_OP_CANCEL.File", file, 0x0, 0x0, false, 0x48e4be9d8ceda9e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_OP_CANCEL.CancelId", cancel_id, 0x0, 0x0, false, 0x2856f07014486926)
#else
#define _m00
#define _m01
#define _m02
#endif