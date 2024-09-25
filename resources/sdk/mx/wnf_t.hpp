#pragma once
#include <sdkgen/support_library.hpp>

namespace mx
{
    // [class MxWnf]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wnf_t
    {          
               
        SDK_MAGIC_PROPERTIES( "MxWnf.$", 0x1, true, 0xa65fa2bc8ba986c5 );
        SDK_FIXED_SIZE( wnf_t, 0x1 );
    };         
};
SDK_VERIFY( class mx::wnf_t, 0x1 );
