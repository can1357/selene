#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableExportAddressFilter", enable_export_address_filter, 0x0, 0x40, true, 0xdf8073bff26c9e51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableExportAddressFilterPlus", enable_export_address_filter_plus, 0x40, 0x40, true, 0xb27a04bef3f4fb3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableImportAddressFilter", enable_import_address_filter, 0x80, 0x40, true, 0xe500c3255ebee07e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopStackPivot", enable_rop_stack_pivot, 0xc0, 0x40, true, 0xfa07bb6a5782066c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopCallerCheck", enable_rop_caller_check, 0x100, 0x40, true, 0xd9630560add3aeae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EnableRopSimExec", enable_rop_sim_exec, 0x140, 0x40, true, 0xe0e2d230df936e0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 512>), "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.EafPlusModuleList", eaf_plus_module_list, 0x180, 0x0, true, 0x497fb98c265103c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif