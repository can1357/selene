#pragma once
#include <sdkgen/support_library.hpp>
#include "log_parameter_header_t.hpp"

#include "magic/log_parameter_threshold_resource_count_t.start.hpp"
namespace nt
{
    // [struct _LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT]
    // => WDK 10 (NV)
    //
    struct log_parameter_threshold_resource_count_t           
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct nt::log_parameter_header_t header;          //{ +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 4>            resource_count;  //{ +0x0004    } | .ResourceCount
        _m02 uint2_t                           scope;           //{ +0x0008@0  } | .Scope
                                                              
        SDK_NONVOL_PROPERTIES( "_LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT.$", 0x0, false, 0x442356016a532fbf );               
        SDK_FIXED_SIZE( log_parameter_threshold_resource_count_t, 0xc );               
    };                                                        
};
#include "magic/log_parameter_threshold_resource_count_t.end.hpp"
SDK_VERIFY( struct nt::log_parameter_threshold_resource_count_t, 0xc );
