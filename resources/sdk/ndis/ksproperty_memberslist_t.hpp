#pragma once
#include <sdkgen/support_library.hpp>
#include "ksproperty_membersheader_t.hpp"

#include "magic/ksproperty_memberslist_t.start.hpp"
namespace ndis
{
    // [struct KSPROPERTY_MEMBERSLIST]
    // => Windows 10 v1607
    //
    struct ksproperty_memberslist_t                                 
    {                                                               
        // Windows 10 v1607                                         
        //                                                          
        _m00 struct ndis::ksproperty_membersheader_t members_header;  //{ +0x0000    } | .MembersHeader
        _m01 const void*                             members;         //{ +0x0010    } | .Members
                                                                    
        SDK_MAGIC_PROPERTIES( "KSPROPERTY_MEMBERSLIST.$", 0x0, false, 0x894b3a5e561f118f );               
        SDK_FIXED_SIZE( ksproperty_memberslist_t, 0x18 );               
    };                                                              
};
#include "magic/ksproperty_memberslist_t.end.hpp"
SDK_VERIFY( struct ndis::ksproperty_memberslist_t, 0x18 );
