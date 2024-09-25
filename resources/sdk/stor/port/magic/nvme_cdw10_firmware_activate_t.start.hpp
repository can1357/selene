#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_FIRMWARE_ACTIVATE.FS", fs, 0x0, 0x0, false, 0x23125b59392f01f2, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW10_FIRMWARE_ACTIVATE.AA", aa, 0x0, 0x0, false, 0x4d5c7a409133eb09, 2, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_FIRMWARE_ACTIVATE.AsUlong", as_ulong, 0x0, 0x0, false, 0xc40cea871f551241)
#else
#define _m00
#define _m01
#define _m02
#endif