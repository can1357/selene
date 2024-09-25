#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRANGLEARC.emr", emr, 0x0, 0x40, true, 0x6c99d8e536583470)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRANGLEARC.ptlCenter", ptl_center, 0x40, 0x40, true, 0x8b19d3991614a4c6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRANGLEARC.nRadius", n_radius, 0x80, 0x20, true, 0x4889d7b88844c696)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMRANGLEARC.eStartAngle", e_start_angle, 0xa0, 0x20, true, 0xd6edcae5338d9ca3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMRANGLEARC.eSweepAngle", e_sweep_angle, 0xc0, 0x20, true, 0x5ffd174d018bfc16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif