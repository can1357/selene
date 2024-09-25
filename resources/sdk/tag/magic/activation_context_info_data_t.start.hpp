#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagActivationContextInfoData.clientOK", client_ok, 0x0, 0x20, true, 0x156dc204a11e79fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagActivationContextInfoData.bReserved1", b_reserved1, 0x20, 0x20, true, 0x5df921f0f0904f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagActivationContextInfoData.dwReserved1", dw_reserved1, 0x40, 0x20, true, 0x7f70de5c519d5768)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagActivationContextInfoData.dwReserved2", dw_reserved2, 0x60, 0x20, true, 0x9167930eafb8f0de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "tagActivationContextInfoData.pIFDClientCtx", p_ifd_client_ctx, 0x80, 0x40, true, 0x277ff81b55b50806)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "tagActivationContextInfoData.pIFDPrototypeCtx", p_ifd_prototype_ctx, 0xc0, 0x40, true, 0x15b0de8e7db407ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif