#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_predict_failure_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PREDICT_FAILURE]
    // => WDK 10 (NV)
    //
    struct storage_predict_failure_t                  
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t                 predict_failure;  //{ +0x0000    } | .PredictFailure
        _m01 sdk::array<uint8_t, 512> vendor_specific;  //{ +0x0004    } | .VendorSpecific
                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_PREDICT_FAILURE.$", 0x0, false, 0x37aa04cee613c57f );                
        SDK_FIXED_SIZE( storage_predict_failure_t, 0x204 );                
    };                                                
};
#include "magic/storage_predict_failure_t.end.hpp"
SDK_VERIFY( struct nt::storage_predict_failure_t, 0x204 );
