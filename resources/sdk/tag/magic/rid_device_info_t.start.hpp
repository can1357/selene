#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x3f1a8fcb03201e87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO.dwType", dw_type, 0x20, 0x20, true, 0x54f24b6a02eef550)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rid_device_info_mouse_t), "tagRID_DEVICE_INFO.mouse", mouse, 0x40, 0x80, true, 0x1872928b26dc9a3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rid_device_info_keyboard_t), "tagRID_DEVICE_INFO.keyboard", keyboard, 0x40, 0xc0, true, 0x4b41280554719e44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rid_device_info_hid_t), "tagRID_DEVICE_INFO.hid", hid, 0x40, 0x80, true, 0xd02e8913413391aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif