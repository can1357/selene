#pragma once
#include <sdkgen/support_library.hpp>
#include "config_knob_flag_t.hpp"
#include "config_knob_source_t.hpp"

#include "magic/knob_information_t.start.hpp"
namespace ndis
{
    // [struct NDIS_KNOB_INFORMATION]
    // => Windows 11
    //
    struct knob_information_t                                   
    {                                                           
        // Windows 11                                           
        //                                                      
        _m00 uint64_t                        current_value;       //{ +0x0000    } | .CurrentValue
        _m01 uint64_t                        default_value;       //{ +0x0008    } | .DefaultValue
        _m02 uint64_t                        minimum_value;       //{ +0x0010    } | .MinimumValue
        _m03 uint64_t                        maximum_value;       //{ +0x0018    } | .MaximumValue
        _m04 enum ndis::config_knob_flag_t   flags;               //{ +0x0020    } | .Flags
        _m05 enum ndis::config_knob_source_t source;              //{ +0x0024    } | .Source
        _m06 int32_t                         last_update_status;  //{ +0x0028    } | .LastUpdateStatus
                                                                
        SDK_MAGIC_PROPERTIES( "NDIS_KNOB_INFORMATION.$", 0x0, false, 0x8e2d4178a849809b );                   
        SDK_FIXED_SIZE( knob_information_t, 0x30 );                   
    };                                                          
};
#include "magic/knob_information_t.end.hpp"
SDK_VERIFY( struct ndis::knob_information_t, 0x30 );
