#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xd0d25fede2f6d2c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.MiniportAdapterContext", miniport_adapter_context, 0x40, 0x40, true, 0xfb82fa592ba9f265)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.AttributeFlags", attribute_flags, 0x80, 0x20, true, 0xaa580173a14ad150)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.CheckForHangTimeInSeconds", check_for_hang_time_in_seconds, 0xa0, 0x20, true, 0x2d54f205ee9ab9ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::interface_type_t), "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.InterfaceType", interface_type, 0xc0, 0x20, true, 0xb4c50d11131b9eef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif