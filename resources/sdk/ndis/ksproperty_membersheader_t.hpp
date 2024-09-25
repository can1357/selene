#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksproperty_membersheader_t.start.hpp"
namespace ndis
{
    // [struct KSPROPERTY_MEMBERSHEADER]
    // => Windows 10 v1607
    //
    struct ksproperty_membersheader_t
    {                                
        // Windows 10 v1607              
        //                          
        _m00 uint32_t members_flags;   //{ +0x0000    } | .MembersFlags
        _m01 uint32_t members_size;    //{ +0x0004    } | .MembersSize
        _m02 uint32_t members_count;   //{ +0x0008    } | .MembersCount
        _m03 uint32_t flags;           //{ +0x000c    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "KSPROPERTY_MEMBERSHEADER.$", 0x0, false, 0x4c9e8da4432f41eb );              
        SDK_FIXED_SIZE( ksproperty_membersheader_t, 0x10 );              
    };                               
};
#include "magic/ksproperty_membersheader_t.end.hpp"
SDK_VERIFY( struct ndis::ksproperty_membersheader_t, 0x10 );
