#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class IFxHasCallbacks]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_fx_has_callbacks_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IFxHasCallbacks.$", 0x8, true, 0x6086095d71dfbbdf );
        SDK_FIXED_SIZE( i_fx_has_callbacks_t, 0x8 );
    };                        
};
SDK_VERIFY( class wdf::i_fx_has_callbacks_t, 0x8 );
