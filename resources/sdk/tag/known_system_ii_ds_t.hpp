#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/known_system_ii_ds_t.start.hpp"
namespace tag
{
    // [struct tagKnownSystemIIDs]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct known_system_ii_ds_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 const struct nt::guid_t* p_iid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIID
        _m01 uint32_t                 dw_rpc_if_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwRpcIfFlags
                                                      
        SDK_MAGIC_PROPERTIES( "tagKnownSystemIIDs.$", 0x10, true, 0x482f813649964a02 );                
        SDK_FIXED_SIZE( known_system_ii_ds_t, 0x10 );                
    };                                                
};
#include "magic/known_system_ii_ds_t.end.hpp"
SDK_VERIFY( struct tag::known_system_ii_ds_t, 0x10 );
