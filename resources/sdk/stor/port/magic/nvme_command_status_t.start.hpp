#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMMAND_STATUS.P", p, 0x0, 0x0, false, 0x4e3d3faee31da3d7, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_COMMAND_STATUS.SC", sc, 0x0, 0x0, false, 0x147bd1913bee79d9, 8, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_COMMAND_STATUS.SCT", sct, 0x0, 0x0, false, 0x6052f6e8f3a46c3b, 3, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMMAND_STATUS.M", m, 0x0, 0x0, false, 0xcfe8442e41806d88, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMMAND_STATUS.DNR", dnr, 0x0, 0x0, false, 0x610d728c50fb2285, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_COMMAND_STATUS.AsUshort", as_ushort, 0x0, 0x0, false, 0x6920620d4a3ba97c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif