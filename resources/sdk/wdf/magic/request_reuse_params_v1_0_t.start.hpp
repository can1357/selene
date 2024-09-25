#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0xfe3d6dab315a4031)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_0.Flags", flags, 0x0, 0x0, false, 0x1c6344ad062c0ad7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_0.Status", status, 0x0, 0x0, false, 0xeff55cfe9d99004e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_0.NewIrp", new_irp, 0x0, 0x0, false, 0x933eb006ff4f90ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif