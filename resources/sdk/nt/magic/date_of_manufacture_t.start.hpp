#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DATE_OF_MANUFACTURE.Year", year, 0x0, 0x20, true, 0x9b00ab5cb64e41f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_DATE_OF_MANUFACTURE.Week", week, 0x20, 0x10, true, 0x3c23626e9fef7a1b)
#else
#define _m00
#define _m01
#endif