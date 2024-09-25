#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VA_LIST_INFORMATION.VirtualSize", virtual_size, 0x0, 0x40, true, 0x208956f2a6e6c2d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VA_LIST_INFORMATION.VirtualPeak", virtual_peak, 0x40, 0x40, true, 0x8f4acddea8856d9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VA_LIST_INFORMATION.VirtualLimit", virtual_limit, 0x80, 0x40, true, 0x38d1439684f1af5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VA_LIST_INFORMATION.AllocationFailures", allocation_failures, 0xc0, 0x40, true, 0xda3c401aa880dac5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif