#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_PHYSICAL_VIEW.PhysicalNode", physical_node, 0x0, 0xc0, true, 0x17b0148c1c4be760)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmvad_short_t*), "_MI_PHYSICAL_VIEW.Vad", vad, 0xc0, 0x40, true, 0xefd6a13cc1576c9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::aweinfo_t*), "_MI_PHYSICAL_VIEW.AweInfo", awe_info, 0x100, 0x40, true, 0x95fe26723ba875a)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_PHYSICAL_VIEW.ViewPageSize", view_page_size, 0x140, 0x2, true, 0x3af29668c323df9a, 2, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MI_PHYSICAL_VIEW.ControlArea", control_area, 0x140, 0x40, true, 0x76d44d41d6195460)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif