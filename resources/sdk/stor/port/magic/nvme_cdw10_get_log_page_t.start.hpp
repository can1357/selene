#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_GET_LOG_PAGE.LID", lid, 0x0, 0x0, false, 0x3111c00bc3e624d8, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "NVME_CDW10_GET_LOG_PAGE.NUMD", numd, 0x0, 0x0, false, 0x9d476c1047ef4d10, 12, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_GET_LOG_PAGE.AsUlong", as_ulong, 0x0, 0x0, false, 0x4a5bebe261e2d9b)
#else
#define _m00
#define _m01
#define _m02
#endif