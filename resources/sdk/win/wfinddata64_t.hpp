#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wfinddata64_t.start.hpp"
namespace win
{
    // [struct _wfinddata64_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wfinddata64_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 uint32_t                 attrib;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .attrib
        _m01 int64_t                  time_create;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .time_create
        _m02 int64_t                  time_access;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .time_access
        _m03 int64_t                  time_write;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .time_write
        _m04 int64_t                  size;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .size
        _m05 sdk::array<wchar_t, 260> name;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .name
                                                  
        SDK_MAGIC_PROPERTIES( "_wfinddata64_t.$", 0x230, true, 0x4d08cc245fb5b9b8 );            
        SDK_FIXED_SIZE( wfinddata64_t, 0x230 );            
    };                                            
};
#include "magic/wfinddata64_t.end.hpp"
SDK_VERIFY( struct win::wfinddata64_t, 0x230 );
