#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_CREATE_IO_CQ.PC", pc, 0x0, 0x0, false, 0x6b46c5a12ded3c4a, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_CREATE_IO_CQ.IEN", ien, 0x0, 0x0, false, 0x9c3e65799ef27f0f, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_CREATE_IO_CQ.IV", iv, 0x0, 0x0, false, 0xe86baf90fb2a4879, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_CREATE_IO_CQ.AsUlong", as_ulong, 0x0, 0x0, false, 0xd3f1821bee26b370)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif