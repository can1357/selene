#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_oid_func_entry_t.start.hpp"
namespace win
{
    // [struct _CRYPT_OID_FUNC_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_oid_func_entry_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                            
        _m00 const char* psz_oid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszOID
        _m01 void*       pv_func_addr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvFuncAddr
                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_OID_FUNC_ENTRY.$", 0x10, true, 0xee383c8e38eabb80 );             
        SDK_FIXED_SIZE( crypt_oid_func_entry_t, 0x10 );             
    };                                
};
#include "magic/crypt_oid_func_entry_t.end.hpp"
SDK_VERIFY( struct win::crypt_oid_func_entry_t, 0x10 );
