#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_ACCESS_DESCRIPTION.pszAccessMethod", psz_access_method, 0x0, 0x40, true, 0xf342bd4b30fea0b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_entry_t), "_CERT_ACCESS_DESCRIPTION.AccessLocation", access_location, 0x40, 0xc0, true, 0x22927989dd20b402)
#else
#define _m00
#define _m01
#endif