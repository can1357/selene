#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/guid_string_t.start.hpp"
namespace win
{
    // [class GuidString]
    // => Windows 11
    //
    class guid_string_t                       
    {                                         
        // Windows 11                         
        //                                    
        _m00 sdk::array<wchar_t, 39> m_string;  //{ +0x0000    } | .m_string
                                              
        SDK_MAGIC_PROPERTIES( "GuidString.$", 0x0, false, 0xc3a0e657e2fdd17e );         
        SDK_FIXED_SIZE( guid_string_t, 0x4e );         
    };                                        
};
#include "magic/guid_string_t.end.hpp"
SDK_VERIFY( class win::guid_string_t, 0x4e );
