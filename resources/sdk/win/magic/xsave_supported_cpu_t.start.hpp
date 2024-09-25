#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::xsave_cpu_info_t), "_XSAVE_SUPPORTED_CPU.CpuInfo", cpu_info, 0x0, 0x0, true, 0xdfb335de08c9695e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::xsave_cpu_errata_t*), "_XSAVE_SUPPORTED_CPU.CpuErrata", cpu_errata, 0x100, 0x40, true, 0x4bfe1c407106f879)
#else
#define _m00
#define _m01
#endif