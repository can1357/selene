#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0xb8372ecfcc7e4be5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.Interface", interface, 0x0, 0x0, false, 0xcbf004a2396e81e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.InterfaceType", interface_type, 0x0, 0x0, false, 0xf6d27e60aa3ade76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.SendQueryToParentStack", send_query_to_parent_stack, 0x0, 0x0, false, 0xb2f8b4a54d2d4646)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x0, 0x0, false, 0xd049a1f11302a4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG_V1_7.ImportInterface", import_interface, 0x0, 0x0, false, 0x67ac7a491d5accb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif