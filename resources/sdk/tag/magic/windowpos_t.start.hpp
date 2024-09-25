#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagWINDOWPOS.hwnd", hwnd, 0x0, 0x40, true, 0xfc9e19924d6cf85c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagWINDOWPOS.hwndInsertAfter", hwnd_insert_after, 0x40, 0x40, true, 0x16a3eecc5631e6a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWINDOWPOS.x", x, 0x80, 0x20, true, 0x19cb5f4bbce5630f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWINDOWPOS.y", y, 0xa0, 0x20, true, 0xfd0a0e2a0a20b2ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWINDOWPOS.cx", cx, 0xc0, 0x20, true, 0xfe3617e53d086be7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWINDOWPOS.cy", cy, 0xe0, 0x20, true, 0x6b8af19d633c1e28)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWPOS.flags", flags, 0x100, 0x20, true, 0x23f2ed3511c30683)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif