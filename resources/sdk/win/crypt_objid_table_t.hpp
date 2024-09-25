#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_objid_table_t.start.hpp"
namespace win
{
    // [struct _CRYPT_OBJID_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_objid_table_t      
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                          
        _m00 uint32_t    dw_alg_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAlgId
        _m01 const char* psz_obj_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszObjId
                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_OBJID_TABLE.$", 0x10, true, 0xf8053681c471a4ea );           
        SDK_FIXED_SIZE( crypt_objid_table_t, 0x10 );           
    };                              
};
#include "magic/crypt_objid_table_t.end.hpp"
SDK_VERIFY( struct win::crypt_objid_table_t, 0x10 );
