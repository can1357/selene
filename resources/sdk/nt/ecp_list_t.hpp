#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ecp_list_t.start.hpp"
namespace nt
{
    // [struct _ECP_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ecp_list_t                   
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 uint32_t         signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t         flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 nt::list_entry_t ecp_list;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EcpList
                                        
        SDK_MAGIC_PROPERTIES( "_ECP_LIST.$", 0x18, true, 0xe0ae11495ed65b8d );          
        SDK_DYNAMIC_SIZE( ecp_list_t );          
    };                                  
};
#include "magic/ecp_list_t.end.hpp"
