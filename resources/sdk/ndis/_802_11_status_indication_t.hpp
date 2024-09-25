#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_status_type_t.hpp"

#include "magic/_802_11_status_indication_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_STATUS_INDICATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_status_indication_t                    
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                
        _m00 enum ndis::_802_11_status_type_t status_type;  //{ +0x0000    +0x0000    +0x0000    } | .StatusType
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_STATUS_INDICATION.$", 0x4, true, 0x8f7f2c95c259e8e5 );            
        SDK_FIXED_SIZE( _802_11_status_indication_t, 0x4 );            
    };                                                    
};
#include "magic/_802_11_status_indication_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_status_indication_t, 0x4 );
