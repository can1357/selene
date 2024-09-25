#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_IDENTIFY_MFND_CHILD_CONTROLLER.NUMD", numd, 0x0, 0x0, false, 0x4417002da32cca8c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_IDENTIFY_MFND_CHILD_CONTROLLER.AsUlong", as_ulong, 0x0, 0x0, false, 0x6b20504c143ef4fc)
#else
#define _m00
#define _m01
#endif