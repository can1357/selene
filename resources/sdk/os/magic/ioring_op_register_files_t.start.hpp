#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_REGISTER_FILES.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0x4269fd409701bf05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_reg_files_flags_t), "_NT_IORING_OP_REGISTER_FILES.Flags", flags, 0x0, 0x0, false, 0x557d43a250f9f163)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_REGISTER_FILES.Count", count, 0x0, 0x0, false, 0xa4128ce22385cdc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_NT_IORING_OP_REGISTER_FILES.Handles", handles, 0x0, 0x0, false, 0x60aac8cc937f492e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif