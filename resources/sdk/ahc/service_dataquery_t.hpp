#pragma once
#include <sdkgen/support_library.hpp>
#include "statistics_t.hpp"

#include "magic/service_dataquery_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_DATAQUERY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_dataquery_t                  
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct ahc::statistics_t stats;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Stats
        _m01 uint32_t                 data_size;  //{ +0x0030    +0x0034    +0x0034    +0x0034    } | .DataSize
        _m02 uint8_t*                 data;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Data
                                                
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_DATAQUERY.$", 0x40, true, 0x2764bbbbeb0ba7b7 );          
        SDK_FIXED_SIZE( service_dataquery_t, 0x40 );          
    };                                          
};
#include "magic/service_dataquery_t.end.hpp"
SDK_VERIFY( struct ahc::service_dataquery_t, 0x40 );
