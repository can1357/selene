#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CNoExtensionRegistrationsIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_no_extension_registrations_iterator_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "CNoExtensionRegistrationsIterator.$", 0x40, true, 0x399418c424aeb566 );
        SDK_FIXED_SIZE( c_no_extension_registrations_iterator_t, 0x40 );
    };                                           
};
SDK_VERIFY( class win::c_no_extension_registrations_iterator_t, 0x40 );
