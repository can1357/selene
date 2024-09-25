#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_PHYSICAL_ADDRESS_UNIT.PhysicalAddress", physical_address, 0x0, 0x40, true, 0xcd3f498adfbef970)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PHYSICAL_ADDRESS_UNIT.Length", length, 0x40, 0x20, true, 0x3d00045b00982504)
#else
#define _m00
#define _m01
#endif