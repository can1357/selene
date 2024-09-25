#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xf802356401bd41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CTL_VERIFY_USAGE_PARA.ListIdentifier", list_identifier, 0x40, 0x80, true, 0x2164bb53f6dda8be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_PARA.cCtlStore", c_ctl_store, 0xc0, 0x20, true, 0x827b0f94ab88c1ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CTL_VERIFY_USAGE_PARA.rghCtlStore", rgh_ctl_store, 0x100, 0x40, true, 0x5eb2f62dec23422d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_VERIFY_USAGE_PARA.cSignerStore", c_signer_store, 0x140, 0x20, true, 0x66dafa74d75d322e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CTL_VERIFY_USAGE_PARA.rghSignerStore", rgh_signer_store, 0x180, 0x40, true, 0x4098658366856220)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif