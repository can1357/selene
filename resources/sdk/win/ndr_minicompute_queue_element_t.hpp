#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class NDR_MINICOMPUTE_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_minicompute_queue_element_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "NDR_MINICOMPUTE_QUEUE_ELEMENT.$", 0x0, true, 0x8f5dce5359088f12 );
        SDK_FIXED_SIZE( ndr_minicompute_queue_element_t, 0x0 );
    };                                   
};
SDK_VERIFY( class win::ndr_minicompute_queue_element_t, 0x0 );
