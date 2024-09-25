#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_conflict_strings_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_CONFLICT_STRINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_conflict_strings_t              
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint32_t               null_device_instance;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NullDeviceInstance
        _m01 sdk::array<wchar_t, 1> device_instance_strings;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceInstanceStrings
                                                            
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_CONFLICT_STRINGS.$", 0x8, true, 0x2bd77ba77bba5ee3 );                        
        SDK_FIXED_SIZE( plugplay_control_conflict_strings_t, 0x8 );                        
    };                                                      
};
#include "magic/plugplay_control_conflict_strings_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_conflict_strings_t, 0x8 );
