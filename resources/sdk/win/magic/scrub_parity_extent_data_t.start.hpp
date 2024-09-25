#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_PARITY_EXTENT_DATA.Size", size, 0x0, 0x10, true, 0xbc1fac200b2271c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_PARITY_EXTENT_DATA.Flags", flags, 0x10, 0x10, true, 0xfed3b362105294a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_PARITY_EXTENT_DATA.NumberOfParityExtents", number_of_parity_extents, 0x20, 0x10, true, 0xc66318d3d8406f70)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_PARITY_EXTENT_DATA.MaximumNumberOfParityExtents", maximum_number_of_parity_extents, 0x30, 0x10, true, 0x80cae4592e68e793)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::scrub_parity_extent_t, 1>), "_SCRUB_PARITY_EXTENT_DATA.ParityExtents", parity_extents, 0x40, 0x80, true, 0x39c5a5d380064cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif