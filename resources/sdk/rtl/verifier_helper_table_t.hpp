#pragma once
#include <sdkgen/support_library.hpp>

namespace ntdll { struct stack_trace_database_t; }

#include "magic/verifier_helper_table_t.start.hpp"
namespace rtl
{
    struct debug_information_t;
    struct stack_trace_entry_t;
    struct verifier_heap_table_t;
    struct verifier_provider_descriptor_t;

    // [struct _RTL_VERIFIER_HELPER_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_helper_table_t                                                                                    
    {                                                                                                                 
        using verifier_eng_commit_debug_info_t =                     sdk::function<void*(struct rtl::debug_information_t*, uint32_t)>*;                                                   
        using verifier_eng_set_process_debug_information_t =         sdk::function<int32_t(void*, uint32_t, struct rtl::debug_information_t*)>*;                                                   
        using verifier_eng_query_image_file_execution_options_ex_t = sdk::function<int32_t(const nt::unicode_view*, const wchar_t*, uint32_t, void*, uint32_t, uint32_t*, uint8_t)>*;                                                   
        using rtl_verifier_initialize_std_stack_trace_t =            sdk::function<int32_t(void*, uint64_t, uint64_t, struct ntdll::stack_trace_database_t**)>*;                                                   
        using rtl_verifier_delete_std_stack_trace_t =                sdk::function<int32_t(struct ntdll::stack_trace_database_t*)>*;                                                   
        using rtl_verifier_log_std_stack_trace_t =                   sdk::function<struct rtl::stack_trace_entry_t*(struct ntdll::stack_trace_database_t*, uint32_t)>*;                                                   
        using rtl_verifier_release_std_stack_trace_t =               sdk::function<void(struct ntdll::stack_trace_database_t*, struct rtl::stack_trace_entry_t*)>*;                                                   
                                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
        //                                                                                                            
        _m00 uint32_t                                              length;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::function<void*(uint16_t)>*                       verifier_eng_get_stack_trace_address;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VerifierEngGetStackTraceAddress
        _m02 sdk::function<void(void*, uint64_t)>*                 verifier_eng_ntdll_heap_free_callback;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VerifierEngNtdllHeapFreeCallback
        _m03 sdk::function<void*(uint32_t)>*                       verifier_eng_log_stack_trace;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VerifierEngLogStackTrace
        _m04 const nt::unicode_view*                               unicode_image_name;                                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UnicodeImageName
        _m05 verifier_eng_commit_debug_info_t                      verifier_eng_commit_debug_info;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VerifierEngCommitDebugInfo
        _m06 verifier_eng_set_process_debug_information_t          verifier_eng_set_process_debug_information;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VerifierEngSetProcessDebugInformation
        _m07 verifier_eng_query_image_file_execution_options_ex_t  verifier_eng_query_image_file_execution_options_ex;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VerifierEngQueryImageFileExecutionOptionsEx
        _m08 uint32_t*                                             address_dph_global_flags;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AddressDphGlobalFlags
        _m09 struct rtl::verifier_heap_table_t*                    verifier_table;                                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .VerifierTable
        _m10 struct rtl::verifier_provider_descriptor_t*           verifier_descriptor;                                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .VerifierDescriptor
        _m11 void*                                                 options_key;                                         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OptionsKey
        _m12 sdk::function<void*(uint16_t, uint16_t)>*             verifier_eng_get_stack_trace_address_ex;             //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .VerifierEngGetStackTraceAddressEx
        _m13 sdk::function<void(void*)>*                           verifier_eng_release_stack_trace;                    //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .VerifierEngReleaseStackTrace
        _m14 rtl_verifier_initialize_std_stack_trace_t             verifier_eng_std_initialize_stack_trace;             //{ +0x0070    +0x0078    +0x0078    +0x0078    } | .VerifierEngStdInitializeStackTrace
        _m15 rtl_verifier_delete_std_stack_trace_t                 verifier_eng_std_delete_stack_trace;                 //{ +0x0078    +0x0080    +0x0080    +0x0080    } | .VerifierEngStdDeleteStackTrace
        _m16 rtl_verifier_log_std_stack_trace_t                    verifier_eng_std_log_stack_trace;                    //{ +0x0080    +0x0088    +0x0088    +0x0088    } | .VerifierEngStdLogStackTrace
        _m17 rtl_verifier_release_std_stack_trace_t                verifier_eng_std_release_stack_trace;                //{ +0x0088    +0x0090    +0x0090    +0x0090    } | .VerifierEngStdReleaseStackTrace
                                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                                            
        _m18 void*                                                 system_dll_base;                                     //{ +0x0060    +0x0060    +0x0060    } | .SystemDllBase
                                                                                                                      
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_HELPER_TABLE.$", 0x98, true, 0x70b54dd5d5c93d96 );                                                   
        SDK_DYNAMIC_SIZE( verifier_helper_table_t );                                                                  
    };                                                                                                                
};
#include "magic/verifier_helper_table_t.end.hpp"
