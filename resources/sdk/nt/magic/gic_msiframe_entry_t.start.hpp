#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_MSIFRAME_ENTRY.Type", type, 0x0, 0x0, false, 0x3b38885c4cd1f962)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_MSIFRAME_ENTRY.Length", length, 0x0, 0x0, false, 0x123f4bee698c57f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_MSIFRAME_ENTRY.Identifier", identifier, 0x0, 0x0, false, 0x9a3b5c80db39d8ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GIC_MSIFRAME_ENTRY.PhysicalAddress", physical_address, 0x0, 0x0, false, 0xde9ee64ae9542f50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_MSIFRAME_ENTRY.Flags", flags, 0x0, 0x0, false, 0x4e74143644449e4a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_GIC_MSIFRAME_ENTRY.SpiCount", spi_count, 0x0, 0x0, false, 0x3bc198835f781f8c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_GIC_MSIFRAME_ENTRY.SpiBase", spi_base, 0x0, 0x0, false, 0x8823d1373d5c84f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif