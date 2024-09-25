#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW11_FEATURE_ARBITRATION.AB", ab, 0x0, 0x0, false, 0x37583ca71b430b7d, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_ARBITRATION.LPW", lpw, 0x0, 0x0, false, 0x39e127188054f846, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_ARBITRATION.MPW", mpw, 0x0, 0x0, false, 0x212ec720e64eb368, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_ARBITRATION.HPW", hpw, 0x0, 0x0, false, 0xa5c9766c2013270d, 8, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_ARBITRATION.AsUlong", as_ulong, 0x0, 0x0, false, 0x348da588f58eab5b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif