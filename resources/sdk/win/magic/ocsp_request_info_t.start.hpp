#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_REQUEST_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xc5bc8a380faff630)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_entry_t*), "_OCSP_REQUEST_INFO.pRequestorName", p_requestor_name, 0x40, 0x40, true, 0x9b87ae315e7f1a1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_REQUEST_INFO.cRequestEntry", c_request_entry, 0x80, 0x20, true, 0x6bd6f50d83b552d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_request_entry_t*), "_OCSP_REQUEST_INFO.rgRequestEntry", rg_request_entry, 0xc0, 0x40, true, 0xa09b89b7060403f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_REQUEST_INFO.cExtension", c_extension, 0x100, 0x20, true, 0x920eecf6c912695b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_OCSP_REQUEST_INFO.rgExtension", rg_extension, 0x140, 0x40, true, 0x3710b6cf32006ae6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif