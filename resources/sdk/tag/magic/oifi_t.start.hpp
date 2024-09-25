#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOIFI.cb", cb, 0x0, 0x20, true, 0x70b8cb144a73ee79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagOIFI.fMDIApp", f_mdi_app, 0x20, 0x20, true, 0x6986af69b0cefdf3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagOIFI.hwndFrame", hwnd_frame, 0x40, 0x40, true, 0x6bf2c83bc69b5a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::haccel_t*), "tagOIFI.haccel", haccel, 0x80, 0x40, true, 0xcf9857815ae2644a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOIFI.cAccelEntries", c_accel_entries, 0xc0, 0x20, true, 0x84807bcf8f1e06bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif