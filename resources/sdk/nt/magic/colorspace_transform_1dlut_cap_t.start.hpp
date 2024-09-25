#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COLORSPACE_TRANSFORM_1DLUT_CAP.NumberOfLUTEntries", number_of_lut_entries, 0x0, 0x20, true, 0x8379f35a0cf2ce98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_data_cap_t), "_COLORSPACE_TRANSFORM_1DLUT_CAP.DataCap", data_cap, 0x20, 0x80, true, 0x5aec96adfa599628)
#else
#define _m00
#define _m01
#endif