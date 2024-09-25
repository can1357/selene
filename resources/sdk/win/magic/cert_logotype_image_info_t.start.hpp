#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwLogotypeImageInfoChoice", dw_logotype_image_info_choice, 0x0, 0x20, true, 0x859a65fdc3c8761c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwFileSize", dw_file_size, 0x20, 0x20, true, 0x81c8e98e1319e376)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwXSize", dw_x_size, 0x40, 0x20, true, 0xc7b34fe51423521)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwYSize", dw_y_size, 0x60, 0x20, true, 0x7840bed4dbc36451)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwLogotypeImageResolutionChoice", dw_logotype_image_resolution_choice, 0x80, 0x20, true, 0x6a4fee521898323b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwNumBits", dw_num_bits, 0xa0, 0x20, true, 0xa36769e61e5d424c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_IMAGE_INFO.dwTableSize", dw_table_size, 0xa0, 0x20, true, 0xfb4cc13361e73d9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_LOGOTYPE_IMAGE_INFO.pwszLanguage", pwsz_language, 0xc0, 0x40, true, 0xd8244a52af96b68c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif