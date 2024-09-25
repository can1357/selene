#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_mark_event_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MARK_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_mark_event_t            
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               tran_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TranId
        _m01 uint8_t                level;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Level
        _m02 uint8_t                app_id;   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .AppId
        _m03 uint16_t               op_id;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .OpId
        _m04 sdk::array<wchar_t, 1> text;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Text
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MARK_EVENT.$", 0xc, true, 0x7608eaa3ff6a3fa5 );        
        SDK_FIXED_SIZE( perfinfo_mark_event_t, 0xc );        
    };                                      
};
#include "magic/perfinfo_mark_event_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_mark_event_t, 0xc );
