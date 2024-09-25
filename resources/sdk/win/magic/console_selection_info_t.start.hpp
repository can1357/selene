#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_SELECTION_INFO.dwFlags", dw_flags, 0x0, 0x20, true, 0x26b48f38c3e00b92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SELECTION_INFO.dwSelectionAnchor", dw_selection_anchor, 0x20, 0x20, true, 0xa3cc7ffb317f28ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::small_rect_t), "_CONSOLE_SELECTION_INFO.srSelection", sr_selection, 0x40, 0x40, true, 0x2d9b53c571828c01)
#else
#define _m00
#define _m01
#define _m02
#endif