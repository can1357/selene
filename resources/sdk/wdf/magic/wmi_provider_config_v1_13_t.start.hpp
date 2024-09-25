#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x6b900b7f7d49abf2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_13.Guid", guid, 0x0, 0x0, false, 0x8f4b234b0fb474a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_13.Flags", flags, 0x0, 0x0, false, 0x5510bfdd5ebea991)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_13.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0x88e8c9f9c67b1b22)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_13.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0x1395752051be31c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif