#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x4c9a38d76ae1abf2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_5.Guid", guid, 0x0, 0x0, false, 0x68660761c1ff36f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_5.Flags", flags, 0x0, 0x0, false, 0x39ac371b32a7f4d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_5.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x2bde844aedbc6394)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_5.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xfd42d87c7cd09391)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif