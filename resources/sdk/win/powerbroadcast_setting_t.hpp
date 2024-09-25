#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/powerbroadcast_setting_t.start.hpp"
namespace win
{
    // [struct POWERBROADCAST_SETTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct powerbroadcast_setting_t               
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::guid_t      power_setting;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSetting
        _m01 uint32_t               data_length;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataLength
        _m02 sdk::array<uint8_t, 1> data;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Data
                                                  
        SDK_MAGIC_PROPERTIES( "POWERBROADCAST_SETTING.$", 0x18, true, 0xd79f896a5257ceb6 );              
        SDK_FIXED_SIZE( powerbroadcast_setting_t, 0x18 );              
    };                                            
};
#include "magic/powerbroadcast_setting_t.end.hpp"
SDK_VERIFY( struct win::powerbroadcast_setting_t, 0x18 );
