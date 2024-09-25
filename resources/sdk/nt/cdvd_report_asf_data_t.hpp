#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_report_asf_data_t.start.hpp"
namespace nt
{
    // [struct _CDVD_REPORT_ASF_DATA]
    // => WDK 10 (NV)
    //
    struct cdvd_report_asf_data_t
    {                            
        // WDK 10            
        //                   
        _m00 uint1_t success;      //{ +0x0003@0  } | .Success
                                 
        SDK_NONVOL_PROPERTIES( "_CDVD_REPORT_ASF_DATA.$", 0x0, false, 0xbc006c5be93024f1 );        
        SDK_FIXED_SIZE( cdvd_report_asf_data_t, 0x4 );        
    };                           
};
#include "magic/cdvd_report_asf_data_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_report_asf_data_t, 0x4 );
