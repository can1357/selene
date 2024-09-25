#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCATTER_GATHER_LIST.NumberOfElements", number_of_elements, 0x0, 0x20, true, 0x9f28b1959a6051d3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::scatter_gather_element_t>), "_SCATTER_GATHER_LIST.Elements", elements, 0x80, 0x0, true, 0xe30d961d2b83422f)
#else
#define _m00
#define _m01
#endif