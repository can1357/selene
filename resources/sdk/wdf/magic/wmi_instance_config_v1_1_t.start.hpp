#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x68704b950013813)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_1.Provider", provider, 0x0, 0x0, false, 0x5292c758d66c3287)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_v1_1_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_1.ProviderConfig", provider_config, 0x0, 0x0, false, 0xfbe112a16ec810e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_1.UseContextForQuery", use_context_for_query, 0x0, 0x0, false, 0x294c42fa843e1e33)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_1.Register", _register, 0x0, 0x0, false, 0xf941eb9f7f2e0541)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_1.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x0, 0x0, false, 0x17aa48f471f1e27b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_1.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x0, 0x0, false, 0xfff633fda133c6f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_1.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x0, 0x0, false, 0x253cfb31dc2ca54b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_1.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x0, 0x0, false, 0xb60a2314a4129858)
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