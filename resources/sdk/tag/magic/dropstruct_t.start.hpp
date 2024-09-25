#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagDROPSTRUCT.hwndSource", hwnd_source, 0x0, 0x40, true, 0xf120fe2f06a1e754)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagDROPSTRUCT.hwndSink", hwnd_sink, 0x40, 0x40, true, 0xf3c11014e1c0d12e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDROPSTRUCT.wFmt", w_fmt, 0x80, 0x20, true, 0x142f6fc1b92641ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagDROPSTRUCT.dwData", dw_data, 0xc0, 0x40, true, 0x55710a0f0822d206)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagDROPSTRUCT.ptDrop", pt_drop, 0x100, 0x40, true, 0x5048d8ed4405ca60)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDROPSTRUCT.dwControlData", dw_control_data, 0x140, 0x20, true, 0xfe384d60d72c21f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif