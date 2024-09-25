#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [union _D3DKMT_QUERYSTATISTICS_RESULT]
    // => WDK 10
    //
    union querystatistics_result_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_D3DKMT_QUERYSTATISTICS_RESULT.$", 0x0, false, 0x604ede533099a151 );
        SDK_FIXED_SIZE( querystatistics_result_t, 0x0 );
    };                            
};
SDK_VERIFY( union d3dk::mt::querystatistics_result_t, 0x0 );
