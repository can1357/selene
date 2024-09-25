#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x1a116c289143f062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.Interface", interface, 0x0, 0x0, false, 0x50477a63ea29357f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.InterfaceType", interface_type, 0x0, 0x0, false, 0x3f1152c22de29b6f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.SendQueryToParentStack", send_query_to_parent_stack, 0x0, 0x0, false, 0x56cf4decd0fd8c66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x0, 0x0, false, 0xe6b9c9c85e18a762)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_5.ImportInterface", import_interface, 0x0, 0x0, false, 0x681c6edf62d56834)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif