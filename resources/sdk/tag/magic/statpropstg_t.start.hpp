#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSTATPROPSTG.lpwstrName", lpwstr_name, 0x0, 0x40, true, 0x4a3b6e4a47a2aabd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATPROPSTG.propid", propid, 0x40, 0x20, true, 0xfb7705377387a38d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSTATPROPSTG.vt", vt, 0x60, 0x10, true, 0xf54779c24f3547e0)
#else
#define _m00
#define _m01
#define _m02
#endif