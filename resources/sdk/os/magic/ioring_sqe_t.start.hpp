#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::ioring_op_code_t), "_NT_IORING_SQE.OpCode", op_code, 0x0, 0x0, false, 0x790d2c88cb198152)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_sqe_flags_t), "_NT_IORING_SQE.Flags", flags, 0x0, 0x0, false, 0xccb76ed1a2d597d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_SQE.UserData", user_data, 0x0, 0x0, false, 0xd7efb31d3e39608)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_SQE.PaddingUserDataForWow", padding_user_data_for_wow, 0x0, 0x0, false, 0xb5e1135e5881fd89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_read_t), "_NT_IORING_SQE.Read", read, 0x0, 0x0, false, 0xfb736bfb6a69902f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_register_files_t), "_NT_IORING_SQE.RegisterFiles", register_files, 0x0, 0x0, false, 0x8aaac690a1fcfdf2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_register_buffers_t), "_NT_IORING_SQE.RegisterBuffers", register_buffers, 0x0, 0x0, false, 0xf3a2a5f1764299aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_cancel_t), "_NT_IORING_SQE.Cancel", cancel, 0x0, 0x0, false, 0xb5c3549e67a128a9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_write_t), "_NT_IORING_SQE.Write", write, 0x0, 0x0, false, 0xce436398fbf92192)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_flush_t), "_NT_IORING_SQE.Flush", flush, 0x0, 0x0, false, 0x6b6ca29782bc428c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_op_reserved_t), "_NT_IORING_SQE.ReservedMaxSizePadding", reserved_max_size_padding, 0x0, 0x0, false, 0xfc42a442ea009cb7)
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
#endif