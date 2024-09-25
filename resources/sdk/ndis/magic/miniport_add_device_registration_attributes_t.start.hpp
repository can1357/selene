#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x82d87faa7888db2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES.MiniportAddDeviceContext", miniport_add_device_context, 0x40, 0x40, true, 0x461db968ce9bc9f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES.Flags", flags, 0x80, 0x20, true, 0x20b9696c307fc4be)
#else
#define _m00
#define _m01
#define _m02
#endif