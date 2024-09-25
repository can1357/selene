#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/restricted_modwrites_t.start.hpp"
namespace mi
{
    // [struct _MI_RESTRICTED_MODWRITES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct restricted_modwrites_t           
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint8_t maximum_cluster_pages;   //{ +0x0000    +0x0000    +0x0000    } | .MaximumClusterPages
        _m01 uint8_t reduced_cluster_writes;  //{ +0x0001    +0x0001    +0x0001    } | .ReducedClusterWrites
        _m02 uint8_t impose_delay;            //{ +0x0002    +0x0002    +0x0002    } | .ImposeDelay
                                            
        SDK_MAGIC_PROPERTIES( "_MI_RESTRICTED_MODWRITES.$", 0x3, true, 0x916c34c09a1f3055 );                       
        SDK_FIXED_SIZE( restricted_modwrites_t, 0x3 );                       
    };                                      
};
#include "magic/restricted_modwrites_t.end.hpp"
SDK_VERIFY( struct mi::restricted_modwrites_t, 0x3 );
