#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS.Size", size, 0x0, 0x20, true, 0x34fa29cfc306feb2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_REUSE_PARAMS.Flags", flags, 0x20, 0x20, true, 0x9b18e12c7e8aa8c8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_REQUEST_REUSE_PARAMS.Status", status, 0x40, 0x20, true, 0x295c51794456cb90)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WDF_REQUEST_REUSE_PARAMS.NewIrp", new_irp, 0x80, 0x40, true, 0x35b314e582bc788d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif