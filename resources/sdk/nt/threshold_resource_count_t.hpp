#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/threshold_resource_count_t.start.hpp"
namespace nt
{
    // [struct _THRESHOLD_RESOURCE_COUNT]
    // => WDK 10 (NV)
    //
    struct threshold_resource_count_t              
    {                                              
        // WDK 10                                  
        //                                         
        _m00 sdk::array<uint8_t, 4> resource_count;  //{ +0x0000    } | .ResourceCount
        _m01 uint2_t                scope;           //{ +0x0004@0  } | .Scope
                                                   
        SDK_NONVOL_PROPERTIES( "_THRESHOLD_RESOURCE_COUNT.$", 0x0, false, 0x146ed492cb4d16b1 );               
        SDK_FIXED_SIZE( threshold_resource_count_t, 0x8 );               
    };                                             
};
#include "magic/threshold_resource_count_t.end.hpp"
SDK_VERIFY( struct nt::threshold_resource_count_t, 0x8 );
