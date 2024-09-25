#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fCtsHold", f_cts_hold, 0x0, 0x1, true, 0x470d068a60396089, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fDsrHold", f_dsr_hold, 0x1, 0x1, true, 0x909315171615401d, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fRlsdHold", f_rlsd_hold, 0x2, 0x1, true, 0x7829d94b5de97820, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fXoffHold", f_xoff_hold, 0x3, 0x1, true, 0x55cd3f4db7769687, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fXoffSent", f_xoff_sent, 0x4, 0x1, true, 0xc3ca4580b5f930ce, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fEof", f_eof, 0x5, 0x1, true, 0x55548104aaa07722, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMSTAT.fTxim", f_txim, 0x6, 0x1, true, 0x360a3713854035b7, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint25_t), "_COMSTAT.fReserved", f_reserved, 0x7, 0x19, true, 0x2dadf2cb9b75b65e, 25, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMSTAT.cbInQue", cb_in_que, 0x20, 0x20, true, 0xf867cc81923d027a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMSTAT.cbOutQue", cb_out_que, 0x40, 0x20, true, 0x944362e10b60cc71)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif