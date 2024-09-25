#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_ALT_NAME_INFO.cAltEntry", c_alt_entry, 0x0, 0x20, true, 0xaf79d509f9c4114b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_entry_t*), "_CERT_ALT_NAME_INFO.rgAltEntry", rg_alt_entry, 0x40, 0x40, true, 0x55289cc2832f0403)
#else
#define _m00
#define _m01
#endif