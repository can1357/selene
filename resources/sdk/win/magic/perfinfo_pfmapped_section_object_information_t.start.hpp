#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PFMAPPED_SECTION_OBJECT_INFORMATION.SectionObject", section_object, 0x0, 0x40, true, 0xfe9b987471dac017)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PFMAPPED_SECTION_OBJECT_INFORMATION.RangeBase", range_base, 0x40, 0x40, true, 0x6b81f7f637445dac)
#else
#define _m00
#define _m01
#endif