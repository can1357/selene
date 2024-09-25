#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRGLSBOUNDEDRECORD.emr", emr, 0x0, 0x40, true, 0x39026f3fba1567d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRGLSBOUNDEDRECORD.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xe16f357d1e011f1b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGLSBOUNDEDRECORD.cbData", cb_data, 0xc0, 0x20, true, 0xf00da8f4aa273d5a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRGLSBOUNDEDRECORD.Data", data, 0xe0, 0x8, true, 0x9be5905027dc9c2a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif