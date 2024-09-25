#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD.TMPTH", tmpth, 0x0, 0x0, false, 0x6e795910dbbb76d8, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD.TMPSEL", tmpsel, 0x0, 0x0, false, 0x96a13b41de302eea, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD.THSEL", thsel, 0x0, 0x0, false, 0x76b0fc553346b417, 2, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD.AsUlong", as_ulong, 0x0, 0x0, false, 0x163c3678fe292ec5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif