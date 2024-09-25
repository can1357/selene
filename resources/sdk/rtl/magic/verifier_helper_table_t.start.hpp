#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_HELPER_TABLE.Length", length, 0x0, 0x20, true, 0x945af7da42117cbb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint16_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngGetStackTraceAddress", verifier_eng_get_stack_trace_address, 0x40, 0x40, true, 0x263ce972f870e9d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngNtdllHeapFreeCallback", verifier_eng_ntdll_heap_free_callback, 0x80, 0x40, true, 0xa99b7ca05ecff4c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint32_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngLogStackTrace", verifier_eng_log_stack_trace, 0xc0, 0x40, true, 0xa8196c9a7b8da4e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_RTL_VERIFIER_HELPER_TABLE.UnicodeImageName", unicode_image_name, 0x100, 0x40, true, 0xbab70f11d7fbd3d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct rtl::debug_information_t*, uint32_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngCommitDebugInfo", verifier_eng_commit_debug_info, 0x140, 0x40, true, 0xbe396a82d9d5124d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngSetProcessDebugInformation", verifier_eng_set_process_debug_information, 0x180, 0x40, true, 0x8c7c9555ac0e8f86)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const nt::unicode_view*, const wchar_t*, uint32_t, void*, uint32_t, uint32_t*, uint8_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngQueryImageFileExecutionOptionsEx", verifier_eng_query_image_file_execution_options_ex, 0x1c0, 0x40, true, 0xfdd02d134ad47b7a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RTL_VERIFIER_HELPER_TABLE.AddressDphGlobalFlags", address_dph_global_flags, 0x200, 0x40, true, 0xbe25f1b8eb21860c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::verifier_heap_table_t*), "_RTL_VERIFIER_HELPER_TABLE.VerifierTable", verifier_table, 0x240, 0x40, true, 0xede31855ba113cbd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::verifier_provider_descriptor_t*), "_RTL_VERIFIER_HELPER_TABLE.VerifierDescriptor", verifier_descriptor, 0x280, 0x40, true, 0x63c19a42e4886832)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_HELPER_TABLE.OptionsKey", options_key, 0x2c0, 0x40, true, 0x69484d84c0ca8608)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint16_t, uint16_t)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngGetStackTraceAddressEx", verifier_eng_get_stack_trace_address_ex, 0x340, 0x40, true, 0x237bc385ab45b6aa)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngReleaseStackTrace", verifier_eng_release_stack_trace, 0x380, 0x40, true, 0xd05c244c55640473)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(rtl_verifier_initialize_std_stack_trace_t ), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngStdInitializeStackTrace", verifier_eng_std_initialize_stack_trace, 0x3c0, 0x40, true, 0xdb76ca5ec07f1b36)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(rtl_verifier_delete_std_stack_trace_t ), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngStdDeleteStackTrace", verifier_eng_std_delete_stack_trace, 0x400, 0x40, true, 0x7949498322e5574d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(rtl_verifier_log_std_stack_trace_t ), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngStdLogStackTrace", verifier_eng_std_log_stack_trace, 0x440, 0x40, true, 0x9e3369ac8571fe4b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(rtl_verifier_release_std_stack_trace_t ), "_RTL_VERIFIER_HELPER_TABLE.VerifierEngStdReleaseStackTrace", verifier_eng_std_release_stack_trace, 0x480, 0x40, true, 0xe64db5ba17d1d42d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_HELPER_TABLE.SystemDllBase", system_dll_base, 0x300, 0x40, true, 0x3196440fc4084901)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif