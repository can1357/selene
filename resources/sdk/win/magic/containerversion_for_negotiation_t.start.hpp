#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERVERSION_FOR_NEGOTIATION.version", version, 0x0, 0x20, true, 0xc55e0709b08b41e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERVERSION_FOR_NEGOTIATION.capabilityFlags", capability_flags, 0x40, 0x40, true, 0x4f3439b88afa42a3)
#else
#define _m00
#define _m01
#endif