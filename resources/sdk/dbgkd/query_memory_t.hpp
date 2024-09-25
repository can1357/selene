#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_memory_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_QUERY_MEMORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_memory_t           
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t address_space;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressSpace
        _m02 uint32_t flags;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
                                    
        SDK_MAGIC_PROPERTIES( "_DBGKD_QUERY_MEMORY.$", 0x18, true, 0x9ed0c217afc0bc51 );              
        SDK_FIXED_SIZE( query_memory_t, 0x18 );              
    };                              
};
#include "magic/query_memory_t.end.hpp"
SDK_VERIFY( struct dbgkd::query_memory_t, 0x18 );
