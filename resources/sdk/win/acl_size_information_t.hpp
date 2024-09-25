#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acl_size_information_t.start.hpp"
namespace win
{
    // [struct _ACL_SIZE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acl_size_information_t      
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t ace_count;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AceCount
        _m01 uint32_t acl_bytes_in_use;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AclBytesInUse
        _m02 uint32_t acl_bytes_free;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AclBytesFree
                                       
        SDK_MAGIC_PROPERTIES( "_ACL_SIZE_INFORMATION.$", 0xc, true, 0x2d9ae1c24c07b263 );                 
        SDK_FIXED_SIZE( acl_size_information_t, 0xc );                 
    };                                 
};
#include "magic/acl_size_information_t.end.hpp"
SDK_VERIFY( struct win::acl_size_information_t, 0xc );
