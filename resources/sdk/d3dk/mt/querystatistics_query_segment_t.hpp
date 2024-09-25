#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYSTATISTICS_QUERY_SEGMENT]
    // => WDK 10
    //
    struct querystatistics_query_segment_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "_D3DKMT_QUERYSTATISTICS_QUERY_SEGMENT.$", 0x0, false, 0x1d41d3f72014e67e );
        SDK_FIXED_SIZE( querystatistics_query_segment_t, 0x0 );
    };                                    
};
SDK_VERIFY( struct d3dk::mt::querystatistics_query_segment_t, 0x0 );
