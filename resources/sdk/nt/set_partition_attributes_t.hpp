#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_partition_attributes_t.start.hpp"
namespace nt
{
    // [struct _SET_PARTITION_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct set_partition_attributes_t 
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t version;          //{ +0x0000    } | .Version
        _m01 uint8_t  persist;          //{ +0x0004    } | .Persist
        _m02 uint64_t attributes;       //{ +0x0008    } | .Attributes
        _m03 uint64_t attributes_mask;  //{ +0x0010    } | .AttributesMask
                                      
        SDK_NONVOL_PROPERTIES( "_SET_PARTITION_ATTRIBUTES.$", 0x0, false, 0x405682437cbc0ab5 );                
        SDK_FIXED_SIZE( set_partition_attributes_t, 0x18 );                
    };                                
};
#include "magic/set_partition_attributes_t.end.hpp"
SDK_VERIFY( struct nt::set_partition_attributes_t, 0x18 );
