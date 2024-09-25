#pragma once
#include <sdkgen/support_library.hpp>
#include "hp_alloc_tracker_t.hpp"
#include "../heap/vamgr_ctx_t.hpp"
#include "hp_metadata_heap_ctx_t.hpp"
#include "../rtl/hp_sub_allocator_configs_t.hpp"

#include "magic/hp_heap_manager_t.start.hpp"
namespace rtlp
{
    struct hp_heap_globals_t;

    // [struct _RTLP_HP_HEAP_MANAGER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_heap_manager_t                                          
    {                                                                 
        using metadata_heaps_t = sdk::array<struct rtlp::hp_metadata_heap_ctx_t, 3>;                  
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 struct rtlp::hp_heap_globals_t*        globals;            //{ +0x0000    +0x0000    +0x0000    } | .Globals
        _m01 struct rtlp::hp_alloc_tracker_t        alloc_tracker;      //{ +0x0008    +0x0008    +0x0008    } | .AllocTracker
        _m02 struct heap::vamgr_ctx_t               va_mgr;             //{ +0x0058    +0x0058    +0x0058    } | .VaMgr
        _m03 metadata_heaps_t                       metadata_heaps;     //{ +0x3898    +0x3898    +0x3898    } | .MetadataHeaps
        _m04 struct rtl::hp_sub_allocator_configs_t sub_alloc_configs;  //{ +0x38c8    +0x38d8    +0x38c8    } | .SubAllocConfigs
                                                                      
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_HEAP_MANAGER.$", 0x38d0, true, 0xe74f81a5695de3c6 );                  
        SDK_DYNAMIC_SIZE( hp_heap_manager_t );                        
    };                                                                
};
#include "magic/hp_heap_manager_t.end.hpp"
