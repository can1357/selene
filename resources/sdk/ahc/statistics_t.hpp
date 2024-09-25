#pragma once
#include <sdkgen/support_library.hpp>
#include "main_statistics_t.hpp"
#include "store_statistics_t.hpp"

#include "magic/statistics_t.start.hpp"
namespace ahc
{
    // [struct _AHC_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statistics_t                           
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                        
        _m00 uint32_t                       size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct ahc::main_statistics_t  main;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Main
        _m02 struct ahc::store_statistics_t store;  //{ +0x001c    +0x0020    +0x0020    +0x0020    } | .Store
                                                  
        SDK_MAGIC_PROPERTIES( "_AHC_STATISTICS.$", 0x34, true, 0x24b0a7b2c8d28ae3 );      
        SDK_DYNAMIC_SIZE( statistics_t );         
    };                                            
};
#include "magic/statistics_t.end.hpp"
