#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0xe049c0d75cc22302)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_17.Guid", guid, 0x0, 0x0, false, 0x622d14437df2b023)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_17.Flags", flags, 0x0, 0x0, false, 0x45c4326acc617532)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_17.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x19a7f6444b243326)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_17.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xcb0550d89b063cab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif