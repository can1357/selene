#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_CONTEXT.dwMsgAndCertEncodingType", dw_msg_and_cert_encoding_type, 0x0, 0x20, true, 0x7b5309f9f43a0246)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CTL_CONTEXT.pbCtlEncoded", pb_ctl_encoded, 0x40, 0x40, true, 0x78154c68fe0d34ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_CONTEXT.cbCtlEncoded", cb_ctl_encoded, 0x80, 0x20, true, 0x8ee247c0ac07851d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_info_t*), "_CTL_CONTEXT.pCtlInfo", p_ctl_info, 0xc0, 0x40, true, 0xacaa2ce8c2f9db30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CTL_CONTEXT.hCertStore", h_cert_store, 0x100, 0x40, true, 0xc3dc3b2843d9b8a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CTL_CONTEXT.hCryptMsg", h_crypt_msg, 0x140, 0x40, true, 0xe84d94acca05f094)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CTL_CONTEXT.pbCtlContent", pb_ctl_content, 0x180, 0x40, true, 0xd99a5d71effd58af)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_CONTEXT.cbCtlContent", cb_ctl_content, 0x1c0, 0x20, true, 0x3135fb1ff0895536)
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