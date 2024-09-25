#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExtensionPackagesIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_extension_packages_iterator_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "IExtensionPackagesIterator.$", 0x8, true, 0x17458fb95c8ebfb );
        SDK_FIXED_SIZE( i_extension_packages_iterator_t, 0x8 );
    };                                    
};
SDK_VERIFY( struct win::i_extension_packages_iterator_t, 0x8 );
