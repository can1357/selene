#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_STATUS.PortArbitrationTableStatus", port_arbitration_table_status, 0x0, 0x1, true, 0x647160e193371dc7, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_STATUS.VcNegotiationPending", vc_negotiation_pending, 0x1, 0x1, true, 0xdb05e7eb41a09a48, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_VIRTUAL_RESOURCE_STATUS.RsvdZ", rsvd_z, 0x2, 0xe, true, 0x4f2c5248d20ced76, 14, uint16_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUAL_RESOURCE_STATUS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xbf578273c0dec507)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif