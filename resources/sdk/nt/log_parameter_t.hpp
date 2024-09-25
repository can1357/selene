#pragma once
#include <sdkgen/support_library.hpp>
#include "temperature_t.hpp"
#include "self_test_results_t.hpp"
#include "solid_state_media_t.hpp"
#include "date_of_manufacture_t.hpp"
#include "log_parameter_header_t.hpp"
#include "background_scan_status_t.hpp"
#include "informational_exceptions_t.hpp"
#include "threshold_resource_count_t.hpp"

#include "magic/log_parameter_t.start.hpp"
namespace nt
{
    // [struct _LOG_PARAMETER]
    // => WDK 10 (NV)
    //
    struct log_parameter_t                                                  
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 struct nt::log_parameter_header_t     header;                    //{ +0x0000    } | .Header
        _m01 sdk::array<uint8_t>                   as_byte;                   //{ +0x0004    } | .AsByte
        _m02 struct nt::threshold_resource_count_t threshold_resource_count;  //{ +0x0004    } | .THRESHOLD_RESOURCE_COUNT
        _m03 struct nt::temperature_t              temperature;               //{ +0x0004    } | .TEMPERATURE
        _m04 struct nt::date_of_manufacture_t      date_of_manufacture;       //{ +0x0004    } | .DATE_OF_MANUFACTURE
        _m05 struct nt::self_test_results_t        self_test_results;         //{ +0x0004    } | .SELF_TEST_RESULTS
        _m06 struct nt::solid_state_media_t        solid_state_media;         //{ +0x0004    } | .SOLID_STATE_MEDIA
        _m07 struct nt::background_scan_status_t   background_scan_status;    //{ +0x0004    } | .BACKGROUND_SCAN_STATUS
        _m08 struct nt::informational_exceptions_t informational_exceptions;  //{ +0x0004    } | .INFORMATIONAL_EXCEPTIONS
                                                                            
        SDK_NONVOL_PROPERTIES( "_LOG_PARAMETER.$", 0x0, false, 0xf8ae46931a14e4a1 );                         
        SDK_FIXED_SIZE( log_parameter_t, 0x14 );                            
    };                                                                      
};
#include "magic/log_parameter_t.end.hpp"
SDK_VERIFY( struct nt::log_parameter_t, 0x14 );
