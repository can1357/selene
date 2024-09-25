#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_SECURITY_SEND_RECEIVE.SPSP", spsp, 0x0, 0x0, false, 0x8eb7bec7e2d5fd91, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_SECURITY_SEND_RECEIVE.SECP", secp, 0x0, 0x0, false, 0x8f5456779faf7002, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_SECURITY_SEND_RECEIVE.AsUlong", as_ulong, 0x0, 0x0, false, 0xbd797f79bdfec23f)
#else
#define _m00
#define _m01
#define _m02
#endif