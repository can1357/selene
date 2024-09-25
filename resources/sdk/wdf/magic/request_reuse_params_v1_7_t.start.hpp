#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0x54cf624a11887390)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_7.Flags", flags, 0x0, 0x0, false, 0x23fe6cc1e00b21bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_7.Status", status, 0x0, 0x0, false, 0x36d5878e397ceba5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_7.NewIrp", new_irp, 0x0, 0x0, false, 0x4855c362c490fa64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif