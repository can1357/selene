#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_RIGID_GEOMETRY_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x37bff760ac38bc43, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_RIGID_GEOMETRY_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0xfb71e957f307503b, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_RIGID_GEOMETRY_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x9027e05aad19f564)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_RIGID_GEOMETRY_PAGE.NumberOfCylinders", number_of_cylinders, 0x10, 0x18, true, 0x58ec8c83ef7eb2ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_RIGID_GEOMETRY_PAGE.NumberOfHeads", number_of_heads, 0x28, 0x8, true, 0xf6868167a831b779)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_RIGID_GEOMETRY_PAGE.StartWritePrecom", start_write_precom, 0x30, 0x18, true, 0x5079541cea87b330)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_RIGID_GEOMETRY_PAGE.StartReducedCurrent", start_reduced_current, 0x48, 0x18, true, 0x4e11c1a3bbdedec3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_RIGID_GEOMETRY_PAGE.DriveStepRate", drive_step_rate, 0x60, 0x10, true, 0x2343c246ee268ffa)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_RIGID_GEOMETRY_PAGE.LandZoneCyclinder", land_zone_cyclinder, 0x70, 0x18, true, 0xdad36856c463fef1)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_RIGID_GEOMETRY_PAGE.RotationalPositionLock", rotational_position_lock, 0x88, 0x2, true, 0x256270723767d059, 2, uint8_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_RIGID_GEOMETRY_PAGE.RotationOffset", rotation_offset, 0x90, 0x8, true, 0x9fda63a78fabecff)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_RIGID_GEOMETRY_PAGE.RoataionRate", roataion_rate, 0xa0, 0x10, true, 0x609d0a2411dc5d89)
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
#define _m10
#define _m11
#endif