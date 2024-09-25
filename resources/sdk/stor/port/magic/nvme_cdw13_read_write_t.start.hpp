#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW13_READ_WRITE.DSM.AccessFrequency", access_frequency, 0x0, 0x0, false, 0xc94d5a430b1c0995, 4, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW13_READ_WRITE.DSM.AccessLatency", access_latency, 0x0, 0x0, false, 0x31556bc2480d2421, 2, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW13_READ_WRITE.DSM.SequentialRequest", sequential_request, 0x0, 0x0, false, 0x276678869df196a7, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW13_READ_WRITE.DSM.Incompressible", incompressible, 0x0, 0x0, false, 0x6e0d1abcaf213779, 1, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_dsm_t), "NVME_CDW13_READ_WRITE.DSM", dsm, 0x0, 0x0, false, 0x41fc3e218cc57f35)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_CDW13_READ_WRITE.DSPEC", dspec, 0x0, 0x0, false, 0xaf00c39ab69829a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW13_READ_WRITE.AsUlong", as_ulong, 0x0, 0x0, false, 0x7af850a3d4b7ac27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif