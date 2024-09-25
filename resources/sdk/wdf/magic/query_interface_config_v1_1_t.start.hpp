#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0xf89e115a223a3e14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.Interface", interface, 0x0, 0x0, false, 0x56f8c0b07dc0b98c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.InterfaceType", interface_type, 0x0, 0x0, false, 0x63b5667950f86d4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.SendQueryToParentStack", send_query_to_parent_stack, 0x0, 0x0, false, 0x3683fa721da8cc1f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x0, 0x0, false, 0xa17b4067cd73545)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_1.ImportInterface", import_interface, 0x0, 0x0, false, 0xe168725674719185)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif