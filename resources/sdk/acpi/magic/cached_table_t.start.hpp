#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ACPI_CACHED_TABLE.Links", links, 0x0, 0x80, true, 0xf25a5bb827b0596)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ACPI_CACHED_TABLE.PhysicalAddress", physical_address, 0x80, 0x40, true, 0x9317c1ad25e493cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::description_header_t), "_ACPI_CACHED_TABLE.Header", header, 0xc0, 0x20, true, 0x8440a6c09ca95977)
#else
#define _m00
#define _m01
#define _m02
#endif