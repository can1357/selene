#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG.IV", iv, 0x0, 0x0, false, 0xd17e2e4f50065241, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG.CD", cd, 0x0, 0x0, false, 0x666298fc6874c439, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG.AsUlong", as_ulong, 0x0, 0x0, false, 0xc0e14b8b17235a0d)
#else
#define _m00
#define _m01
#define _m02
#endif