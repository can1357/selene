#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_RESOURCE_FLAGS.AsULong", as_u_long, 0x0, 0x20, true, 0x1e6a280c1f653494)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.Shared", shared, 0x0, 0x1, true, 0xdeba39ebcf74457f, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.Wake", wake, 0x1, 0x1, true, 0xc4aa28ee80f705dd, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.ResourceUsage", resource_usage, 0x2, 0x1, true, 0x7df92556d8d6aeb, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.SlaveMode", slave_mode, 0x3, 0x1, true, 0xd066af5e0f7dec05, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.AddressingMode", addressing_mode, 0x4, 0x1, true, 0xb8b9c57cdaf1d6cb, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEP_ACPI_RESOURCE_FLAGS.SharedMode", shared_mode, 0x5, 0x1, true, 0xb335d4b66f931164, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif