#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.StartAddressOfRawData", start_address_of_raw_data, 0x0, 0x20, true, 0xe9872d233cacb9c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.EndAddressOfRawData", end_address_of_raw_data, 0x20, 0x20, true, 0xa8fb66839e3dddd0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.AddressOfIndex", address_of_index, 0x40, 0x20, true, 0x1d66314e726a8a6d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.AddressOfCallBacks", address_of_call_backs, 0x60, 0x20, true, 0xa133861eba5a2c58)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.SizeOfZeroFill", size_of_zero_fill, 0x80, 0x20, true, 0xc647175147379240)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY32.Characteristics", characteristics, 0xa0, 0x20, true, 0x22ee389b0d691d4f)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IMAGE_TLS_DIRECTORY32.Alignment", alignment, 0xb4, 0x4, true, 0x44312e9e13a58bb1, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif