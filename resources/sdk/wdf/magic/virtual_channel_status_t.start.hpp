#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_CHANNEL_STATUS.VCArbitrationTableStatus", vc_arbitration_table_status, 0x0, 0x1, true, 0xed5754382a749ba6, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_VIRTUAL_CHANNEL_STATUS.RsvdZ", rsvd_z, 0x1, 0xf, true, 0x440095c75066ab7, 15, uint16_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUAL_CHANNEL_STATUS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x50f3c0cf0bd918a6)
#else
#define _m00
#define _m01
#define _m02
#endif