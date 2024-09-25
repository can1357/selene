#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_filter_file_identifier_output_t.start.hpp"
namespace win
{
    // [struct _GET_FILTER_FILE_IDENTIFIER_OUTPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_filter_file_identifier_output_t                    
    {                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                        
        _m00 uint16_t               filter_file_identifier_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterFileIdentifierLength
        _m01 sdk::array<uint8_t, 1> filter_file_identifier;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FilterFileIdentifier
                                                                  
        SDK_NONVOL_PROPERTIES( "_GET_FILTER_FILE_IDENTIFIER_OUTPUT.$", 0x4, true, 0x4fd41521a30623ed );                              
        SDK_FIXED_SIZE( get_filter_file_identifier_output_t, 0x4 );                              
    };                                                            
};
#include "magic/get_filter_file_identifier_output_t.end.hpp"
SDK_VERIFY( struct win::get_filter_file_identifier_output_t, 0x4 );
