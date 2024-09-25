#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_REGISTER_BUFFERS.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0x95c2e95f0a81a2bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_reg_buffers_flags_t), "_NT_IORING_OP_REGISTER_BUFFERS.Flags", flags, 0x0, 0x0, false, 0xeea17be0eb3e5bf8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_REGISTER_BUFFERS.Count", count, 0x0, 0x0, false, 0x1bbcca85f68b2f5d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ioring_buffer_info_t*), "_NT_IORING_OP_REGISTER_BUFFERS.Buffers", buffers, 0x0, 0x0, false, 0xee27fa1ecc5ca2a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif