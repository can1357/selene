#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_get_all_error_sources_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.GetAllErrorSources", get_all_error_sources, 0x0, 0x40, true, 0x50a49b7da0691080)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.GetErrorSourceInfo", get_error_source_info, 0x80, 0x40, true, 0x2445f2d4b3dc750e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.SetErrorSourceInfo", set_error_source_info, 0xc0, 0x40, true, 0x30fa9d40f9561858)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.EnableErrorSource", enable_error_source, 0x100, 0x40, true, 0x390237af0b55917b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.DisableErrorSource", disable_error_source, 0x140, 0x40, true, 0xb1ca3397c3205aaa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_write_error_record_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.WriteErrorRecord", write_error_record, 0x180, 0x40, true, 0x3bc82a1453543d0d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_read_error_record_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.ReadErrorRecord", read_error_record, 0x1c0, 0x40, true, 0xd8204e0fac6f052)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_clear_error_record_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.ClearErrorRecord", clear_error_record, 0x200, 0x40, true, 0xb8560ede0bd520c1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_retrieve_error_info_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.RetrieveErrorInfo", retrieve_error_info, 0x240, 0x40, true, 0xcb41fb6ac9963561)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*, uint32_t, struct whea::error_record_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.FinalizeErrorRecord", finalize_error_record, 0x280, 0x40, true, 0x297c6a38257cb1a9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct whea::error_source_descriptor_t*, uint32_t, struct whea::error_record_t*)>*), "_WHEA_PSHED_PLUGIN_CALLBACKS.ClearErrorStatus", clear_error_status, 0x2c0, 0x40, true, 0x60dd0cc29c3275fd)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_attempt_error_recovery_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.AttemptRecovery", attempt_recovery, 0x300, 0x40, true, 0x335c22af16eacd0e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_get_injection_capabilities_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.GetInjectionCapabilities", get_injection_capabilities, 0x340, 0x40, true, 0x9080a25ee4e69320)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pshed_pi_inject_error_t ), "_WHEA_PSHED_PLUGIN_CALLBACKS.InjectError", inject_error, 0x380, 0x40, true, 0x7a036b19bbe03a01)
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
#define _m10
#define _m11
#define _m12
#define _m13
#endif