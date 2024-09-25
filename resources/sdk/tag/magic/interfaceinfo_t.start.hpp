#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagINTERFACEINFO.pUnk", p_unk, 0x0, 0x40, true, 0xe9bb5c112f4305f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagINTERFACEINFO.iid", iid, 0x40, 0x80, true, 0x71286fc2c13bc342)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagINTERFACEINFO.wMethod", w_method, 0xc0, 0x10, true, 0x9573c20cf99fd233)
#else
#define _m00
#define _m01
#define _m02
#endif