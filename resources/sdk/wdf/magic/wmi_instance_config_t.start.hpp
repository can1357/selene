#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_INSTANCE_CONFIG.Size", size, 0x0, 0x20, true, 0x964edc5f03e5bdc5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwmiprovider_t*), "_WDF_WMI_INSTANCE_CONFIG.Provider", provider, 0x40, 0x40, true, 0x3b1ab0fd962559f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wmi_provider_config_t*), "_WDF_WMI_INSTANCE_CONFIG.ProviderConfig", provider_config, 0x80, 0x40, true, 0xbd1a4d4e561393e6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG.UseContextForQuery", use_context_for_query, 0xc0, 0x8, true, 0x483f2481a8d14432)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_WMI_INSTANCE_CONFIG.Register", _register, 0xc8, 0x8, true, 0xfd02f9ea7439b1af)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_query_instance_t ), "_WDF_WMI_INSTANCE_CONFIG.EvtWmiInstanceQueryInstance", evt_wmi_instance_query_instance, 0x100, 0x40, true, 0x71e0174de63c340c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_instance_t ), "_WDF_WMI_INSTANCE_CONFIG.EvtWmiInstanceSetInstance", evt_wmi_instance_set_instance, 0x140, 0x40, true, 0x6b84368e33f32621)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_set_item_t ), "_WDF_WMI_INSTANCE_CONFIG.EvtWmiInstanceSetItem", evt_wmi_instance_set_item, 0x180, 0x40, true, 0x40740dac7761d224)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_instance_execute_method_t ), "_WDF_WMI_INSTANCE_CONFIG.EvtWmiInstanceExecuteMethod", evt_wmi_instance_execute_method, 0x1c0, 0x40, true, 0x39ac98242a98e757)
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