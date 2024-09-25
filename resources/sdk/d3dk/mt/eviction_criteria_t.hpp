#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eviction_criteria_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_EVICTION_CRITERIA]
    // => WDK 10 (NV)
    //
    struct eviction_criteria_t                
    {                                         
        struct u0_flags_t                     
        {                                     
            // WDK 10                         
            //                                
            _m02 uint1_t primary;               //{ +0x0000@0  } | .Primary
                                              
            SDK_NONVOL_PROPERTIES( "_D3DKMT_EVICTION_CRITERIA.Flags.$", 0x0, false, 0xbd5467268074dfe );                     
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                     
        };                                    
                                              
        // WDK 10                             
        //                                    
        _m00 uint64_t            minimum_size;  //{ +0x0000    } | .MinimumSize
        _m01 uint64_t            maximum_size;  //{ +0x0008    } | .MaximumSize
        _m03 u0_flags_t          flags;         //{ +0x0010    } | .Flags
        _m04 uint32_t            value;         //{ +0x0010    } | .Value
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_EVICTION_CRITERIA.$", 0x0, false, 0xe1e592f1bc467a87 );             
        SDK_FIXED_SIZE( eviction_criteria_t, 0x18 );             
    };                                        
};
#include "magic/eviction_criteria_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::eviction_criteria_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::eviction_criteria_t, 0x18 );
