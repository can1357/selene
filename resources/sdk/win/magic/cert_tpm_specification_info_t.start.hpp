#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_TPM_SPECIFICATION_INFO.pwszFamily", pwsz_family, 0x0, 0x40, true, 0x8463eb6566b14465)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TPM_SPECIFICATION_INFO.dwLevel", dw_level, 0x40, 0x20, true, 0x73ffca43b24e5fde)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TPM_SPECIFICATION_INFO.dwRevision", dw_revision, 0x60, 0x20, true, 0x6089537848cde053)
#else
#define _m00
#define _m01
#define _m02
#endif