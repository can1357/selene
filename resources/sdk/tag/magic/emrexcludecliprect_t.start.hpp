#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXCLUDECLIPRECT.emr", emr, 0x0, 0x40, true, 0x729496024427558f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMREXCLUDECLIPRECT.rclClip", rcl_clip, 0x40, 0x80, true, 0x7f8aa3a7d2890a03)
#else
#define _m00
#define _m01
#endif