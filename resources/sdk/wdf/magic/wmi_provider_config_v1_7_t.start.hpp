#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0x5ea96f5da53ffd9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_7.Guid", guid, 0x0, 0x0, false, 0x9df919d351015bd2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_7.Flags", flags, 0x0, 0x0, false, 0xc6e33ea7b4513a6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_7.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0xb7df73ae619dd891)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_7.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xd34abb96889bf3e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif