#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x6fbade1f79c9772c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_15.Guid", guid, 0x0, 0x0, false, 0x705ee184b0e83b54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_15.Flags", flags, 0x0, 0x0, false, 0xb3d176e4c258185f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_15.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x514fcdbeffb8e381)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_15.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0xdaf8f3aeb5441aab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif