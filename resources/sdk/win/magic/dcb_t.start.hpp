#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DCB.DCBlength", dc_blength, 0x0, 0x20, true, 0xd1707f5311bfa03b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DCB.BaudRate", baud_rate, 0x20, 0x20, true, 0xd070e1331ae03cd0)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fBinary", f_binary, 0x40, 0x1, true, 0xf518b6334be6f16f, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fParity", f_parity, 0x41, 0x1, true, 0x366d50006af3dcb2, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fOutxCtsFlow", f_outx_cts_flow, 0x42, 0x1, true, 0x192ed47859829580, 1, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fOutxDsrFlow", f_outx_dsr_flow, 0x43, 0x1, true, 0x362f1925e98654c5, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DCB.fDtrControl", f_dtr_control, 0x44, 0x2, true, 0x7d61a57a28b103d6, 2, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fDsrSensitivity", f_dsr_sensitivity, 0x46, 0x1, true, 0x5be8cb893f0029dd, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fTXContinueOnXoff", f_tx_continue_on_xoff, 0x47, 0x1, true, 0x39af87dd4d37e45e, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fOutX", f_out_x, 0x48, 0x1, true, 0x144b9f9f6e0e9bbb, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fInX", f_in_x, 0x49, 0x1, true, 0x15e8dc0183cd9a76, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fErrorChar", f_error_char, 0x4a, 0x1, true, 0x1d47d0a319159a91, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fNull", f_null, 0x4b, 0x1, true, 0x7c7eb6a318ce058, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DCB.fRtsControl", f_rts_control, 0x4c, 0x2, true, 0xba15f0b2bb1d6a9e, 2, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DCB.fAbortOnError", f_abort_on_error, 0x4e, 0x1, true, 0xd195f46f94e35637, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint17_t), "_DCB.fDummy2", f_dummy2, 0x4f, 0x11, true, 0x7c4e6e907e14a205, 17, uint32_t)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DCB.wReserved", w_reserved, 0x60, 0x10, true, 0xaec763b6142afc5f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DCB.XonLim", xon_lim, 0x70, 0x10, true, 0x748237ef15e073f9)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DCB.XoffLim", xoff_lim, 0x80, 0x10, true, 0x80608109a4f225f)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DCB.ByteSize", byte_size, 0x90, 0x8, true, 0xc4c2bd1d1ef97e4d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DCB.Parity", parity, 0x98, 0x8, true, 0xefcf27b4ee32e64)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DCB.StopBits", stop_bits, 0xa0, 0x8, true, 0x1168fa3dba6184a8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_DCB.XonChar", xon_char, 0xa8, 0x8, true, 0xb27dfbb778f2244a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_DCB.XoffChar", xoff_char, 0xb0, 0x8, true, 0x2ab871a9a8b3246f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_DCB.ErrorChar", error_char, 0xb8, 0x8, true, 0x626ab42a5285ce02)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_DCB.EofChar", eof_char, 0xc0, 0x8, true, 0x7d40347951939743)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_DCB.EvtChar", evt_char, 0xc8, 0x8, true, 0xcab42ec481d962f5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DCB.wReserved1", w_reserved1, 0xd0, 0x10, true, 0x89794a1610725cfc)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif