#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_report_agid_data_t.start.hpp"
namespace nt
{
    // [struct _CDVD_REPORT_AGID_DATA]
    // => WDK 10 (NV)
    //
    struct cdvd_report_agid_data_t
    {                             
        // WDK 10         
        //                
        _m00 uint2_t agid;          //{ +0x0003@6  } | .AGID
                                  
        SDK_NONVOL_PROPERTIES( "_CDVD_REPORT_AGID_DATA.$", 0x0, false, 0xeaa7bbaf70874e );     
        SDK_FIXED_SIZE( cdvd_report_agid_data_t, 0x4 );     
    };                            
};
#include "magic/cdvd_report_agid_data_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_report_agid_data_t, 0x4 );
