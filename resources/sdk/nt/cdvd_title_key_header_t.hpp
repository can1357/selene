#pragma once
#include <sdkgen/support_library.hpp>
#include "cdvd_key_data_t.hpp"

#include "magic/cdvd_title_key_header_t.start.hpp"
namespace nt
{
    // [struct _CDVD_TITLE_KEY_HEADER]
    // => WDK 10 (NV)
    //
    struct cdvd_title_key_header_t                  
    {                                               
        // WDK 10                                   
        //                                          
        _m00 sdk::array<uint8_t, 2>     data_length;  //{ +0x0000    } | .DataLength
        _m01 uint2_t                    cgms;         //{ +0x0003@3  } | .CGMS
        _m02 uint1_t                    cp_sec;       //{ +0x0003@5  } | .CP_SEC
        _m03 uint1_t                    cpm;          //{ +0x0003@6  } | .CPM
        _m04 uint1_t                    zero;         //{ +0x0003@7  } | .Zero
        _m05 struct nt::cdvd_key_data_t title_key;    //{ +0x0004    } | .TitleKey
                                                    
        SDK_NONVOL_PROPERTIES( "_CDVD_TITLE_KEY_HEADER.$", 0x0, false, 0x9234de560c925c99 );            
        SDK_FIXED_SIZE( cdvd_title_key_header_t, 0xc );            
    };                                              
};
#include "magic/cdvd_title_key_header_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_title_key_header_t, 0xc );
