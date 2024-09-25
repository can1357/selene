#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0xd38a9f93708af341)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_5.Provider", provider, 0x0, 0x0, false, 0x66c678cf0e87f90d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_v1_5_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_5.ProviderConfig", provider_config, 0x0, 0x0, false, 0x392379d9fe1731db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_5.UseContextForQuery", use_context_for_query, 0x0, 0x0, false, 0xefd34cede777921d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_5.Register", _register, 0x0, 0x0, false, 0xcc855dbf38910819)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_5.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x0, 0x0, false, 0x6277922a2a9417f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_5.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x0, 0x0, false, 0xe1d779645d15cc27)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_5.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x0, 0x0, false, 0xc160c148a228a8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_5.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x0, 0x0, false, 0x52ae10d2e1a82f48)
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