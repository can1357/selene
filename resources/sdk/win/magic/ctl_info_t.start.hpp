#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xfd5f653e7d814882)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_usage_t), "_CTL_INFO.SubjectUsage", subject_usage, 0x40, 0x80, true, 0x54febdef490afb50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_INFO.ListIdentifier", list_identifier, 0xc0, 0x80, true, 0x6675466237c948ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_INFO.SequenceNumber", sequence_number, 0x140, 0x80, true, 0xb668cccccf690d09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CTL_INFO.ThisUpdate", this_update, 0x1c0, 0x40, true, 0x2048e828f658a59c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CTL_INFO.NextUpdate", next_update, 0x200, 0x40, true, 0xaf141d54847188f3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CTL_INFO.SubjectAlgorithm", subject_algorithm, 0x240, 0xc0, true, 0x6f065605be8982b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_INFO.cCTLEntry", c_ctl_entry, 0x300, 0x20, true, 0x14f2b92abb80ae2b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_entry_t*), "_CTL_INFO.rgCTLEntry", rg_ctl_entry, 0x340, 0x40, true, 0xd19d5a40fda35fc1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_INFO.cExtension", c_extension, 0x380, 0x20, true, 0xed6db05963f20a8e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CTL_INFO.rgExtension", rg_extension, 0x3c0, 0x40, true, 0xfc3788ce7fc798b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif