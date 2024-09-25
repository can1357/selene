#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x2de391f6af58d935)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.dwFlags", dw_flags, 0x20, 0x20, true, 0x5fbfc478b90200a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.pcbUsedSize", pcb_used_size, 0x40, 0x40, true, 0xbdfe8e71e9836b24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.pwszOcspDirectory", pwsz_ocsp_directory, 0x80, 0x40, true, 0xa25d07618f1ab045)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_cert_server_ocsp_response_update_callback_t ), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.pfnUpdateCallback", pfn_update_callback, 0xc0, 0x40, true, 0x11bfad86bb015382)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.pvUpdateCallbackArg", pv_update_callback_arg, 0x100, 0x40, true, 0xcbd788f98c95ba9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif