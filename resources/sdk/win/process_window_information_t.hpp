#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_window_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_WINDOW_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_window_information_t                 
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint32_t               window_flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WindowFlags
        _m01 uint16_t               window_title_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WindowTitleLength
        _m02 sdk::array<wchar_t, 1> window_title;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .WindowTitle
                                                        
        SDK_MAGIC_PROPERTIES( "_PROCESS_WINDOW_INFORMATION.$", 0x8, true, 0x434d08dc4a852b7b );                    
        SDK_FIXED_SIZE( process_window_information_t, 0x8 );                    
    };                                                  
};
#include "magic/process_window_information_t.end.hpp"
SDK_VERIFY( struct win::process_window_information_t, 0x8 );
