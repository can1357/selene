#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x32f83a96cfddfa6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.Interface", interface, 0x0, 0x0, false, 0xeac58e1d3f2cc237)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.InterfaceType", interface_type, 0x0, 0x0, false, 0x7475408949418d30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.SendQueryToParentStack", send_query_to_parent_stack, 0x0, 0x0, false, 0xb581fd1606cebe6d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x0, 0x0, false, 0x5bedc1397b827b53)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_9.ImportInterface", import_interface, 0x0, 0x0, false, 0x1f81810d397b28ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif