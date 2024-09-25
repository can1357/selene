#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x75d8363da50044e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA.dwSignerIndex", dw_signer_index, 0x20, 0x20, true, 0x21c8cd242310fbb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA.dwUnauthAttrIndex", dw_unauth_attr_index, 0x40, 0x20, true, 0x3d01ec9b0e281984)
#else
#define _m00
#define _m01
#define _m02
#endif