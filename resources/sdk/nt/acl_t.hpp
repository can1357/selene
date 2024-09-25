#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acl_t.start.hpp"
namespace nt
{
    // [struct _ACL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct acl_t                   
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint8_t  acl_revision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AclRevision
        _m01 uint8_t  sbz1;          //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Sbz1
        _m02 uint16_t acl_size;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .AclSize
        _m03 uint16_t ace_count;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AceCount
        _m04 uint16_t sbz2;          //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Sbz2
                                   
        SDK_NONVOL_PROPERTIES( "_ACL.$", 0x8, true, 0xe538e7ca0152a667 );             
        SDK_FIXED_SIZE( acl_t, 0x8 );             
    };                             
};
#include "magic/acl_t.end.hpp"
SDK_VERIFY( struct nt::acl_t, 0x8 );
