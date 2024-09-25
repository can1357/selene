#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.LdrSystemDllInitBlock", ldr_system_dll_init_block, 0x0, 0x0, false, 0xae5bd884c4ecb924)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.LdrInitializeThunk", ldr_initialize_thunk, 0x0, 0x0, false, 0x795321ba8c5d3f97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlUserThreadStart", rtl_user_thread_start, 0x0, 0x0, false, 0x6b75699f29090644)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlUserFiberStart", rtl_user_fiber_start, 0x0, 0x0, false, 0x537c9926e148c941)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserExceptionDispatcher", ki_user_exception_dispatcher, 0x0, 0x0, false, 0x60e2cbd0afae8fb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserApcDispatcher", ki_user_apc_dispatcher, 0x0, 0x0, false, 0x194092ffc0480bb4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserCallbackDispatcher", ki_user_callback_dispatcher, 0x0, 0x0, false, 0xa5758e0e9770ca6a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserCallbackDispatcherReturn", ki_user_callback_dispatcher_return, 0x0, 0x0, false, 0x4a049923c8882e9c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiRaiseUserExceptionDispatcher", ki_raise_user_exception_dispatcher, 0x0, 0x0, false, 0x8a9e69351641f51b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.ExpInterlockedPopEntrySListEnd", exp_interlocked_pop_entry_s_list_end, 0x0, 0x0, false, 0x93890a54dbb97724)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.ExpInterlockedPopEntrySListFault", exp_interlocked_pop_entry_s_list_fault, 0x0, 0x0, false, 0x826817163b14f8bd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.ExpInterlockedPopEntrySListResume", exp_interlocked_pop_entry_s_list_resume, 0x0, 0x0, false, 0x5f2023aa2e1011c5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlpFreezeTimeBias", rtlp_freeze_time_bias, 0x0, 0x0, false, 0xcc5a3ed3e54192ba)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserInvertedFunctionTable", ki_user_inverted_function_table, 0x0, 0x0, false, 0x8d333efe2f259ed8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.WerReportExceptionWorker", wer_report_exception_worker, 0x0, 0x0, false, 0x77eec41be939ba8a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlCallEnclaveReturn", rtl_call_enclave_return, 0x0, 0x0, false, 0xe614fed41fa0ee0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlEnclaveCallDispatch", rtl_enclave_call_dispatch, 0x0, 0x0, false, 0xe1a2b7414b94fd90)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlEnclaveCallDispatchReturn", rtl_enclave_call_dispatch_return, 0x0, 0x0, false, 0x10c1dfe0880b3269)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.RtlRaiseExceptionForReturnAddressHijack", rtl_raise_exception_for_return_address_hijack, 0x0, 0x0, false, 0x2f2af798d519bcc6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.KiUserEmulationDispatcher", ki_user_emulation_dispatcher, 0x0, 0x0, false, 0xc82858d0325b0d51)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_NTDLL_EXPORTS.LdrHotPatchNotify", ldr_hot_patch_notify, 0x0, 0x0, false, 0x79a26f167315237)
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
#define _m19
#define _m20
#endif