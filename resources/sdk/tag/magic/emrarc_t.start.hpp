#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRARC.emr", emr, 0x0, 0x40, true, 0xb8507a5956e9e0a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRARC.rclBox", rcl_box, 0x40, 0x80, true, 0xd347d3f360844efa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRARC.ptlStart", ptl_start, 0xc0, 0x40, true, 0xcb2fb9c294c56c31)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRARC.ptlEnd", ptl_end, 0x100, 0x40, true, 0x31cefe46eb9f62a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif