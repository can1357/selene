#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.dwInitiatorAddrType", dw_initiator_addr_type, 0x0, 0x20, true, 0x787b2ca18ea25930)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.cbInitiatorLength", cb_initiator_length, 0x20, 0x20, true, 0xb46f19145859848c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.dwInitiatorOffset", dw_initiator_offset, 0x40, 0x20, true, 0x601dc4dc860aba08)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.dwAcceptorAddrType", dw_acceptor_addr_type, 0x60, 0x20, true, 0xaa9b30db5a147507)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.cbAcceptorLength", cb_acceptor_length, 0x80, 0x20, true, 0x2542c12b8d5e3cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.dwAcceptorOffset", dw_acceptor_offset, 0xa0, 0x20, true, 0xbdaec5d58785cfe2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.cbApplicationDataLength", cb_application_data_length, 0xc0, 0x20, true, 0x800dfab3890298f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_CHANNEL_BINDINGS.dwApplicationDataOffset", dw_application_data_offset, 0xe0, 0x20, true, 0x2dbfe0a0684479a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif