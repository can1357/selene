#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_RANGE_ERROR_INFO.Version", version, 0x0, 0x20, true, 0x63e2b7e9715581d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_RANGE_ERROR_INFO.Flags", flags, 0x20, 0x20, true, 0xd938d42463c541b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_RANGE_ERROR_INFO.TotalNumberOfRanges", total_number_of_ranges, 0x40, 0x20, true, 0x604e47591d40467c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_RANGE_ERROR_INFO.NumberOfRangesReturned", number_of_ranges_returned, 0x60, 0x20, true, 0xebb2ae2ead852f47)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_storage_range_attributes_t, 1>), "_DEVICE_DSM_RANGE_ERROR_INFO.Ranges", ranges, 0x80, 0x80, true, 0xb3c10320ed9e0dd6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif