#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_failure_prediction_config_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FAILURE_PREDICTION_CONFIG]
    // => WDK 10 (NV)
    //
    struct storage_failure_prediction_config_t
    {                                         
        // WDK 10             
        //                    
        _m00 uint32_t version;                  //{ +0x0000    } | .Version
        _m01 uint32_t size;                     //{ +0x0004    } | .Size
        _m02 uint8_t  set;                      //{ +0x0008    } | .Set
        _m03 uint8_t  enabled;                  //{ +0x0009    } | .Enabled
                                              
        SDK_NONVOL_PROPERTIES( "_STORAGE_FAILURE_PREDICTION_CONFIG.$", 0x0, false, 0x6f6252847733364 );        
        SDK_FIXED_SIZE( storage_failure_prediction_config_t, 0xc );        
    };                                        
};
#include "magic/storage_failure_prediction_config_t.end.hpp"
SDK_VERIFY( struct nt::storage_failure_prediction_config_t, 0xc );
