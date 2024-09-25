#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x9910e6424f3b6023)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_add_device_registration_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.AddDeviceRegistrationAttributes", add_device_registration_attributes, 0x0, 0xc0, true, 0xb3451c922d0bc73e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_registration_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.RegistrationAttributes", registration_attributes, 0x0, 0x0, true, 0x3a1911526d943c33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_general_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.GeneralAttributes", general_attributes, 0x0, 0x0, true, 0xe4f502fb9ba9d91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_offload_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.OffloadAttributes", offload_attributes, 0x0, 0x40, true, 0xf8e3bcede2639bfd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_native_802_11_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.Native_802_11_Attributes", native_802_11_attributes, 0x0, 0x0, true, 0x9781fce1f131fb5b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_hardware_assist_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.HardwareAssistAttributes", hardware_assist_attributes, 0x0, 0x0, true, 0xe8ecf0816f293fb2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_ndk_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.NDKAttributes", ndk_attributes, 0x0, 0x80, true, 0x1f9ff4ccf74cd736)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_packet_direct_attributes_t), "_NDIS_MINIPORT_ADAPTER_ATTRIBUTES.PacketDirectAttributes", packet_direct_attributes, 0x0, 0x60, true, 0xe6c29cd40ec99981)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif