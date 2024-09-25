#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wfinddata64i32_t.start.hpp"
namespace win
{
    // [struct _wfinddata64i32_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wfinddata64i32_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 uint32_t                 attrib;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .attrib
        _m01 int64_t                  time_create;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .time_create
        _m02 int64_t                  time_access;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .time_access
        _m03 int64_t                  time_write;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .time_write
        _m04 uint32_t                 size;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .size
        _m05 sdk::array<wchar_t, 260> name;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .name
                                                  
        SDK_MAGIC_PROPERTIES( "_wfinddata64i32_t.$", 0x230, true, 0x540b17609712231c );            
        SDK_FIXED_SIZE( wfinddata64i32_t, 0x230 );            
    };                                            
};
#include "magic/wfinddata64i32_t.end.hpp"
SDK_VERIFY( struct win::wfinddata64i32_t, 0x230 );
