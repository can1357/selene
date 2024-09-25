#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0xd3a17c2675d7b53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_0.Guid", guid, 0x0, 0x0, false, 0xda16100008c119f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_0.Flags", flags, 0x0, 0x0, false, 0xc99d0739686c4d49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_0.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0xb6f30b5b90755fbf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_0.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xae7a704fc82b9efc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif