#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trustlet_attribute_accessrights_t.start.hpp"
namespace ps
{
    // [union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union trustlet_attribute_accessrights_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint1_t trustlet;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Trustlet
        _m01 uint1_t ntos;                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Ntos
        _m02 uint1_t write_handle;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .WriteHandle
        _m03 uint1_t read_handle;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ReadHandle
        _m04 uint8_t access_rights;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AccessRights
                                           
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.$", 0x1, true, 0x6d73915a13a2b9db );              
        SDK_FIXED_SIZE( trustlet_attribute_accessrights_t, 0x1 );              
    };                                     
};
#include "magic/trustlet_attribute_accessrights_t.end.hpp"
SDK_VERIFY( union ps::trustlet_attribute_accessrights_t, 0x1 );
