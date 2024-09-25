#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntscsi_unicode_string_t.start.hpp"
namespace nt
{
    // [struct _NTSCSI_UNICODE_STRING]
    // => WDK 10 (NV)
    //
    struct ntscsi_unicode_string_t   
    {                                
        // WDK 10                    
        //                           
        _m00 uint16_t length;          //{ +0x0000    } | .Length
        _m01 uint16_t maximum_length;  //{ +0x0002    } | .MaximumLength
        _m02 wchar_t* buffer;          //{ +0x0008    } | .Buffer
                                     
        SDK_NONVOL_PROPERTIES( "_NTSCSI_UNICODE_STRING.$", 0x0, false, 0x9c802318b873bf49 );               
        SDK_FIXED_SIZE( ntscsi_unicode_string_t, 0x10 );               
    };                               
};
#include "magic/ntscsi_unicode_string_t.end.hpp"
SDK_VERIFY( struct nt::ntscsi_unicode_string_t, 0x10 );
