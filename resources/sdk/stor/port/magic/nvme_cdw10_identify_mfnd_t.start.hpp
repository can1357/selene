#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_IDENTIFY_MFND.NUMD", numd, 0x0, 0x0, false, 0x84b6c71c7fe2b392)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_IDENTIFY_MFND.AsUlong", as_ulong, 0x0, 0x0, false, 0x6b5a183c8f354ac8)
#else
#define _m00
#define _m01
#endif