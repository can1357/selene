#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_X2APIC_NMISOURCE.Type", type, 0x0, 0x0, false, 0x16ac1a35c03a55bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_X2APIC_NMISOURCE.Length", length, 0x0, 0x0, false, 0x360dc41f535b850f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LOCAL_X2APIC_NMISOURCE.Flags", flags, 0x0, 0x0, false, 0x375a4e0371c16784)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCAL_X2APIC_NMISOURCE.ProcessorID", processor_id, 0x0, 0x0, false, 0xa2194ef5c0cb73b5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCAL_X2APIC_NMISOURCE.LINTIN", lintin, 0x0, 0x0, false, 0x26bdf162ab8d4bfc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif