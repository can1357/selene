#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netresourcea_t.start.hpp"
namespace win
{
    // [struct _NETRESOURCEA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netresourcea_t             
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t dw_scope;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwScope
        _m01 uint32_t dw_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
        _m02 uint32_t dw_display_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDisplayType
        _m03 uint32_t dw_usage;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwUsage
        _m04 char*    lp_local_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpLocalName
        _m05 char*    lp_remote_name;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpRemoteName
        _m06 char*    lp_comment;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpComment
        _m07 char*    lp_provider;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpProvider
                                      
        SDK_MAGIC_PROPERTIES( "_NETRESOURCEA.$", 0x30, true, 0xe6dfecb864da277 );                
        SDK_FIXED_SIZE( netresourcea_t, 0x30 );                
    };                                
};
#include "magic/netresourcea_t.end.hpp"
SDK_VERIFY( struct win::netresourcea_t, 0x30 );
