#pragma once
#include <sdkgen/support_library.hpp>
#include "track_data_t.hpp"

#include "magic/cdrom_toc_session_data_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC_SESSION_DATA]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_session_data_t                                        
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 sdk::array<uint8_t, 2>                 length;                  //{ +0x0000    } | .Length
        _m01 uint8_t                                first_complete_session;  //{ +0x0002    } | .FirstCompleteSession
        _m02 uint8_t                                last_complete_session;   //{ +0x0003    } | .LastCompleteSession
        _m03 sdk::array<struct nt::track_data_t, 1> track_data;              //{ +0x0004    } | .TrackData
                                                                           
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC_SESSION_DATA.$", 0x0, false, 0x6586df7c58c3aaec );                       
        SDK_FIXED_SIZE( cdrom_toc_session_data_t, 0xc );                       
    };                                                                     
};
#include "magic/cdrom_toc_session_data_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_session_data_t, 0xc );
