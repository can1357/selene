#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_REVERSE_VIEW_MAP.ViewLinks", view_links, 0x0, 0x80, true, 0xf89115123cee3496)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_REVERSE_VIEW_MAP.SystemCacheVa", system_cache_va, 0x80, 0x40, true, 0x3023fec4609eddb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_REVERSE_VIEW_MAP.SessionViewVa", session_view_va, 0x80, 0x40, true, 0x5f61d4d3e586bc1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MI_REVERSE_VIEW_MAP.VadsProcess", vads_process, 0x80, 0x40, true, 0xebead0e66ccd5e44)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_REVERSE_VIEW_MAP.Type", type, 0x80, 0x2, true, 0x712dee4d9622e238, 2, uint64_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t*), "_MI_REVERSE_VIEW_MAP.Subsection", subsection, 0xc0, 0x40, true, 0xec03314c7cbd6726)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_REVERSE_VIEW_MAP.SubsectionType", subsection_type, 0xc0, 0x1, true, 0x4349e75b2fe02885, 1, uint64_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_REVERSE_VIEW_MAP.SectionOffset", section_offset, 0x100, 0x40, true, 0xd37ec265b4cc6995)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_cache_view_attributes_t), "_MI_REVERSE_VIEW_MAP.SystemCacheAttributes", system_cache_attributes, 0x100, 0x40, true, 0x59c8ac68c5234a56)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_REVERSE_VIEW_MAP.AllAttributes", all_attributes, 0x0, 0x0, false, 0xd9fb9900e1a32338)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif