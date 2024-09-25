#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT.Version", version, 0x0, 0x20, true, 0xc24d310f4b73a15f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT.Flags", flags, 0x20, 0x20, true, 0x888b496af0c69771)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT.TotalNumberOfRanges", total_number_of_ranges, 0x40, 0x20, true, 0xf04b702ced79abea)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT.NumberOfRangesReturned", number_of_ranges_returned, 0x60, 0x20, true, 0x9be73c3e1c121deb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_storage_address_range_t, 1>), "_DEVICE_DSM_PHYSICAL_ADDRESSES_OUTPUT.Ranges", ranges, 0x80, 0x80, true, 0x944df8ced16fa13a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif