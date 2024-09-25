#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_oid_list_t.start.hpp"
namespace win
{
    struct bcrypt_oid_t;

    // [struct _BCRYPT_OID_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_oid_list_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 uint32_t                  dw_oid_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOIDCount
        _m01 struct win::bcrypt_oid_t* p_oi_ds;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pOIDs
                                                    
        SDK_MAGIC_PROPERTIES( "_BCRYPT_OID_LIST.$", 0x10, true, 0x3f86c336d23cb05d );             
        SDK_FIXED_SIZE( bcrypt_oid_list_t, 0x10 );             
    };                                              
};
#include "magic/bcrypt_oid_list_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_oid_list_t, 0x10 );
