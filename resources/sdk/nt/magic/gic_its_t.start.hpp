#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_ITS.Type", type, 0x0, 0x0, false, 0x89b92fcc852dac04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_ITS.Length", length, 0x0, 0x0, false, 0x67e2687686ca0512)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_ITS.Identifier", identifier, 0x0, 0x0, false, 0xf3ca1ba81bcc2268)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GIC_ITS.PhysicalAddress", physical_address, 0x0, 0x0, false, 0x66823f3a4cd5df39)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif