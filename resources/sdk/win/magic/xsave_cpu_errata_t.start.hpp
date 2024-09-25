#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "XSAVE_CPU_ERRATA.NumberOfErrata", number_of_errata, 0x0, 0x20, true, 0xfb39385f57f9cbb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::xsave_cpu_info_t, 1>), "XSAVE_CPU_ERRATA.Errata", errata, 0x40, 0x0, true, 0x416b8bc185d1d785)
#else
#define _m00
#define _m01
#endif