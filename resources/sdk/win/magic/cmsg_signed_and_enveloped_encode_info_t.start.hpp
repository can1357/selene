#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x157c6386840a0f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_signed_encode_info_t), "_CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO.SignedInfo", signed_info, 0x40, 0x80, true, 0x22572d8c4cb6d2cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_enveloped_encode_info_t), "_CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO.EnvelopedInfo", enveloped_info, 0x1c0, 0x0, true, 0x5954da5efc3e836c)
#else
#define _m00
#define _m01
#define _m02
#endif