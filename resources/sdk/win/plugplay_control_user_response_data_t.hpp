#pragma once
#include <sdkgen/support_library.hpp>
#include "../pnp/veto_type_t.hpp"

#include "magic/plugplay_control_user_response_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_USER_RESPONSE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_user_response_data_t    
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                          
        _m00 uint32_t              response;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Response
        _m01 enum pnp::veto_type_t veto_type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VetoType
        _m02 wchar_t*              veto_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoName
        _m03 uint32_t              veto_name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VetoNameLength
                                                    
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_USER_RESPONSE_DATA.$", 0x18, true, 0x18b3f60a2a158ba7 );                 
        SDK_FIXED_SIZE( plugplay_control_user_response_data_t, 0x18 );                 
    };                                              
};
#include "magic/plugplay_control_user_response_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_user_response_data_t, 0x18 );
