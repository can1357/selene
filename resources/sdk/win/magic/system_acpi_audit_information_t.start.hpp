#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ACPI_AUDIT_INFORMATION.RsdpCount", rsdp_count, 0x0, 0x20, true, 0xa7c4397245c3cd09)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ACPI_AUDIT_INFORMATION.SameRsdt", same_rsdt, 0x20, 0x1, true, 0xc435580a5c2cb801, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ACPI_AUDIT_INFORMATION.SlicPresent", slic_present, 0x21, 0x1, true, 0x7a07db14ab4d8d7, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ACPI_AUDIT_INFORMATION.SlicDifferent", slic_different, 0x22, 0x1, true, 0xa7b12ac899010db2, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif