#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_CREATE_IO_SQ.PC", pc, 0x0, 0x0, false, 0x2d991c554609b308, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW11_CREATE_IO_SQ.QPRIO", qprio, 0x0, 0x0, false, 0xf136e36d37d09de0, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_CREATE_IO_SQ.CQID", cqid, 0x0, 0x0, false, 0xcc2c0c9cc8cecf3c, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_CREATE_IO_SQ.AsUlong", as_ulong, 0x0, 0x0, false, 0x7f3d5e0611a108e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif