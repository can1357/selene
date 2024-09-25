#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netresourcew_t.start.hpp"
namespace win
{
    // [struct _NETRESOURCEW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netresourcew_t             
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t dw_scope;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwScope
        _m01 uint32_t dw_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
        _m02 uint32_t dw_display_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDisplayType
        _m03 uint32_t dw_usage;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwUsage
        _m04 wchar_t* lp_local_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpLocalName
        _m05 wchar_t* lp_remote_name;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpRemoteName
        _m06 wchar_t* lp_comment;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpComment
        _m07 wchar_t* lp_provider;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpProvider
                                      
        SDK_MAGIC_PROPERTIES( "_NETRESOURCEW.$", 0x30, true, 0x58165a50289513f9 );                
        SDK_FIXED_SIZE( netresourcew_t, 0x30 );                
    };                                
};
#include "magic/netresourcew_t.end.hpp"
SDK_VERIFY( struct win::netresourcew_t, 0x30 );
