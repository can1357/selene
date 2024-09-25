#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x2980d33fd111dce6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG_V1_1.Guid", guid, 0x0, 0x0, false, 0x71966126f7c92240)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_1.Flags", flags, 0x0, 0x0, false, 0x7f73bbf0ac5e76c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG_V1_1.MinInstanceBufferSize", min_instance_buffer_size, 0x0, 0x0, false, 0xe7604ef8cde0de76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG_V1_1.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x0, 0x0, false, 0x41e33151e240d62b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif