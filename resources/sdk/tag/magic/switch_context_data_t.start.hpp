#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSWITCH_CONTEXT_DATA.ullOsMaxVersionTested", ull_os_max_version_tested, 0x0, 0x40, true, 0x94adf7d3fd62c574)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWITCH_CONTEXT_DATA.ulTargetPlatform", ul_target_platform, 0x40, 0x20, true, 0x1f309509041e0f35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSWITCH_CONTEXT_DATA.ullContextMinimum", ull_context_minimum, 0x80, 0x40, true, 0xe1636400dab0cf33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSWITCH_CONTEXT_DATA.guPlatform", gu_platform, 0xc0, 0x80, true, 0xa1af802c4a2d85db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSWITCH_CONTEXT_DATA.guMinPlatform", gu_min_platform, 0x140, 0x80, true, 0xab9051a0836fb577)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWITCH_CONTEXT_DATA.ulContextSource", ul_context_source, 0x1c0, 0x20, true, 0xf907df803ccaaeea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWITCH_CONTEXT_DATA.ulElementCount", ul_element_count, 0x1e0, 0x20, true, 0xe5b09f734520a967)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "tagSWITCH_CONTEXT_DATA.guElements", gu_elements, 0x200, 0x0, true, 0xd80479b4b5a93c01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif