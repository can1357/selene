#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPOLYLINE.emr", emr, 0x0, 0x40, true, 0xcc51600e74c57569)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPOLYLINE.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xba29cfb51cc106f7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPOLYLINE.cptl", cptl, 0xc0, 0x20, true, 0x81b9bb009f8ac04f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::pointl_t, 1>), "tagEMRPOLYLINE.aptl", aptl, 0xe0, 0x40, true, 0x10137275f33f5090)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif