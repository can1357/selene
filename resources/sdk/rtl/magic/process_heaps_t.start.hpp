#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_HEAPS.NumberOfHeaps", number_of_heaps, 0x0, 0x20, true, 0xf413ad46bbf8d451)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::heap_information_t, 1>), "_RTL_PROCESS_HEAPS.Heaps", heaps, 0x40, 0xc0, true, 0x9c8f69d5071b81e0)
#else
#define _m00
#define _m01
#endif