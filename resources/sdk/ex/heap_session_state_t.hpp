#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/hp_env_handle_t.hpp"
#include "../rtlp/hp_heap_manager_t.hpp"

namespace ntdll { struct segment_heap_t; }

#include "magic/heap_session_state_t.start.hpp"
namespace ex
{
    // [struct _EX_HEAP_SESSION_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_session_state_t                               
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 struct rtlp::hp_heap_manager_t heap_manager;       //{ +0x0000    +0x0000    +0x0000    } | .HeapManager
        _m01 struct rtl::hp_env_handle_t    paged_env;          //{ +0x38d0    +0x38e0    +0x38d0    } | .PagedEnv
        _m02 struct ntdll::segment_heap_t*  paged_heap;         //{ +0x38e0    +0x38f0    +0x38e0    } | .PagedHeap
        _m03 struct ntdll::segment_heap_t*  special_pool_heap;  //{ +0x38e8    +0x38f8    +0x38e8    } | .SpecialPoolHeap
                                                              
        SDK_MAGIC_PROPERTIES( "_EX_HEAP_SESSION_STATE.$", 0x38f0, true, 0x3521865d2e79f2e8 );                  
        SDK_DYNAMIC_SIZE( heap_session_state_t );                  
    };                                                        
};
#include "magic/heap_session_state_t.end.hpp"
