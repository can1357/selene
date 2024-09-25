#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_SANITIZE.OVRPAT", ovrpat, 0x0, 0x0, false, 0x681a2466f37b2365)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_SANITIZE.AsUlong", as_ulong, 0x0, 0x0, false, 0x21193690b57590c4)
#else
#define _m00
#define _m01
#endif