#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRROUNDRECT.emr", emr, 0x0, 0x40, true, 0xc6ea3cc0fc6c5cf9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRROUNDRECT.rclBox", rcl_box, 0x40, 0x80, true, 0xfc5bda6f5a57f747)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagEMRROUNDRECT.szlCorner", szl_corner, 0xc0, 0x40, true, 0x9020931c1af5f903)
#else
#define _m00
#define _m01
#define _m02
#endif