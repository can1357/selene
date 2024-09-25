#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x5e9b7e3b478a342e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_15.Provider", provider, 0x0, 0x0, false, 0x6821534d4e4264cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_v1_15_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_15.ProviderConfig", provider_config, 0x0, 0x0, false, 0x74540f3c39fe05dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_15.UseContextForQuery", use_context_for_query, 0x0, 0x0, false, 0x77efe305840944ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_15.Register", _register, 0x0, 0x0, false, 0x2295910e923c38f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_15.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x0, 0x0, false, 0x2390ffaf45212cae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_15.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x0, 0x0, false, 0xc7ef2480beb09d65)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_15.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x0, 0x0, false, 0xfa698166aa9b7861)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_15.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x0, 0x0, false, 0x1b6146bfb2b090b2)
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