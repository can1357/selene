#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_handle_t), "_NDIS_OFFLOAD_HANDLE_PRIVATE.Handle", handle, 0x0, 0x80, true, 0xd5ab5d45048a79bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OFFLOAD_HANDLE_PRIVATE.ProtocolBindingContext", protocol_binding_context, 0x80, 0x40, true, 0xe06b1e23dff2e902)
#else
#define _m00
#define _m01
#endif