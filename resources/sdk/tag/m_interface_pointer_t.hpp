#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/m_interface_pointer_t.start.hpp"
namespace tag
{
    // [struct tagMInterfacePointer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct m_interface_pointer_t                
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               ul_cnt_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulCntData
        _m01 sdk::array<uint8_t, 1> ab_data;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .abData
                                                
        SDK_MAGIC_PROPERTIES( "tagMInterfacePointer.$", 0x8, true, 0x1b49c615a95ee57 );            
        SDK_FIXED_SIZE( m_interface_pointer_t, 0x8 );            
    };                                          
};
#include "magic/m_interface_pointer_t.end.hpp"
SDK_VERIFY( struct tag::m_interface_pointer_t, 0x8 );
