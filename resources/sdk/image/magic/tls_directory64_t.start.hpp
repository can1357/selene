#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_TLS_DIRECTORY64.StartAddressOfRawData", start_address_of_raw_data, 0x0, 0x40, true, 0x8869d23b1ee9d0dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_TLS_DIRECTORY64.EndAddressOfRawData", end_address_of_raw_data, 0x40, 0x40, true, 0xb1328f5a1c6508f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_TLS_DIRECTORY64.AddressOfIndex", address_of_index, 0x80, 0x40, true, 0x29da192f5e36aa74)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_TLS_DIRECTORY64.AddressOfCallBacks", address_of_call_backs, 0xc0, 0x40, true, 0x248a1e9b3673b450)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY64.SizeOfZeroFill", size_of_zero_fill, 0x100, 0x20, true, 0x5a810dc2a7ba2891)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_TLS_DIRECTORY64.Characteristics", characteristics, 0x120, 0x20, true, 0x75fa00071e9b091e)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IMAGE_TLS_DIRECTORY64.Alignment", alignment, 0x134, 0x4, true, 0x5145164a495aeb7d, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif