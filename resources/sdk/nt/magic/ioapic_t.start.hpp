#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOAPIC.Type", type, 0x0, 0x8, true, 0xe4b3491c5b6b08d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOAPIC.Length", length, 0x8, 0x8, true, 0x7587c0ddf8a87924)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOAPIC.IOAPICID", ioapicid, 0x10, 0x8, true, 0x9294907bf8f04d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOAPIC.IOAPICAddress", ioapic_address, 0x20, 0x20, true, 0x73f19318873e2847)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOAPIC.SystemVectorBase", system_vector_base, 0x40, 0x20, true, 0x7b43dc9fbe535ce3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif