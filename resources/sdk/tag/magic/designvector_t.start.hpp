#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDESIGNVECTOR.dvReserved", dv_reserved, 0x0, 0x20, true, 0x3e929101f1d3cbac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDESIGNVECTOR.dvNumAxes", dv_num_axes, 0x20, 0x20, true, 0x2bf9b1de661916a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 16>), "tagDESIGNVECTOR.dvValues", dv_values, 0x40, 0x0, true, 0xb59d81f48c81b0e8)
#else
#define _m00
#define _m01
#define _m02
#endif