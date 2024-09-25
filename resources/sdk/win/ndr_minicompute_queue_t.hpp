#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class NDR_MINICOMPUTE_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_minicompute_queue_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "NDR_MINICOMPUTE_QUEUE.$", 0x0, true, 0x727bae0c82d5248a );
        SDK_FIXED_SIZE( ndr_minicompute_queue_t, 0x0 );
    };                           
};
SDK_VERIFY( class win::ndr_minicompute_queue_t, 0x0 );
