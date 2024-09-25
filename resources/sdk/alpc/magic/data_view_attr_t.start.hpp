#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_DATA_VIEW_ATTR.Flags", flags, 0x0, 0x20, true, 0x969b63dbdc64c4b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_DATA_VIEW_ATTR.SectionHandle", section_handle, 0x40, 0x40, true, 0xa17e6fabbf06c3d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_DATA_VIEW_ATTR.ViewBase", view_base, 0x80, 0x40, true, 0xcbc222d2a8495ea9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_DATA_VIEW_ATTR.ViewSize", view_size, 0xc0, 0x40, true, 0xefea8d236786e1c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif