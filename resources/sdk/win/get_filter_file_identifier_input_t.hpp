#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_filter_file_identifier_input_t.start.hpp"
namespace win
{
    // [struct _GET_FILTER_FILE_IDENTIFIER_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_filter_file_identifier_input_t       
    {                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint16_t               altitude_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AltitudeLength
        _m01 sdk::array<wchar_t, 1> altitude;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Altitude
                                                    
        SDK_NONVOL_PROPERTIES( "_GET_FILTER_FILE_IDENTIFIER_INPUT.$", 0x4, true, 0x7177ba2e91a16730 );                
        SDK_FIXED_SIZE( get_filter_file_identifier_input_t, 0x4 );                
    };                                              
};
#include "magic/get_filter_file_identifier_input_t.end.hpp"
SDK_VERIFY( struct win::get_filter_file_identifier_input_t, 0x4 );
