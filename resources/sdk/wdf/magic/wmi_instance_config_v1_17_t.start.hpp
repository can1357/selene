#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0xee05622932c01ced)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_17.Provider", provider, 0x0, 0x0, false, 0x4c8282437c5b8688)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_v1_17_t*), "_WDF_WMI_INSTANCE_CONFIG_V1_17.ProviderConfig", provider_config, 0x0, 0x0, false, 0xa76503d89f0abf62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_17.UseContextForQuery", use_context_for_query, 0x0, 0x0, false, 0x683ef68fd541c8e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG_V1_17.Register", _register, 0x0, 0x0, false, 0x7a29e38dda6767e1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_17.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x0, 0x0, false, 0xfe88d63f0327cae3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_17.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x0, 0x0, false, 0x4c9356a0cc6c35fc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_17.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x0, 0x0, false, 0x40cf857aa2be86ef)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG_V1_17.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x0, 0x0, false, 0xdf0ecd0e87e34a12)
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