#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_range_entry_t.start.hpp"
namespace nt
{
    // [struct _MEMORY_RANGE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct memory_range_entry_t       
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint64_t number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                      
        SDK_NONVOL_PROPERTIES( "_MEMORY_RANGE_ENTRY.$", 0x10, true, 0x7abef1a22dd29224 );                
        SDK_FIXED_SIZE( memory_range_entry_t, 0x10 );                
    };                                
};
#include "magic/memory_range_entry_t.end.hpp"
SDK_VERIFY( struct nt::memory_range_entry_t, 0x10 );
