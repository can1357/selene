#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/set_sms_configuration_t.hpp"

#include "magic/wwan_set_sms_configuration_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_SMS_CONFIGURATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_sms_configuration_t                                 
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                              
        _m00 struct ndis::object_header_t         header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::set_sms_configuration_t set_sms_configuration;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SetSmsConfiguration
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_SMS_CONFIGURATION.$", 0x18, true, 0x44d052e1ae1d9939 );                      
        SDK_DYNAMIC_SIZE( wwan_set_sms_configuration_t );                      
    };                                                                  
};
#include "magic/wwan_set_sms_configuration_t.end.hpp"
