#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagtype_notifications_t), "_DXGK_DIAGNOSTIC_TYPES.Notifications", notifications, 0x0, 0x20, true, 0x846f5382bc74fd58)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagtype_progressions_t), "_DXGK_DIAGNOSTIC_TYPES.Progressions", progressions, 0x0, 0x20, true, 0xaa826777e906fcfe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_TYPES.Value", value, 0x0, 0x20, true, 0xf76a82a6319afabb)
#else
#define _m00
#define _m01
#define _m02
#endif