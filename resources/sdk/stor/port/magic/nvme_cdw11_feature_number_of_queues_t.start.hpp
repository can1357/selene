#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_FEATURE_NUMBER_OF_QUEUES.NSQ", nsq, 0x0, 0x0, false, 0x18a09f251718a24f, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_FEATURE_NUMBER_OF_QUEUES.NCQ", ncq, 0x0, 0x0, false, 0x77869c9b6369a0c3, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_NUMBER_OF_QUEUES.AsUlong", as_ulong, 0x0, 0x0, false, 0x535a72a293e085ea)
#else
#define _m00
#define _m01
#define _m02
#endif