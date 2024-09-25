#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_prefetch_options_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PREFETCH_OPTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_prefetch_options_t         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m00 uint1_t lower_priority;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LowerPriority
        _m01 uint1_t virtual_offsets;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VirtualOffsets
        _m02 uint1_t trickle_i_os;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TrickleIOs
        _m03 uint1_t skip_in_store_pages;      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SkipInStorePages
        _m04 uint1_t prefetch_files_by_va;     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PrefetchFilesByVa
        _m05 uint1_t skip_memory_store_pages;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SkipMemoryStorePages
        _m06 uint8_t scenario_type;            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ScenarioType
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PREFETCH_OPTIONS.$", 0x4, true, 0x2d144ccc8d1dbaca );                        
        SDK_FIXED_SIZE( system_prefetch_options_t, 0x4 );                        
    };                                       
};
#include "magic/system_prefetch_options_t.end.hpp"
SDK_VERIFY( struct win::system_prefetch_options_t, 0x4 );
