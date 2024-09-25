#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_AUTHORITY_INFO_ACCESS.cAccDescr", c_acc_descr, 0x0, 0x20, true, 0x19cf160bba2251ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_access_description_t*), "_CERT_AUTHORITY_INFO_ACCESS.rgAccDescr", rg_acc_descr, 0x40, 0x40, true, 0x9153888ed5f4d2d5)
#else
#define _m00
#define _m01
#endif