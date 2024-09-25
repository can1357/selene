#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRL_ENTRY.SerialNumber", serial_number, 0x0, 0x80, true, 0xebbef78732277ea7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRL_ENTRY.RevocationDate", revocation_date, 0x80, 0x40, true, 0x9701388df19be63)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_ENTRY.cExtension", c_extension, 0xc0, 0x20, true, 0xa99d73d35513152a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CRL_ENTRY.rgExtension", rg_extension, 0x100, 0x40, true, 0xa37b02b8eb8e3c77)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif