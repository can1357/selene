#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAXESLISTW.axlReserved", axl_reserved, 0x0, 0x20, true, 0xe52b8bd1fc22d847)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAXESLISTW.axlNumAxes", axl_num_axes, 0x20, 0x20, true, 0xa1d67a103aa7ff60)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::axisinfow_t, 16>), "tagAXESLISTW.axlAxisInfo", axl_axis_info, 0x40, 0x0, true, 0x6bdd7e5fc938d5d0)
#else
#define _m00
#define _m01
#define _m02
#endif