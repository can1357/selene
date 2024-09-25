#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xd94e1d7bd0c1613a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA.dwSignerIndex", dw_signer_index, 0x20, 0x20, true, 0xbc6a55423f5400cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA.blob", blob, 0x40, 0x80, true, 0x71b34b85e5d8c82b)
#else
#define _m00
#define _m01
#define _m02
#endif