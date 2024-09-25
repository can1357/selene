#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_QOS_PARAMS.Header", header, 0x0, 0x20, true, 0xc72c7b14578da4fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_QOS_PARAMS.ucEnabledQoSProtocolFlags", uc_enabled_qo_s_protocol_flags, 0x20, 0x8, true, 0x21dfe69f1c54fee8)
#else
#define _m00
#define _m01
#endif