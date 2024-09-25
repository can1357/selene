#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_partition_attributes_t.start.hpp"
namespace nt
{
    // [struct _GET_PARTITION_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct get_partition_attributes_t
    {                                
        // WDK 10                
        //                       
        _m00 uint32_t version;         //{ +0x0000    } | .Version
        _m01 uint64_t attributes;      //{ +0x0008    } | .Attributes
                                     
        SDK_NONVOL_PROPERTIES( "_GET_PARTITION_ATTRIBUTES.$", 0x0, false, 0x1d7098262a8f5b0a );           
        SDK_FIXED_SIZE( get_partition_attributes_t, 0x10 );           
    };                               
};
#include "magic/get_partition_attributes_t.end.hpp"
SDK_VERIFY( struct nt::get_partition_attributes_t, 0x10 );
