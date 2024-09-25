#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPSPEC.ulKind", ul_kind, 0x0, 0x20, true, 0x2356ad299f330c4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPSPEC.propid", propid, 0x40, 0x20, true, 0x2d5bddf3d7346a34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagPROPSPEC.lpwstr", lpwstr, 0x40, 0x40, true, 0x2c5013510817d1bd)
#else
#define _m00
#define _m01
#define _m02
#endif