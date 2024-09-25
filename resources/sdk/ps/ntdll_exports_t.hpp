#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntdll_exports_t.start.hpp"
namespace ps
{
    // [struct _PS_NTDLL_EXPORTS]
    // => Windows 11
    //
    struct ntdll_exports_t                                       
    {                                                            
        // Windows 11                                              
        //                                                       
        _m00 void* ldr_system_dll_init_block;                      //{ +0x0000    } | .LdrSystemDllInitBlock
        _m01 void* ldr_initialize_thunk;                           //{ +0x0008    } | .LdrInitializeThunk
        _m02 void* rtl_user_thread_start;                          //{ +0x0010    } | .RtlUserThreadStart
        _m03 void* rtl_user_fiber_start;                           //{ +0x0018    } | .RtlUserFiberStart
        _m04 void* ki_user_exception_dispatcher;                   //{ +0x0020    } | .KiUserExceptionDispatcher
        _m05 void* ki_user_apc_dispatcher;                         //{ +0x0028    } | .KiUserApcDispatcher
        _m06 void* ki_user_callback_dispatcher;                    //{ +0x0030    } | .KiUserCallbackDispatcher
        _m07 void* ki_user_callback_dispatcher_return;             //{ +0x0038    } | .KiUserCallbackDispatcherReturn
        _m08 void* ki_raise_user_exception_dispatcher;             //{ +0x0040    } | .KiRaiseUserExceptionDispatcher
        _m09 void* exp_interlocked_pop_entry_s_list_end;           //{ +0x0048    } | .ExpInterlockedPopEntrySListEnd
        _m10 void* exp_interlocked_pop_entry_s_list_fault;         //{ +0x0050    } | .ExpInterlockedPopEntrySListFault
        _m11 void* exp_interlocked_pop_entry_s_list_resume;        //{ +0x0058    } | .ExpInterlockedPopEntrySListResume
        _m12 void* rtlp_freeze_time_bias;                          //{ +0x0060    } | .RtlpFreezeTimeBias
        _m13 void* ki_user_inverted_function_table;                //{ +0x0068    } | .KiUserInvertedFunctionTable
        _m14 void* wer_report_exception_worker;                    //{ +0x0070    } | .WerReportExceptionWorker
        _m15 void* rtl_call_enclave_return;                        //{ +0x0078    } | .RtlCallEnclaveReturn
        _m16 void* rtl_enclave_call_dispatch;                      //{ +0x0080    } | .RtlEnclaveCallDispatch
        _m17 void* rtl_enclave_call_dispatch_return;               //{ +0x0088    } | .RtlEnclaveCallDispatchReturn
        _m18 void* rtl_raise_exception_for_return_address_hijack;  //{ +0x0090    } | .RtlRaiseExceptionForReturnAddressHijack
        _m19 void* ki_user_emulation_dispatcher;                   //{ +0x0098    } | .KiUserEmulationDispatcher
        _m20 void* ldr_hot_patch_notify;                           //{ +0x00a0    } | .LdrHotPatchNotify
                                                                 
        SDK_MAGIC_PROPERTIES( "_PS_NTDLL_EXPORTS.$", 0x0, false, 0x915a787fbb1ab0bd );                                              
        SDK_FIXED_SIZE( ntdll_exports_t, 0xa8 );                                              
    };                                                           
};
#include "magic/ntdll_exports_t.end.hpp"
SDK_VERIFY( struct ps::ntdll_exports_t, 0xa8 );
