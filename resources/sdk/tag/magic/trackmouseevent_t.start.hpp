#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTRACKMOUSEEVENT.cbSize", cb_size, 0x0, 0x20, true, 0xc18b080468c61c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTRACKMOUSEEVENT.dwFlags", dw_flags, 0x20, 0x20, true, 0xff3dde7344ef9d3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagTRACKMOUSEEVENT.hwndTrack", hwnd_track, 0x40, 0x40, true, 0x247ca9e0cfd2e30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTRACKMOUSEEVENT.dwHoverTime", dw_hover_time, 0x80, 0x20, true, 0xed7111e8f6ffb236)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif