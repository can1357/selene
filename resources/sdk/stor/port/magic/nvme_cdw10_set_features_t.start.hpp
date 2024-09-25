#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_SET_FEATURES.FID", fid, 0x0, 0x0, false, 0x8a124821c69a57ba, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_SET_FEATURES.SV", sv, 0x0, 0x0, false, 0x1e8c865578223bcd, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_SET_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0x63e9ec30ac92f054)
#else
#define _m00
#define _m01
#define _m02
#endif