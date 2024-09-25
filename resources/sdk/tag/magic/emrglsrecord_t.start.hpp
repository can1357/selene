#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRGLSRECORD.emr", emr, 0x0, 0x40, true, 0xc0ade044bcc85ce6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGLSRECORD.cbData", cb_data, 0x40, 0x20, true, 0x583d6698ae5f5e47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRGLSRECORD.Data", data, 0x60, 0x8, true, 0x5d2cce1bb6422c0c)
#else
#define _m00
#define _m01
#define _m02
#endif