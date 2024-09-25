#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/replace_parameters_t.start.hpp"
namespace pnp
{
    struct replace_memory_list_t;
    struct replace_processor_list_t;

    // [struct _PNP_REPLACE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct replace_parameters_t                                      
    {                                                                
        using preplace_map_memory_t = sdk::function<int32_t(int64_t, int64_t, int64_t*, void**, void**)>*;                  
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                              version;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint64_t                              target;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Target
        _m03 struct pnp::replace_processor_list_t* target_processors;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetProcessors
        _m04 struct pnp::replace_processor_list_t* spare_processors;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SpareProcessors
        _m05 struct pnp::replace_memory_list_t*    target_memory;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TargetMemory
        _m06 struct pnp::replace_memory_list_t*    spare_memory;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SpareMemory
        _m07 preplace_map_memory_t                 map_memory;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .MapMemory
                                                                     
        SDK_NONVOL_PROPERTIES( "_PNP_REPLACE_PARAMETERS.$", 0x40, true, 0x195b43d0f1580a2a );                  
        SDK_FIXED_SIZE( replace_parameters_t, 0x40 );                  
    };                                                               
};
#include "magic/replace_parameters_t.end.hpp"
SDK_VERIFY( struct pnp::replace_parameters_t, 0x40 );
