#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_oid_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_OID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_oid_t      
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t cb_oid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbOID
        _m01 uint8_t* pb_oid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbOID
                             
        SDK_MAGIC_PROPERTIES( "_BCRYPT_OID.$", 0x10, true, 0xa72932415a71e0a2 );       
        SDK_FIXED_SIZE( bcrypt_oid_t, 0x10 );       
    };                       
};
#include "magic/bcrypt_oid_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_oid_t, 0x10 );
