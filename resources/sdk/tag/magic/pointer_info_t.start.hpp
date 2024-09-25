#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.pointerType", pointer_type, 0x0, 0x20, true, 0xf8d1f40f6f9e63fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.pointerId", pointer_id, 0x20, 0x20, true, 0x1417fb7ce7bf624a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.frameId", frame_id, 0x40, 0x20, true, 0x595e78f85340de98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.pointerFlags", pointer_flags, 0x60, 0x20, true, 0x18dc6ac4da1936d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagPOINTER_INFO.sourceDevice", source_device, 0x80, 0x40, true, 0x8ed4c3b7ce188e6a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagPOINTER_INFO.hwndTarget", hwnd_target, 0xc0, 0x40, true, 0x1f9a1f55498f236e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagPOINTER_INFO.ptPixelLocation", pt_pixel_location, 0x100, 0x40, true, 0x876b5a75ca50f13f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagPOINTER_INFO.ptHimetricLocation", pt_himetric_location, 0x140, 0x40, true, 0xcd80ee70a2402fc6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagPOINTER_INFO.ptPixelLocationRaw", pt_pixel_location_raw, 0x180, 0x40, true, 0xb0dd00cf1f849472)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagPOINTER_INFO.ptHimetricLocationRaw", pt_himetric_location_raw, 0x1c0, 0x40, true, 0xc276c240548dc358)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.dwTime", dw_time, 0x200, 0x20, true, 0x3112790c0b360335)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.historyCount", history_count, 0x220, 0x20, true, 0x21a51e552180f6d5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINTER_INFO.InputData", input_data, 0x240, 0x20, true, 0x91d664a07ba1b9fc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOINTER_INFO.dwKeyStates", dw_key_states, 0x260, 0x20, true, 0x8bf02c105756a63d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagPOINTER_INFO.PerformanceCount", performance_count, 0x280, 0x40, true, 0x51fd87027318e9ee)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::pointer_button_change_type_t), "tagPOINTER_INFO.ButtonChangeType", button_change_type, 0x2c0, 0x20, true, 0xa1b27c7c008da81c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif