#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/saved_internal_status_parameter_data_t.start.hpp"
namespace nt
{
    // [struct _SAVED_INTERNAL_STATUS_PARAMETER_DATA]
    // => WDK 10 (NV)
    //
    struct saved_internal_status_parameter_data_t                                 
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 sdk::array<uint8_t, 4>   ieee_company_id;                              //{ +0x0004    } | .IEEECompanyId
        _m01 sdk::array<uint8_t, 2>   saved_internal_status_data_set_one_length;    //{ +0x0008    } | .SavedInternalStatusDataSetOneLength
        _m02 sdk::array<uint8_t, 2>   saved_internal_status_data_set_two_length;    //{ +0x000a    } | .SavedInternalStatusDataSetTwoLength
        _m03 sdk::array<uint8_t, 2>   saved_internal_status_data_set_three_length;  //{ +0x000c    } | .SavedInternalStatusDataSetThreeLength
        _m04 sdk::array<uint8_t, 4>   saved_internal_status_data_set_four_length;   //{ +0x000e    } | .SavedInternalStatusDataSetFourLength
        _m05 uint8_t                  new_saved_data_available;                     //{ +0x017e    } | .NewSavedDataAvailable
        _m06 uint8_t                  saved_data_generation_number;                 //{ +0x017f    } | .SavedDataGenerationNumber
        _m07 sdk::array<uint8_t, 128> saved_reason_identifier;                      //{ +0x0180    } | .SavedReasonIdentifier
        _m08 sdk::array<uint8_t, 1>   saved_internal_status_data;                   //{ +0x0200    } | .SavedInternalStatusData
                                                                                  
        SDK_NONVOL_PROPERTIES( "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.$", 0x0, false, 0x4f49f734289f8aa7 );                                            
        SDK_FIXED_SIZE( saved_internal_status_parameter_data_t, 0x201 );                                            
    };                                                                            
};
#include "magic/saved_internal_status_parameter_data_t.end.hpp"
SDK_VERIFY( struct nt::saved_internal_status_parameter_data_t, 0x201 );
