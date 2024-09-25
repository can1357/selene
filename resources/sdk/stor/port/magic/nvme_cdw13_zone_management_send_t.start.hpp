#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW13_ZONE_MANAGEMENT_SEND.ZSA", zsa, 0x0, 0x0, false, 0x6de70b1f8e0e0f82, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW13_ZONE_MANAGEMENT_SEND.SelectAll", select_all, 0x0, 0x0, false, 0xb21204ce53c3e588, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW13_ZONE_MANAGEMENT_SEND.AsUlong", as_ulong, 0x0, 0x0, false, 0x60f13095d5b5e067)
#else
#define _m00
#define _m01
#define _m02
#endif