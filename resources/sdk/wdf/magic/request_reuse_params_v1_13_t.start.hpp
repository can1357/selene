#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_13.Size", size, 0x0, 0x0, false, 0x5672a2f4a9f75af9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_13.Flags", flags, 0x0, 0x0, false, 0xc1899b1df9afe6fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_13.Status", status, 0x0, 0x0, false, 0x8ec7fa74f6275757)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_13.NewIrp", new_irp, 0x0, 0x0, false, 0xb77b709bbf0d8dc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif