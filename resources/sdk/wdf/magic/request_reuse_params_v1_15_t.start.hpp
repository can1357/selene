#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_15.Size", size, 0x0, 0x0, false, 0x1fe2aaa06083cfbd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_15.Flags", flags, 0x0, 0x0, false, 0xf26fbe8aea5a5940)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_15.Status", status, 0x0, 0x0, false, 0x41d6e2823ad9bb83)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_15.NewIrp", new_irp, 0x0, 0x0, false, 0xdc3213335e47d46b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif