#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYSTATISTICS_QUERY_NODE]
    // => WDK 10
    //
    struct querystatistics_query_node_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_D3DKMT_QUERYSTATISTICS_QUERY_NODE.$", 0x0, false, 0x96e3c68ae194f049 );
        SDK_FIXED_SIZE( querystatistics_query_node_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct d3dk::mt::querystatistics_query_node_t, 0x0 );
