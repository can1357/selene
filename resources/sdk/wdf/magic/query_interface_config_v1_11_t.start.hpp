#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0x51b7683dea41daff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.Interface", interface, 0x0, 0x0, false, 0xe0db3ce9cd3cd7aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.InterfaceType", interface_type, 0x0, 0x0, false, 0x8babc9381d751e06)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.SendQueryToParentStack", send_query_to_parent_stack, 0x0, 0x0, false, 0x870c17ea1c47825d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x0, 0x0, false, 0xeae7db5bf7b5f030)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_11.ImportInterface", import_interface, 0x0, 0x0, false, 0x80349504e5d3654c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif