#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/aoac_component_ref_time_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_AOAC_COMPONENT_REF_TIME]
    // => Windows 10 v1607
    //
    struct aoac_component_ref_time_t         
    {                                        
        // Windows 10 v1607                       
        //                                   
        _m00 uint64_t total_ref_time;          //{ +0x0000    } | .TotalRefTime
        _m01 uint64_t current_ref_start_time;  //{ +0x0008    } | .CurrentRefStartTime
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_AOAC_COMPONENT_REF_TIME.$", 0x0, false, 0xe6c79c89b7006177 );                       
        SDK_FIXED_SIZE( aoac_component_ref_time_t, 0x10 );                       
    };                                       
};
#include "magic/aoac_component_ref_time_t.end.hpp"
SDK_VERIFY( struct ndis::aoac_component_ref_time_t, 0x10 );
