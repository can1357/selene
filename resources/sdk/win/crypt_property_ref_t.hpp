#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_property_ref_t.start.hpp"
namespace win
{
    // [struct _CRYPT_PROPERTY_REF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_property_ref_t    
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 wchar_t* psz_property;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszProperty
        _m01 uint32_t cb_value;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbValue
        _m02 uint8_t* pb_value;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pbValue
                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_PROPERTY_REF.$", 0x18, true, 0x9b35339d06f49d59 );             
        SDK_FIXED_SIZE( crypt_property_ref_t, 0x18 );             
    };                             
};
#include "magic/crypt_property_ref_t.end.hpp"
SDK_VERIFY( struct win::crypt_property_ref_t, 0x18 );
