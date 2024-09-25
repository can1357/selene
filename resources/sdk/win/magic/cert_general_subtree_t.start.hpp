#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_entry_t), "_CERT_GENERAL_SUBTREE.Base", base, 0x0, 0xc0, true, 0xffd8d521ee34d393)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_GENERAL_SUBTREE.dwMinimum", dw_minimum, 0xc0, 0x20, true, 0xdb76f482546ea358)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_GENERAL_SUBTREE.fMaximum", f_maximum, 0xe0, 0x20, true, 0xfa3d537cea7f2739)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_GENERAL_SUBTREE.dwMaximum", dw_maximum, 0x100, 0x20, true, 0xda4eddc4664c96a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif