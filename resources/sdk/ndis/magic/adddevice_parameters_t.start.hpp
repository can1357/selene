#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "NDIS_ADDDEVICE_PARAMETERS.InterfaceGuid", interface_guid, 0x0, 0x0, false, 0xef1f4ab4988d3aed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "NDIS_ADDDEVICE_PARAMETERS.NetLuid", net_luid, 0x0, 0x0, false, 0x92f5169202009626)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_ADDDEVICE_PARAMETERS.IsPhysicalMediumAvailable", is_physical_medium_available, 0x0, 0x0, false, 0xf96c77a3170f8eb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "NDIS_ADDDEVICE_PARAMETERS.PhysicalMedium", physical_medium, 0x0, 0x0, false, 0xecb4273e0e8f4f24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NDIS_ADDDEVICE_PARAMETERS.IsImMiniport", is_im_miniport, 0x0, 0x0, false, 0x78e833808a860045)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_ADDDEVICE_PARAMETERS.Characteristics", characteristics, 0x0, 0x0, false, 0x8f30c853f62f3882)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "NDIS_ADDDEVICE_PARAMETERS.MiniportAdapterContext", miniport_adapter_context, 0x0, 0x0, false, 0x3b4a51371004b02d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif