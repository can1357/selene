#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/spr_active_session_data_t.start.hpp"
namespace po
{
    // [struct _PO_SPR_ACTIVE_SESSION_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spr_active_session_data_t               
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 uint8_t           start;                //{ +0x0000    +0x0000    +0x0000    } | .Start
        _m01 struct nt::guid_t active_session_guid;  //{ +0x0004    +0x0004    +0x0004    } | .ActiveSessionGuid
                                                   
        SDK_MAGIC_PROPERTIES( "_PO_SPR_ACTIVE_SESSION_DATA.$", 0x14, true, 0xc2dc1a79d380d902 );                    
        SDK_FIXED_SIZE( spr_active_session_data_t, 0x14 );                    
    };                                             
};
#include "magic/spr_active_session_data_t.end.hpp"
SDK_VERIFY( struct po::spr_active_session_data_t, 0x14 );
