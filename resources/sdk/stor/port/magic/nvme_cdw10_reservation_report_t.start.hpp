#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_RESERVATION_REPORT.NUMD", numd, 0x0, 0x0, false, 0xcb3be67e39e4fa2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_RESERVATION_REPORT.AsUlong", as_ulong, 0x0, 0x0, false, 0x662a550f1e93acf9)
#else
#define _m00
#define _m01
#endif