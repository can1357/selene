#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_11.Size", size, 0x0, 0x0, false, 0xc2a2175b5dc49d9c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_11.Flags", flags, 0x0, 0x0, false, 0x1a7d185164b87d64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_11.Status", status, 0x0, 0x0, false, 0x7d7c9fb1db199a49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_11.NewIrp", new_irp, 0x0, 0x0, false, 0x4370898767885f75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif