#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stream_acl_t.start.hpp"
namespace tag
{
    struct stream_ace_t;

    // [struct tagSTREAM_ACL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stream_acl_t                                        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m00 uint32_t                  ul_num_of_deny_entries;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulNumOfDenyEntries
        _m01 uint32_t                  ul_num_of_grant_entries;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulNumOfGrantEntries
        _m02 struct tag::stream_ace_t* p_acl;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pACL
                                                               
        SDK_MAGIC_PROPERTIES( "tagSTREAM_ACL.$", 0x10, true, 0x440dd73330e93f47 );                        
        SDK_FIXED_SIZE( stream_acl_t, 0x10 );                        
    };                                                         
};
#include "magic/stream_acl_t.end.hpp"
SDK_VERIFY( struct tag::stream_acl_t, 0x10 );
