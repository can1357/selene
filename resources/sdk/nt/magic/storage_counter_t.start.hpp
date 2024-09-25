#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_counter_type_t), "_STORAGE_COUNTER.Type", type, 0x0, 0x20, true, 0x717b5ad868a8fa7b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_COUNTER.Value.ManufactureDate.Week", week, 0x0, 0x20, true, 0xb11b12ca1700c2b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_COUNTER.Value.ManufactureDate.Year", year, 0x20, 0x20, true, 0x50733d15ea8d343b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_manufacture_date_t), "_STORAGE_COUNTER.Value.ManufactureDate", manufacture_date, 0x0, 0x40, true, 0xfbf87fb803625be7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_COUNTER.Value.AsUlonglong", as_ulonglong, 0x0, 0x40, true, 0x14115183ae6df438)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_value_t), "_STORAGE_COUNTER.Value", value, 0x40, 0x40, true, 0x25c430ec8ff7c5ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif