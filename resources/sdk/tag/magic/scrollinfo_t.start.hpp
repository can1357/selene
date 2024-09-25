#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSCROLLINFO.cbSize", cb_size, 0x0, 0x20, true, 0x87ab86daf3abf666)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSCROLLINFO.fMask", f_mask, 0x20, 0x20, true, 0x97e6f19ee35bb0eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLINFO.nMin", n_min, 0x40, 0x20, true, 0x6303b1f96ba8c301)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLINFO.nMax", n_max, 0x60, 0x20, true, 0x8d2e37708baa4b7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSCROLLINFO.nPage", n_page, 0x80, 0x20, true, 0x8256a8c218e7803a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLINFO.nPos", n_pos, 0xa0, 0x20, true, 0x6cc1f8e4d8e49fc2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSCROLLINFO.nTrackPos", n_track_pos, 0xc0, 0x20, true, 0xa4e35fe537367a25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif