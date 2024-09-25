#pragma once
#include <sdkgen/support_library.hpp>
#include "description_header_t.hpp"

#include "magic/mapic_t.start.hpp"
namespace nt
{
    // [struct _MAPIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mapic_t                                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                      
        _m00 struct nt::description_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                        local_apic_address;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .LocalAPICAddress
        _m02 uint32_t                        flags;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m03 sdk::array<uint32_t, 1>         apic_tables;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .APICTables
                                                                
        SDK_MAGIC_PROPERTIES( "_MAPIC.$", 0x30, true, 0x6eaf8dbd5b343b99 );                   
        SDK_FIXED_SIZE( mapic_t, 0x30 );                        
    };                                                          
};
#include "magic/mapic_t.end.hpp"
SDK_VERIFY( struct nt::mapic_t, 0x30 );
