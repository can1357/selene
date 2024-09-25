#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_WDF_COMPLETE_ADD_PARAMS.NetLuid", net_luid, 0x0, 0x40, true, 0xaba229db058c7932)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_WDF_COMPLETE_ADD_PARAMS.MediaType", media_type, 0x40, 0x20, true, 0x68de1155065c3def)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_WDF_COMPLETE_ADD_PARAMS.BaseName", base_name, 0x80, 0x80, true, 0x9c92d710a06be13c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_WDF_COMPLETE_ADD_PARAMS.AdapterInstanceName", adapter_instance_name, 0x100, 0x80, true, 0x17253d4aa19927b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_WDF_COMPLETE_ADD_PARAMS.InterfaceGuid", interface_guid, 0x0, 0x0, false, 0xd4433718f0224e9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_WDF_COMPLETE_ADD_PARAMS.DriverImageName", driver_image_name, 0x0, 0x0, false, 0x12e02f3507e2c7bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WDF_COMPLETE_ADD_PARAMS.ExecutionContextKnobs", execution_context_knobs, 0x0, 0x0, false, 0x326be61baf2362b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif