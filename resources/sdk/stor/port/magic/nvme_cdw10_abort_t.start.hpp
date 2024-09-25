#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_ABORT.SQID", sqid, 0x0, 0x0, false, 0xa1b5bb3320940c33, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_ABORT.CID", cid, 0x0, 0x0, false, 0x67af8c5c51f92261, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_ABORT.AsUlong", as_ulong, 0x0, 0x0, false, 0xa9a50c25ce0d9818)
#else
#define _m00
#define _m01
#define _m02
#endif