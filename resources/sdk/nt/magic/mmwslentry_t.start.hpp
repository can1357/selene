#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMWSLENTRY.Valid", valid, 0x0, 0x0, false, 0xcbdeb15a934f39eb, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMWSLENTRY.Hashed", hashed, 0x0, 0x0, false, 0x7e904d9b3df36a01, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMWSLENTRY.Direct", direct, 0x0, 0x0, false, 0xc7dbbc08f19baab4, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMWSLENTRY.Protection", protection, 0x0, 0x0, false, 0x64b06f809bedad65, 5, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMWSLENTRY.Age", age, 0x0, 0x0, false, 0x7e0ae98a1b872d95, 3, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint36_t), "_MMWSLENTRY.VirtualPageNumber", virtual_page_number, 0x0, 0x0, false, 0x858496644dd12c30, 36, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMWSLENTRY.HighActiveFlink", high_active_flink, 0x0, 0x0, false, 0x338defce2f2182b6, 4, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMWSLENTRY.HighActiveBlink", high_active_blink, 0x0, 0x0, false, 0x178966edf326ecfd, 4, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif