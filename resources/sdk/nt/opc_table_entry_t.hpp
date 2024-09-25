#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opc_table_entry_t.start.hpp"
namespace nt
{
    // [struct _OPC_TABLE_ENTRY]
    // => WDK 10 (NV)
    //
    struct opc_table_entry_t                  
    {                                         
        // WDK 10                             
        //                                    
        _m00 sdk::array<uint8_t, 2> speed;      //{ +0x0000    } | .Speed
        _m01 sdk::array<uint8_t, 6> opc_value;  //{ +0x0002    } | .OPCValue
                                              
        SDK_NONVOL_PROPERTIES( "_OPC_TABLE_ENTRY.$", 0x0, false, 0xded0f3ec7187ad2d );          
        SDK_FIXED_SIZE( opc_table_entry_t, 0x8 );          
    };                                        
};
#include "magic/opc_table_entry_t.end.hpp"
SDK_VERIFY( struct nt::opc_table_entry_t, 0x8 );
