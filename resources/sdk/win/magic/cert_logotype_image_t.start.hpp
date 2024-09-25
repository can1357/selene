#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_details_t), "_CERT_LOGOTYPE_IMAGE.LogotypeDetails", logotype_details, 0x0, 0xc0, true, 0xcc0a4cfcb95aa2a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_image_info_t*), "_CERT_LOGOTYPE_IMAGE.pLogotypeImageInfo", p_logotype_image_info, 0xc0, 0x40, true, 0xe9affe7f43bcc4f0)
#else
#define _m00
#define _m01
#endif