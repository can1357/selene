#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK.REGPRE", regpre, 0x0, 0x0, false, 0x7102b6f3b9798412, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK.RESREL", resrel, 0x0, 0x0, false, 0x49f9ba56dd3eaa35, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK.RESPRE", respre, 0x0, 0x0, false, 0x5eed65238c9389b6, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif