#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireBRECORD.fFlags", f_flags, 0x0, 0x20, true, 0xd68d23d32f4f4b2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireBRECORD.clSize", cl_size, 0x20, 0x20, true, 0xf996806ed617bcd4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_record_info_t*), "_wireBRECORD.pRecInfo", p_rec_info, 0x40, 0x40, true, 0xd96059f01d25dd25)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_wireBRECORD.pRecord", p_record, 0x80, 0x40, true, 0x95258a41f7f9a5d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif