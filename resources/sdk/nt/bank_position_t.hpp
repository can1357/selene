#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bank_position_t.start.hpp"
namespace nt
{
    // [struct _BANK_POSITION]
    // => WDK 10 (NV)
    //
    struct bank_position_t                
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t read_bank_position;   //{ +0x0000    } | .ReadBankPosition
        _m01 uint32_t write_bank_position;  //{ +0x0004    } | .WriteBankPosition
                                          
        SDK_NONVOL_PROPERTIES( "_BANK_POSITION.$", 0x0, false, 0x6f95aa6ce8c62c3e );                    
        SDK_FIXED_SIZE( bank_position_t, 0x8 );                    
    };                                    
};
#include "magic/bank_position_t.end.hpp"
SDK_VERIFY( struct nt::bank_position_t, 0x8 );
