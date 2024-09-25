#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::crt_locale_data_t*), "__crt_locale_pointers.locinfo", locinfo, 0x0, 0x40, true, 0xb9ddf71e16f15bb6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::crt_multibyte_data_t*), "__crt_locale_pointers.mbcinfo", mbcinfo, 0x40, 0x40, true, 0x75cdc6bf49586032)
#else
#define _m00
#define _m01
#endif