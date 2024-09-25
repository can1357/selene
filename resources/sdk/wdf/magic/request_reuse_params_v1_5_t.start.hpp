#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0x457b20d978d15094)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_5.Flags", flags, 0x0, 0x0, false, 0x6abd4dbb20c1cb4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_5.Status", status, 0x0, 0x0, false, 0x877a8c52c738a767)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_5.NewIrp", new_irp, 0x0, 0x0, false, 0x4282dfdfb8a4b5de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif