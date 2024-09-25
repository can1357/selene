#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/periodic_capture_state_guids_t.start.hpp"
namespace nt
{
    struct guid_t;

    // [struct _PERIODIC_CAPTURE_STATE_GUIDS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct periodic_capture_state_guids_t      
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                     
        _m00 uint16_t           provider_count;  //{ +0x0000    +0x0000    +0x0000    } | .ProviderCount
        _m01 struct nt::guid_t* providers;       //{ +0x0008    +0x0008    +0x0008    } | .Providers
                                               
        SDK_MAGIC_PROPERTIES( "_PERIODIC_CAPTURE_STATE_GUIDS.$", 0x10, true, 0xdaa860f6380ac9fd );               
        SDK_FIXED_SIZE( periodic_capture_state_guids_t, 0x10 );               
    };                                         
};
#include "magic/periodic_capture_state_guids_t.end.hpp"
SDK_VERIFY( struct nt::periodic_capture_state_guids_t, 0x10 );
