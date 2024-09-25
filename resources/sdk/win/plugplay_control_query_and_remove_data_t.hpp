#pragma once
#include <sdkgen/support_library.hpp>
#include "../pnp/veto_type_t.hpp"

#include "magic/plugplay_control_query_and_remove_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_query_and_remove_data_t 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                          
        _m00 nt::unicode_view      device_instance;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 uint32_t              flags;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 enum pnp::veto_type_t veto_type;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .VetoType
        _m03 wchar_t*              veto_name;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VetoName
        _m04 uint32_t              veto_name_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VetoNameLength
                                                    
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.$", 0x28, true, 0x8e9b0faa21ec9e36 );                 
        SDK_FIXED_SIZE( plugplay_control_query_and_remove_data_t, 0x28 );                 
    };                                              
};
#include "magic/plugplay_control_query_and_remove_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_query_and_remove_data_t, 0x28 );
