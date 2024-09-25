#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VP_SCATTER_GATHER_LIST.NumberOfElements", number_of_elements, 0x0, 0x20, true, 0xa52aac12b025ec3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::vp_scatter_gather_element_t>), "_VP_SCATTER_GATHER_LIST.Elements", elements, 0x80, 0x0, true, 0xb50730d6f1977d53)
#else
#define _m00
#define _m01
#endif