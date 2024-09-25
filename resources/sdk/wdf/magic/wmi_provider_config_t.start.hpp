#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG.Size", size, 0x0, 0x20, true, 0x26909d1d8f3370e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_WMI_PROVIDER_CONFIG.Guid", guid, 0x20, 0x80, true, 0x42b443b7bf9ddb4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG.Flags", flags, 0xa0, 0x20, true, 0x483e007350e4d81b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_WMI_PROVIDER_CONFIG.MinInstanceBufferSize", min_instance_buffer_size, 0xc0, 0x20, true, 0xf9de070597513f32)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_wmi_provider_function_control_t ), "_WDF_WMI_PROVIDER_CONFIG.EvtWmiProviderFunctionControl", evt_wmi_provider_function_control, 0x100, 0x40, true, 0x516fc48a4791d578)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif