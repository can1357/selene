#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct wdf::kaddress_range_t*), "_KADDRESS_RANGE_DESCRIPTOR.AddressRanges", address_ranges, 0x0, 0x40, true, 0xae8fb0d2e9e0ae5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KADDRESS_RANGE_DESCRIPTOR.AddressRangeCount", address_range_count, 0x40, 0x40, true, 0xa583fd70a92808be)
#else
#define _m00
#define _m01
#endif