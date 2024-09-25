#pragma once
#include <sdkgen/support_library.hpp>
#include "trustlet_attribute_header_t.hpp"

#include "magic/trustlet_attribute_data_t.start.hpp"
namespace ps
{
    // [struct _PS_TRUSTLET_ATTRIBUTE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_attribute_data_t                       
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 struct ps::trustlet_attribute_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint64_t, 1>                data;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                           
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_ATTRIBUTE_DATA.$", 0x10, true, 0x39dceddd20df491c );       
        SDK_FIXED_SIZE( trustlet_attribute_data_t, 0x10 );       
    };                                                     
};
#include "magic/trustlet_attribute_data_t.end.hpp"
SDK_VERIFY( struct ps::trustlet_attribute_data_t, 0x10 );
