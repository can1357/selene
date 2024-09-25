#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0x3feebe55be81703b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_9.Flags", flags, 0x0, 0x0, false, 0x8f4ad642e4b35078)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_9.Status", status, 0x0, 0x0, false, 0x307a1a5154e91dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_9.NewIrp", new_irp, 0x0, 0x0, false, 0x531ca7cec173f68f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif