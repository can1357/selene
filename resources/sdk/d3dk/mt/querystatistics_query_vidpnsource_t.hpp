#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYSTATISTICS_QUERY_VIDPNSOURCE]
    // => WDK 10
    //
    struct querystatistics_query_vidpnsource_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "_D3DKMT_QUERYSTATISTICS_QUERY_VIDPNSOURCE.$", 0x0, false, 0xf38b325ed57e8072 );
        SDK_FIXED_SIZE( querystatistics_query_vidpnsource_t, 0x0 );
    };                                        
};
SDK_VERIFY( struct d3dk::mt::querystatistics_query_vidpnsource_t, 0x0 );
