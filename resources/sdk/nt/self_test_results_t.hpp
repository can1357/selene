#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/self_test_results_t.start.hpp"
namespace nt
{
    // [struct _SELF_TEST_RESULTS]
    // => WDK 10 (NV)
    //
    struct self_test_results_t                                      
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint4_t                self_test_results;                //{ +0x0000@0  } | .SelfTestResults
        _m01 uint3_t                self_test_code;                   //{ +0x0000@5  } | .SelfTestCode
        _m02 uint8_t                self_test_number;                 //{ +0x0001    } | .SelfTestNumber
        _m03 sdk::array<uint8_t, 2> power_on_hours;                   //{ +0x0002    } | .PowerOnHours
        _m04 sdk::array<uint8_t, 8> address_of_first_failure;         //{ +0x0004    } | .AddressOfFirstFailure
        _m05 uint4_t                sense_key;                        //{ +0x000c@0  } | .SenseKey
        _m06 uint8_t                additional_sense_code;            //{ +0x000d    } | .AdditionalSenseCode
        _m07 uint8_t                additional_sense_code_qualifier;  //{ +0x000e    } | .AdditionalSenseCodeQualifier
        _m08 uint8_t                vendor_specific;                  //{ +0x000f    } | .VendorSpecific
                                                                    
        SDK_NONVOL_PROPERTIES( "_SELF_TEST_RESULTS.$", 0x0, false, 0x14fef515f00a00a0 );                                
        SDK_FIXED_SIZE( self_test_results_t, 0x10 );                                
    };                                                              
};
#include "magic/self_test_results_t.end.hpp"
SDK_VERIFY( struct nt::self_test_results_t, 0x10 );
