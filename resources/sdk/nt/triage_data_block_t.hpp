#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_data_block_t.start.hpp"
namespace nt
{
    // [struct _TRIAGE_DATA_BLOCK]
    // => WDK 10 (NV)
    //
    struct triage_data_block_t
    {                         
        // WDK 10             
        //                    
        _m00 uint64_t address;  //{ +0x0000    } | .Address
        _m01 uint32_t offset;   //{ +0x0008    } | .Offset
        _m02 uint32_t size;     //{ +0x000c    } | .Size
                              
        SDK_NONVOL_PROPERTIES( "_TRIAGE_DATA_BLOCK.$", 0x0, false, 0x692b5b7894d63bdd );        
        SDK_FIXED_SIZE( triage_data_block_t, 0x10 );        
    };                        
};
#include "magic/triage_data_block_t.end.hpp"
SDK_VERIFY( struct nt::triage_data_block_t, 0x10 );
