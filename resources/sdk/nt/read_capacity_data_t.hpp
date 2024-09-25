#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_capacity_data_t.start.hpp"
namespace nt
{
    // [struct _READ_CAPACITY_DATA]
    // => WDK 10 (NV)
    //
    struct read_capacity_data_t             
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t logical_block_address;  //{ +0x0000    } | .LogicalBlockAddress
        _m01 uint32_t bytes_per_block;        //{ +0x0004    } | .BytesPerBlock
                                            
        SDK_NONVOL_PROPERTIES( "_READ_CAPACITY_DATA.$", 0x0, false, 0x19ddce6285195783 );                      
        SDK_FIXED_SIZE( read_capacity_data_t, 0x8 );                      
    };                                      
};
#include "magic/read_capacity_data_t.end.hpp"
SDK_VERIFY( struct nt::read_capacity_data_t, 0x8 );
