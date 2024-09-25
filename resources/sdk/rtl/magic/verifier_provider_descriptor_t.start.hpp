#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.Length", length, 0x0, 0x20, true, 0x300a22d8de868c80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::verifier_dll_descriptor_t*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.ProviderDlls", provider_dlls, 0x40, 0x40, true, 0x36ba8753986ebd7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(wchar_t*, void*, uint64_t, void*)>*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.ProviderDllLoadCallback", provider_dll_load_callback, 0x80, 0x40, true, 0xa7e379a150725121)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(wchar_t*, void*, uint64_t, void*)>*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.ProviderDllUnloadCallback", provider_dll_unload_callback, 0xc0, 0x40, true, 0x5afa0de756e8196f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.VerifierImage", verifier_image, 0x100, 0x40, true, 0xb7fa34918d3f3bbc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.VerifierFlags", verifier_flags, 0x140, 0x20, true, 0x1a2878ffd0ed8347)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.VerifierDebug", verifier_debug, 0x160, 0x20, true, 0x1fa9774d5e39e401)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.RtlpGetStackTraceAddress", rtlp_get_stack_trace_address, 0x180, 0x40, true, 0xb989f32264a5dd6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.RtlpDebugPageHeapCreate", rtlp_debug_page_heap_create, 0x1c0, 0x40, true, 0x2f226e99fb7858ce)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.RtlpDebugPageHeapDestroy", rtlp_debug_page_heap_destroy, 0x200, 0x40, true, 0x2854d793757b4fe2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t)>*), "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.ProviderNtdllHeapFreeCallback", provider_ntdll_heap_free_callback, 0x240, 0x40, true, 0x7d7876c4a1f0e01)
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
#endif