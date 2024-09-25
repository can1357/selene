#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtlp::hp_address_space_type_t), "_HEAP_VAMGR_VASPACE.AddressSpaceType", address_space_type, 0x0, 0x20, true, 0x548512500d495c4a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VAMGR_VASPACE.BaseAddress", base_address, 0x40, 0x40, true, 0x66d9b1798c50f468)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::sparse_array_t), "_HEAP_VAMGR_VASPACE.VaRangeArray", va_range_array, 0x80, 0x80, true, 0x73925eaca187231c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2128>), "_HEAP_VAMGR_VASPACE.VaRangeArrayBuffer", va_range_array_buffer, 0x80, 0x80, true, 0x2031ba28c45d5ddb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif