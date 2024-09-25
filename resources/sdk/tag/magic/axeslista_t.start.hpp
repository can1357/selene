#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAXESLISTA.axlReserved", axl_reserved, 0x0, 0x20, true, 0xf13c52f6c2a863ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAXESLISTA.axlNumAxes", axl_num_axes, 0x20, 0x20, true, 0x640d909c316a85ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::axisinfoa_t, 16>), "tagAXESLISTA.axlAxisInfo", axl_axis_info, 0x40, 0x0, true, 0x2bb20b78c14f5267)
#else
#define _m00
#define _m01
#define _m02
#endif