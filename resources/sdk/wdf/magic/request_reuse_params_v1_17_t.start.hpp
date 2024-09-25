#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_17.Size", size, 0x0, 0x0, false, 0x18dbc0b11f3b663)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_17.Flags", flags, 0x0, 0x0, false, 0x96c2cc4e1a14c4d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS_V1_17.Status", status, 0x0, 0x0, false, 0xc7eb0f63f7637d9e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS_V1_17.NewIrp", new_irp, 0x0, 0x0, false, 0xe583dae97576d6b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif