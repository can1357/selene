#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0x8091711da90538c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_11.Guid", guid, 0x0, 0x0, false, 0x92d1cf59dbd5e73f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_11.Flags", flags, 0x0, 0x0, false, 0x402e7bdb1eacf5b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_11.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x2987d777fe2d6b67)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_11.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0x51c71947f3a3aae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif