#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_mark_information_t.start.hpp"
namespace etw
{
    // [struct _ETW_SET_MARK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_mark_information_t        
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                               
        _m00 uint32_t               flag;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flag
        _m01 sdk::array<wchar_t, 1> mark;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mark
                                         
        SDK_MAGIC_PROPERTIES( "_ETW_SET_MARK_INFORMATION.$", 0x8, true, 0x7419fdee94329085 );     
        SDK_FIXED_SIZE( set_mark_information_t, 0x8 );     
    };                                   
};
#include "magic/set_mark_information_t.end.hpp"
SDK_VERIFY( struct etw::set_mark_information_t, 0x8 );
