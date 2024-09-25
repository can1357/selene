#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_FLT_CCB.Type", type, 0x0, 0x20, true, 0xcff93ef6c71b79d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::manager_ccb_t), "_FLT_CCB.Data.Manager", manager, 0x0, 0x80, true, 0xd042291397fbdec2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::filter_ccb_t), "_FLT_CCB.Data.Filter", filter, 0x0, 0x80, true, 0x352d9f598e94b821)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::instance_ccb_t), "_FLT_CCB.Data.Instance", instance, 0x0, 0x40, true, 0x6dcac21811fea743)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::volume_ccb_t), "_FLT_CCB.Data.Volume", volume, 0x0, 0xc0, true, 0xe32488c0219b713)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::port_ccb_t), "_FLT_CCB.Data.Port", port, 0x0, 0xc0, true, 0x7ebf015bd1eeb6ba)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_FLT_CCB.Data", data, 0x40, 0xc0, true, 0xf4b7561f23e0b82a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif