#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/system_power_condition_t.hpp"

#include "magic/set_power_setting_value_t.start.hpp"
namespace win
{
    // [struct SET_POWER_SETTING_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_power_setting_value_t                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 uint32_t                          version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct nt::guid_t                 guid;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Guid
        _m02 enum nt::system_power_condition_t power_condition;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PowerCondition
        _m03 uint32_t                          data_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataLength
        _m04 sdk::array<uint8_t, 1>            data;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Data
                                                               
        SDK_MAGIC_PROPERTIES( "SET_POWER_SETTING_VALUE.$", 0x20, true, 0x75a004d73d8333a5 );                
        SDK_FIXED_SIZE( set_power_setting_value_t, 0x20 );                
    };                                                         
};
#include "magic/set_power_setting_value_t.end.hpp"
SDK_VERIFY( struct win::set_power_setting_value_t, 0x20 );
