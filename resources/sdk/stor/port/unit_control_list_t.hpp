#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unit_control_list_t.start.hpp"
namespace stor::port
{
    // [struct _UNIT_CONTROL_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unit_control_list_t                           
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint32_t                max_control_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxControlType
        _m01 sdk::array<uint8_t, 12> supported_type_list;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SupportedTypeList
                                                         
        SDK_MAGIC_PROPERTIES( "_UNIT_CONTROL_LIST.$", 0x14, true, 0x8af9bbe773160e5 );                    
        SDK_DYNAMIC_SIZE( unit_control_list_t );                    
    };                                                   
};
#include "magic/unit_control_list_t.end.hpp"
