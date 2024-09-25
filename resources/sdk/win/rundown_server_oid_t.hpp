#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/rundown_server_oid_t.start.hpp"
namespace win
{
    // [struct RundownServerOID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rundown_server_oid_t                      
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                           
        _m00 uint64_t          oid;                    //{ +0x0000    +0x0000    +0x0000    } | .oid
        _m01 struct nt::guid_t implemented_interface;  //{ +0x0008    +0x0008    +0x0008    } | .implementedInterface
                                                     
        SDK_MAGIC_PROPERTIES( "RundownServerOID.$", 0x18, true, 0xc3b07a99170d68d7 );                      
        SDK_FIXED_SIZE( rundown_server_oid_t, 0x18 );                      
    };                                               
};
#include "magic/rundown_server_oid_t.end.hpp"
SDK_VERIFY( struct win::rundown_server_oid_t, 0x18 );
