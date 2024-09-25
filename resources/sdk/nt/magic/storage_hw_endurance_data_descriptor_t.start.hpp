#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xac4f5ddcc91eeb16)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x8e2c4b4d3d47750b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_hw_endurance_info_t), "_STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR.EnduranceInfo", endurance_info, 0x40, 0x80, true, 0xba41da0b053dedd3)
#else
#define _m00
#define _m01
#define _m02
#endif