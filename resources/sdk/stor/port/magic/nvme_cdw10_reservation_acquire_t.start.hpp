#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_RESERVATION_ACQUIRE.RACQA", racqa, 0x0, 0x0, false, 0x8b99667b907745d5, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_RESERVATION_ACQUIRE.IEKEY", iekey, 0x0, 0x0, false, 0xaeac754b18296c23, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_RESERVATION_ACQUIRE.RTYPE", rtype, 0x0, 0x0, false, 0x6e47c739a36970bc, 8, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_RESERVATION_ACQUIRE.AsUlong", as_ulong, 0x0, 0x0, false, 0x32210333058039a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif