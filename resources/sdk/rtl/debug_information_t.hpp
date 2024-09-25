#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_information_t.start.hpp"
namespace rtl
{
    struct process_heaps_t;
    struct process_locks_t;
    struct process_modules_t;
    struct process_backtraces_t;
    struct process_verifier_options_t;
    struct process_module_information_ex_t;

    // [struct _RTL_DEBUG_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debug_information_t                                                          
    {                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                              
        _m00 void*                                        section_handle_client;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionHandleClient
        _m01 void*                                        view_base_client;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ViewBaseClient
        _m02 void*                                        view_base_target;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ViewBaseTarget
        _m03 uint64_t                                     view_base_delta;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ViewBaseDelta
        _m04 void*                                        event_pair_client;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EventPairClient
        _m05 void*                                        event_pair_target;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .EventPairTarget
        _m06 void*                                        target_process_id;              //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetProcessId
        _m07 void*                                        target_thread_handle;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .TargetThreadHandle
        _m08 uint32_t                                     flags;                          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m09 uint64_t                                     offset_free;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .OffsetFree
        _m10 uint64_t                                     commit_size;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CommitSize
        _m11 uint64_t                                     view_size;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ViewSize
        _m12 struct rtl::process_modules_t*               modules;                        //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .Modules
        _m13 struct rtl::process_module_information_ex_t* modules_ex;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .ModulesEx
        _m14 struct rtl::process_backtraces_t*            back_traces;                    //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .BackTraces
        _m15 struct rtl::process_heaps_t*                 heaps;                          //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .Heaps
        _m16 struct rtl::process_locks_t*                 locks;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .Locks
        _m17 void*                                        specific_heap;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .SpecificHeap
        _m18 void*                                        target_process_handle;          //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .TargetProcessHandle
        _m19 struct rtl::process_verifier_options_t*      verifier_options;               //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .VerifierOptions
        _m20 void*                                        process_heap;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .ProcessHeap
        _m21 void*                                        critical_section_handle;        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .CriticalSectionHandle
        _m22 void*                                        critical_section_owner_thread;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CriticalSectionOwnerThread
                                                                                        
        SDK_NONVOL_PROPERTIES( "_RTL_DEBUG_INFORMATION.$", 0xd0, true, 0xd05098ca43f37bbe );                              
        SDK_FIXED_SIZE( debug_information_t, 0xd0 );                                    
    };                                                                                  
};
#include "magic/debug_information_t.end.hpp"
SDK_VERIFY( struct rtl::debug_information_t, 0xd0 );
