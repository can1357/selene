#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_ENVELOPED_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x649bfd63f4aef597)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_ENVELOPED_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x4b46ab4782920d23)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_ENVELOPED_ENCODE_INFO.ContentEncryptionAlgorithm", content_encryption_algorithm, 0x80, 0xc0, true, 0xfb4832c4e39e5bd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_ENVELOPED_ENCODE_INFO.pvEncryptionAuxInfo", pv_encryption_aux_info, 0x140, 0x40, true, 0x392579958beb1dee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_ENVELOPED_ENCODE_INFO.cRecipients", c_recipients, 0x180, 0x20, true, 0xdb86854c1f90bb77)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_info_t**), "_CMSG_ENVELOPED_ENCODE_INFO.rgpRecipients", rgp_recipients, 0x1c0, 0x40, true, 0x7425d65570efe5d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif