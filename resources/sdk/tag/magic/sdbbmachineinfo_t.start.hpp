#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sdbdeviceinfo_t*), "tagSDBBMACHINEINFO.AcpiInfo", acpi_info, 0x0, 0x40, true, 0x2ca104c7ec981b67)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sdbdeviceinfo_t*), "tagSDBBMACHINEINFO.OemInfo", oem_info, 0x40, 0x40, true, 0x96df809896c09a25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sdbdeviceinfo_t*), "tagSDBBMACHINEINFO.BiosInfo", bios_info, 0x80, 0x40, true, 0x861b2338a05e9bb8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sdbdeviceinfo_t*), "tagSDBBMACHINEINFO.CpuInfo", cpu_info, 0xc0, 0x40, true, 0x6c3ce374ccedcc41)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif