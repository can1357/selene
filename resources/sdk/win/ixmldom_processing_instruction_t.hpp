#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMProcessingInstruction]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_processing_instruction_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IXMLDOMProcessingInstruction.$", 0x8, true, 0xfb4584b257d6f386 );
        SDK_FIXED_SIZE( ixmldom_processing_instruction_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::ixmldom_processing_instruction_t, 0x8 );
