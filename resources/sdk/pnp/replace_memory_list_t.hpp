#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/replace_memory_list_t.start.hpp"
namespace pnp
{
    // [struct _PNP_REPLACE_MEMORY_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct replace_memory_list_t                        
    {                                                   
        struct u0_ranges_t                              
        {                                               
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                          
            _m03 int64_t  address;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
            _m04 uint64_t length;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                        
            SDK_NONVOL_PROPERTIES( "_PNP_REPLACE_MEMORY_LIST.Ranges.$", 0x10, true, 0xc5821d3d213a4bea );                        
            SDK_FIXED_SIZE( u0_ranges_t, 0x10 );                        
        };                                              
                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 uint32_t                   allocated_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedCount
        _m01 uint32_t                   count;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint64_t                   total_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalLength
        _m05 sdk::array<u0_ranges_t, 1> ranges;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Ranges
                                                        
        SDK_NONVOL_PROPERTIES( "_PNP_REPLACE_MEMORY_LIST.$", 0x20, true, 0xe3770c8fa8916cf5 );                
        SDK_FIXED_SIZE( replace_memory_list_t, 0x20 );                
    };                                                  
};
#include "magic/replace_memory_list_t.end.hpp"
SDK_VERIFY( struct pnp::replace_memory_list_t::u0_ranges_t, 0x10 );
SDK_VERIFY( struct pnp::replace_memory_list_t, 0x20 );
