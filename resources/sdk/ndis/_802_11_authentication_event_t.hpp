#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_status_indication_t.hpp"
#include "_802_11_authentication_request_t.hpp"

#include "magic/_802_11_authentication_event_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_AUTHENTICATION_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_authentication_event_t                     
    {                                                         
        using request_t = sdk::array<struct ndis::_802_11_authentication_request_t, 1>;        
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                    
        _m00 struct ndis::_802_11_status_indication_t status;   //{ +0x0000    +0x0000    +0x0000    } | .Status
        _m01 request_t                                request;  //{ +0x0004    +0x0004    +0x0004    } | .Request
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_AUTHENTICATION_EVENT.$", 0x14, true, 0xd42093aa7cc4c6a3 );        
        SDK_FIXED_SIZE( _802_11_authentication_event_t, 0x14 );        
    };                                                        
};
#include "magic/_802_11_authentication_event_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_authentication_event_t, 0x14 );
