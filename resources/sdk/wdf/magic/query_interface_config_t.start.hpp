#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_QUERY_INTERFACE_CONFIG.Size", size, 0x0, 0x20, true, 0x303f1703d10d0d4b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_WDF_QUERY_INTERFACE_CONFIG.Interface", interface, 0x40, 0x40, true, 0x5f8cd1fc8efc7d19)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_QUERY_INTERFACE_CONFIG.InterfaceType", interface_type, 0x80, 0x40, true, 0xae2306402a2211be)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG.SendQueryToParentStack", send_query_to_parent_stack, 0xc0, 0x8, true, 0xac2fa7fc505fdf3c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_process_query_interface_request_t ), "_WDF_QUERY_INTERFACE_CONFIG.EvtDeviceProcessQueryInterfaceRequest", evt_device_process_query_interface_request, 0x100, 0x40, true, 0xbffee86a224fb2f2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_QUERY_INTERFACE_CONFIG.ImportInterface", import_interface, 0x140, 0x8, true, 0xacb520cad34ac81b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif