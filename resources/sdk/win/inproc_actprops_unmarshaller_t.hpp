#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class InprocActpropsUnmarshaller]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class inproc_actprops_unmarshaller_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "InprocActpropsUnmarshaller.$", 0x8, true, 0xe63e9785ddd37c15 );
        SDK_FIXED_SIZE( inproc_actprops_unmarshaller_t, 0x8 );
    };                                  
};
SDK_VERIFY( class win::inproc_actprops_unmarshaller_t, 0x8 );
