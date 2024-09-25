#pragma once
#include <sdkgen/support_library.hpp>
#include "registry_key_t.hpp"

#include "magic/c_custom_properties_t.start.hpp"
namespace win
{
    // [class CCustomProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_custom_properties_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m00 uint8_t                   trace_events;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._traceEvents
        _m01 class win::registry_key_t custom_properties_key;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._customPropertiesKey
                                                             
        SDK_MAGIC_PROPERTIES( "CCustomProperties.$", 0x48, true, 0x646949b5966ccfa6 );                      
        SDK_FIXED_SIZE( c_custom_properties_t, 0x48 );                      
    };                                                       
};
#include "magic/c_custom_properties_t.end.hpp"
SDK_VERIFY( class win::c_custom_properties_t, 0x48 );
