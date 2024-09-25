#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURENOTIFYSTRUCT.cbSize", cb_size, 0x0, 0x20, true, 0x2ad2cb1d67df858)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURENOTIFYSTRUCT.dwFlags", dw_flags, 0x20, 0x20, true, 0xa06b1eb0919ce1e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGESTURENOTIFYSTRUCT.hwndTarget", hwnd_target, 0x40, 0x40, true, 0x822809c3ae9e0e15)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::points_t), "tagGESTURENOTIFYSTRUCT.ptsLocation", pts_location, 0x80, 0x20, true, 0x6b5dc417f320c343)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURENOTIFYSTRUCT.dwInstanceID", dw_instance_id, 0xa0, 0x20, true, 0xeca0c47b90b7663c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif