#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_SCATTER_GATHER_LIST.NumberOfElements", number_of_elements, 0x0, 0x20, true, 0x299bc23b4b4ca4ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_scatter_gather_element_t>), "_STOR_SCATTER_GATHER_LIST.List", list, 0x80, 0x0, true, 0x80cedc1111fc6e9a)
#else
#define _m00
#define _m01
#endif