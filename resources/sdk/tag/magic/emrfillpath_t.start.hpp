#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRFILLPATH.emr", emr, 0x0, 0x40, true, 0x2c0628b668ffd1ed)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRFILLPATH.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xde9164e11c45acc9)
#else
#define _m00
#define _m01
#endif