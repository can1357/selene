#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_CREATE_IO_QUEUE.QID", qid, 0x0, 0x0, false, 0xbec85625441b754b, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_CREATE_IO_QUEUE.QSIZE", qsize, 0x0, 0x0, false, 0x2c40b5b370cc92f1, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_CREATE_IO_QUEUE.AsUlong", as_ulong, 0x0, 0x0, false, 0xbcce2e3b9c2478ec)
#else
#define _m00
#define _m01
#define _m02
#endif