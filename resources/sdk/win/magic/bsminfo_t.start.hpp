#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BSMINFO.cbSize", cb_size, 0x0, 0x20, true, 0x1cd50a01908f493)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdesk_t*), "BSMINFO.hdesk", hdesk, 0x40, 0x40, true, 0x1b2f7e1d7085c539)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "BSMINFO.hwnd", hwnd, 0x80, 0x40, true, 0x56ce9802c0233148)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "BSMINFO.luid", luid, 0xc0, 0x40, true, 0xc0732efc3d93f1f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif