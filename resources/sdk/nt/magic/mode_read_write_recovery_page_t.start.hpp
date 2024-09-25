#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_READ_WRITE_RECOVERY_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x1995008991ccb4b7, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x4a84f45a6c829997, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_READ_WRITE_RECOVERY_PAGE.PageLength", page_length, 0x8, 0x8, true, 0xdfa6263e455df424)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.DCRBit", dcr_bit, 0x10, 0x1, true, 0xca8720e58b47ba21, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.DTEBit", dte_bit, 0x11, 0x1, true, 0xe4112afaaf57edbe, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.PERBit", per_bit, 0x12, 0x1, true, 0x2bb1c2f02fcf0592, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.EERBit", eer_bit, 0x13, 0x1, true, 0xc914b003b90e557d, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.RCBit", rc_bit, 0x14, 0x1, true, 0x7df0285bc4d45e75, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.TBBit", tb_bit, 0x15, 0x1, true, 0x688cae60f84718ff, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.ARRE", arre, 0x16, 0x1, true, 0xd6f5b843cc3e34e3, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_WRITE_RECOVERY_PAGE.AWRE", awre, 0x17, 0x1, true, 0xb946bd3ec31e8619, 1, uint8_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_READ_WRITE_RECOVERY_PAGE.ReadRetryCount", read_retry_count, 0x18, 0x8, true, 0xd2e2a79db8a661c2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_READ_WRITE_RECOVERY_PAGE.WriteRetryCount", write_retry_count, 0x40, 0x8, true, 0xaa983f0ce2498b49)
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
#define _m10
#define _m11
#define _m12
#endif