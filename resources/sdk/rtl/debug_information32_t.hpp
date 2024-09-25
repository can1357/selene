#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_information32_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DEBUG_INFORMATION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_information32_t                    
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint32_t section_handle_client;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionHandleClient
        _m01 uint32_t view_base_client;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ViewBaseClient
        _m02 uint32_t view_base_target;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ViewBaseTarget
        _m03 uint32_t view_base_delta;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ViewBaseDelta
        _m04 uint32_t event_pair_client;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EventPairClient
        _m05 uint32_t event_pair_target;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .EventPairTarget
        _m06 uint32_t target_process_id;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetProcessId
        _m07 uint32_t target_thread_handle;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TargetThreadHandle
        _m08 uint32_t flags;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m09 uint32_t offset_free;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .OffsetFree
        _m10 uint32_t commit_size;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CommitSize
        _m11 uint32_t view_size;                      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ViewSize
        _m12 uint32_t modules;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Modules
        _m13 uint32_t modules_ex;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ModulesEx
        _m14 uint32_t back_traces;                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .BackTraces
        _m15 uint32_t heaps;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Heaps
        _m16 uint32_t locks;                          //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Locks
        _m17 uint32_t specific_heap;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SpecificHeap
        _m18 uint32_t target_process_handle;          //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TargetProcessHandle
        _m19 uint32_t verifier_options;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .VerifierOptions
        _m20 uint32_t process_heap;                   //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ProcessHeap
        _m21 uint32_t critical_section_handle;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CriticalSectionHandle
        _m22 uint32_t critical_section_owner_thread;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .CriticalSectionOwnerThread
                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_DEBUG_INFORMATION32.$", 0x68, true, 0x3e702ca1835362d6 );                              
        SDK_FIXED_SIZE( debug_information32_t, 0x68 );                              
    };                                              
};
#include "magic/debug_information32_t.end.hpp"
SDK_VERIFY( struct rtl::debug_information32_t, 0x68 );
