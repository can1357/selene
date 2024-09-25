#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/group_membership_t.start.hpp"
namespace nt
{
    // [struct _GROUP_MEMBERSHIP]
    // => WDK 10 (NV)
    //
    struct group_membership_t     
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t relative_id;  //{ +0x0000    } | .RelativeId
        _m01 uint32_t attributes;   //{ +0x0004    } | .Attributes
                                  
        SDK_NONVOL_PROPERTIES( "_GROUP_MEMBERSHIP.$", 0x0, false, 0xa3834c098648e733 );            
        SDK_FIXED_SIZE( group_membership_t, 0x8 );            
    };                            
};
#include "magic/group_membership_t.end.hpp"
SDK_VERIFY( struct nt::group_membership_t, 0x8 );
