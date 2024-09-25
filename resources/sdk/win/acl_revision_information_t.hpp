#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acl_revision_information_t.start.hpp"
namespace win
{
    // [struct _ACL_REVISION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acl_revision_information_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t acl_revision;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AclRevision
                                     
        SDK_MAGIC_PROPERTIES( "_ACL_REVISION_INFORMATION.$", 0x4, true, 0x45b7662c9daff2f2 );             
        SDK_FIXED_SIZE( acl_revision_information_t, 0x4 );             
    };                               
};
#include "magic/acl_revision_information_t.end.hpp"
SDK_VERIFY( struct win::acl_revision_information_t, 0x4 );
