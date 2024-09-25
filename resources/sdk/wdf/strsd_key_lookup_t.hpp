#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/strsd_key_lookup_t.start.hpp"
namespace wdf
{
    // [struct _STRSD_KEY_LOOKUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct strsd_key_lookup_t 
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 wchar_t* key;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 uint32_t key_len;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyLen
        _m02 uint32_t value;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Value
                              
        SDK_MAGIC_PROPERTIES( "_STRSD_KEY_LOOKUP.$", 0x10, true, 0x399e6a1577a88611 );        
        SDK_FIXED_SIZE( strsd_key_lookup_t, 0x10 );        
    };                        
};
#include "magic/strsd_key_lookup_t.end.hpp"
SDK_VERIFY( struct wdf::strsd_key_lookup_t, 0x10 );
