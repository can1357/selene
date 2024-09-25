#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x6d6e63e964863234)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_0.Provider", provider, 0x0, 0x0, false, 0xa023af9c8746fdde)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_v1_0_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_0.ProviderConfig", provider_config, 0x0, 0x0, false, 0xd26dfd62a39df44f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_0.UseContextForQuery", use_context_for_query, 0x0, 0x0, false, 0x4e297f43b17ba4bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_0.Register", _register, 0x0, 0x0, false, 0xc86368ab576e1191)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_0.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x0, 0x0, false, 0x1ab83f90908efb53)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_0.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x0, 0x0, false, 0xfd68ea021947d03f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_0.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x0, 0x0, false, 0xf5bd3ede6e875c50)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_0.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x0, 0x0, false, 0x7085a99163c584ac)
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