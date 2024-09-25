#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_CQE.UserData", user_data, 0x0, 0x0, false, 0x18900d6035b72359)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_CQE.PaddingUserDataForWow", padding_user_data_for_wow, 0x0, 0x0, false, 0xc020d4ff1dc4458b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_NT_IORING_CQE.IoStatus", io_status, 0x0, 0x0, false, 0xa37a0f2843ea4d3b)
#else
#define _m00
#define _m01
#define _m02
#endif