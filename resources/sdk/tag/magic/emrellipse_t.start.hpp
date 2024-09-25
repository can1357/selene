#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRELLIPSE.emr", emr, 0x0, 0x40, true, 0xb3ac925f7f38edeb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRELLIPSE.rclBox", rcl_box, 0x40, 0x80, true, 0xa8e516f19ba4d090)
#else
#define _m00
#define _m01
#endif