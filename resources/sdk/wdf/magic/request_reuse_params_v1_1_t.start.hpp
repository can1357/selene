#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_1.Size", size, 0x0, 0x0, false, 0xa66089ea7217a379)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_1.Flags", flags, 0x0, 0x0, false, 0x5844ad059e03aa2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_1.Status", status, 0x0, 0x0, false, 0x4e2fe0e4f0d0240d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_1.NewIrp", new_irp, 0x0, 0x0, false, 0x81bad78b4fbd649e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif