#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.Length", length, 0x0, 0x20, true, 0xd4adc90f1269464f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint32_t)>*), "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.VerifierEngLogStackTrace", verifier_eng_log_stack_trace, 0x40, 0x40, true, 0x4cca34d8989b5a50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.VerifierEngReleaseStackTrace", verifier_eng_release_stack_trace, 0x80, 0x40, true, 0x1af7f73defae4481)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint16_t, uint16_t)>*), "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.VerifierEngGetStackTraceAddressEx", verifier_eng_get_stack_trace_address_ex, 0xc0, 0x40, true, 0xb365320c16b55ade)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.VerifierEngSetHeapPathCaller", verifier_eng_set_heap_path_caller, 0x780, 0x40, true, 0x44d47e2dc96f3fbf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif