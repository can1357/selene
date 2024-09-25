#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_RESERVATION_RELEASE.RRELA", rrela, 0x0, 0x0, false, 0x45ead5dcb468e636, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_RESERVATION_RELEASE.IEKEY", iekey, 0x0, 0x0, false, 0xdfc7cb9ee8c29298, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_RESERVATION_RELEASE.RTYPE", rtype, 0x0, 0x0, false, 0xd057941c6b5c021e, 8, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_RESERVATION_RELEASE.AsUlong", as_ulong, 0x0, 0x0, false, 0xbee832e8fc81d4f8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif