#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0xe281b4ff832f9eed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_9.Guid", guid, 0x0, 0x0, false, 0x1508ee3b892109ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_9.Flags", flags, 0x0, 0x0, false, 0x9b609569987559fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_9.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x116e702b5b8ef0c6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_9.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xf35def49e79381fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif