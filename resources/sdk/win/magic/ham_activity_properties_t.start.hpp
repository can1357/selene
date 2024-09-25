#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::ham_activity_properties_flags_t), "_HAM_ACTIVITY_PROPERTIES.Flags", flags, 0x0, 0x20, true, 0x8871a8c13039c368)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::ham_activity_start_flags_t), "_HAM_ACTIVITY_PROPERTIES.StartFlags", start_flags, 0x20, 0x20, true, 0xb3a8f9d647322267)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::ham_activity_revoke_flags_t), "_HAM_ACTIVITY_PROPERTIES.RevokeFlags", revoke_flags, 0x40, 0x20, true, 0xf4ade7ee3c16da30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_HAM_ACTIVITY_PROPERTIES.Description", description, 0x60, 0x0, true, 0xd68df202689fb5fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_HAM_ACTIVITY_PROPERTIES.ResourcePolicyName", resource_policy_name, 0x460, 0x0, true, 0x6010fbfad3883e58)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pdc_activity_type_t), "_HAM_ACTIVITY_PROPERTIES.PdcActivityType", pdc_activity_type, 0x860, 0x20, true, 0xcd667146e1fdb23)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_PROPERTIES.PdcExpectedDurationSeconds", pdc_expected_duration_seconds, 0x880, 0x20, true, 0x7b75c566715947fd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_PROPERTIES.CacheDurationMs", cache_duration_ms, 0x8a0, 0x20, true, 0xa218430094cdf0ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::rm_resource_set_properties_t), "_HAM_ACTIVITY_PROPERTIES.CustomResourceSetProperties", custom_resource_set_properties, 0x8c0, 0x40, true, 0x5356cbc27ab0563d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ham_external_resource_mask_t), "_HAM_ACTIVITY_PROPERTIES.ExternalResourceMaskData", external_resource_mask_data, 0xc00, 0x40, true, 0xf7142acf7a637a52)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif