#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMCDATASection]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldomcdata_section_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IXMLDOMCDATASection.$", 0x8, true, 0xe4701b6db3b7a4bc );
        SDK_FIXED_SIZE( ixmldomcdata_section_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::ixmldomcdata_section_t, 0x8 );
