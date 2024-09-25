#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_DATASET_MANAGEMENT.NR", nr, 0x0, 0x0, false, 0xa887b7ee57900824, 8, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_DATASET_MANAGEMENT.AsUlong", as_ulong, 0x0, 0x0, false, 0x3fb91d83437bd5e9)
#else
#define _m00
#define _m01
#endif