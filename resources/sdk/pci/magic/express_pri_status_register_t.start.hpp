#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.ResponseFailure", response_failure, 0x0, 0x1, true, 0x7d13b350112f275, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.UnexpectedPageRequestGroupIndex", unexpected_page_request_group_index, 0x1, 0x1, true, 0xa2d25ab115e2746, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.Rsvd", rsvd, 0x2, 0x6, true, 0x4d68e52e783f2ad2, 6, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.Stopped", stopped, 0x8, 0x1, true, 0x41073244c6a60804, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.Rsvd2", rsvd2, 0x9, 0x6, true, 0x5de921c3e8642f18, 6, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.PrgResponsePasidRequired", prg_response_pasid_required, 0xf, 0x1, true, 0x175d80cb81b41276, 1, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PRI_STATUS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x594c89df950e8e91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif