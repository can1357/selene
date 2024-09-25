#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_attributes_t.start.hpp"
namespace win
{
    struct crypt_attribute_t;

    // [struct _CRYPT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_attributes_t                       
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 uint32_t                       c_attr;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cAttr
        _m01 struct win::crypt_attribute_t* rg_attr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgAttr
                                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_ATTRIBUTES.$", 0x10, true, 0xa184295b344675d2 );        
        SDK_FIXED_SIZE( crypt_attributes_t, 0x10 );        
    };                                              
};
#include "magic/crypt_attributes_t.end.hpp"
SDK_VERIFY( struct win::crypt_attributes_t, 0x10 );
