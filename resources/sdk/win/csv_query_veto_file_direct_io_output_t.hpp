#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_query_veto_file_direct_io_output_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_veto_file_direct_io_output_t                   
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                          
        _m00 uint64_t                 vetoed_from_altitude_integral;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VetoedFromAltitudeIntegral
        _m01 uint64_t                 vetoed_from_altitude_decimal;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoedFromAltitudeDecimal
        _m02 sdk::array<wchar_t, 256> reason;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Reason
                                                                    
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT.$", 0x210, true, 0xb3baafc6b143ffb3 );                              
        SDK_FIXED_SIZE( csv_query_veto_file_direct_io_output_t, 0x210 );                              
    };                                                              
};
#include "magic/csv_query_veto_file_direct_io_output_t.end.hpp"
SDK_VERIFY( struct win::csv_query_veto_file_direct_io_output_t, 0x210 );
