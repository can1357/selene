#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NUMPARSE.cDig", c_dig, 0x0, 0x20, true, 0x720230aad8f138bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NUMPARSE.dwInFlags", dw_in_flags, 0x20, 0x20, true, 0xbcbf622c456da2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NUMPARSE.dwOutFlags", dw_out_flags, 0x40, 0x20, true, 0xa806da137ea23ec6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NUMPARSE.cchUsed", cch_used, 0x60, 0x20, true, 0x1af84ff72cb105be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NUMPARSE.nBaseShift", n_base_shift, 0x80, 0x20, true, 0x11010284d75b1b33)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NUMPARSE.nPwr10", n_pwr10, 0xa0, 0x20, true, 0x8ff2805d78178f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif