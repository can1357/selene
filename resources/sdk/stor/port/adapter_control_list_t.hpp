#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_control_list_t.start.hpp"
namespace stor::port
{
    // [struct _ADAPTER_CONTROL_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct adapter_control_list_t                        
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint32_t                max_control_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxControlType
        _m01 sdk::array<uint8_t, 19> supported_type_list;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SupportedTypeList
                                                         
        SDK_MAGIC_PROPERTIES( "_ADAPTER_CONTROL_LIST.$", 0x18, true, 0x37bcf3bd8344a8b9 );                    
        SDK_DYNAMIC_SIZE( adapter_control_list_t );                    
    };                                                   
};
#include "magic/adapter_control_list_t.end.hpp"
