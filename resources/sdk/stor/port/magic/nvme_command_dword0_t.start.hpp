#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_COMMAND_DWORD0.OPC", opc, 0x0, 0x0, false, 0x745ca819653e9563, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_COMMAND_DWORD0.FUSE", fuse, 0x0, 0x0, false, 0xd18e75b5bbe22aeb, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMMAND_DWORD0.PSDT", psdt, 0x0, 0x0, false, 0x956a2d3f5dba68a9, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_COMMAND_DWORD0.CID", cid, 0x0, 0x0, false, 0x38c6ae41b9a4a421, 16, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND_DWORD0.AsUlong", as_ulong, 0x0, 0x0, false, 0x84d25ac35346c949)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif