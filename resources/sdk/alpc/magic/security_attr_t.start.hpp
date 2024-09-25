#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_SECURITY_ATTR.Flags", flags, 0x0, 0x20, true, 0x7e6fb8f5bbdd5d45)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t*), "_ALPC_SECURITY_ATTR.QoS", qo_s, 0x40, 0x40, true, 0x3a81edd2a166af20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_SECURITY_ATTR.ContextHandle", context_handle, 0x80, 0x40, true, 0xd084bde18fe87c25)
#else
#define _m00
#define _m01
#define _m02
#endif