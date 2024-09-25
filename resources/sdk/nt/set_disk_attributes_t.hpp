#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/set_disk_attributes_t.start.hpp"
namespace nt
{
    // [struct _SET_DISK_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct set_disk_attributes_t                    
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t          version;               //{ +0x0000    } | .Version
        _m01 uint8_t           persist;               //{ +0x0004    } | .Persist
        _m02 uint8_t           relinquish_ownership;  //{ +0x0005    } | .RelinquishOwnership
        _m03 uint64_t          attributes;            //{ +0x0008    } | .Attributes
        _m04 uint64_t          attributes_mask;       //{ +0x0010    } | .AttributesMask
        _m05 struct nt::guid_t owner;                 //{ +0x0018    } | .Owner
                                                    
        SDK_NONVOL_PROPERTIES( "_SET_DISK_ATTRIBUTES.$", 0x0, false, 0xcca072baf8c19fa4 );                     
        SDK_FIXED_SIZE( set_disk_attributes_t, 0x28 );                     
    };                                              
};
#include "magic/set_disk_attributes_t.end.hpp"
SDK_VERIFY( struct nt::set_disk_attributes_t, 0x28 );
