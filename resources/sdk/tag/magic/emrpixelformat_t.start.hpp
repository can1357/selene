#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPIXELFORMAT.emr", emr, 0x0, 0x40, true, 0xcb93784ee1b1b6de)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::pixelformatdescriptor_t), "tagEMRPIXELFORMAT.pfd", pfd, 0x40, 0x40, true, 0x97112f73f1100a4f)
#else
#define _m00
#define _m01
#endif