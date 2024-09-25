#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEVENTMSG.message", message, 0x0, 0x20, true, 0x100de901c3579f1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEVENTMSG.paramL", param_l, 0x20, 0x20, true, 0xa16c31aac89fdf31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEVENTMSG.paramH", param_h, 0x40, 0x20, true, 0xaab3c9af56d364f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEVENTMSG.time", time, 0x60, 0x20, true, 0x4ed6be3aefb115ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagEVENTMSG.hwnd", hwnd, 0x80, 0x40, true, 0x5147520a946c77a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif