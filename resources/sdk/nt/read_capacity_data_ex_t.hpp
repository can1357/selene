#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_capacity_data_ex_t.start.hpp"
namespace nt
{
    // [struct _READ_CAPACITY_DATA_EX]
    // => WDK 10 (NV)
    //
    struct read_capacity_data_ex_t          
    {                                       
        // WDK 10                           
        //                                  
        _m00 int64_t  logical_block_address;  //{ +0x0000    } | .LogicalBlockAddress
        _m01 uint32_t bytes_per_block;        //{ +0x0008    } | .BytesPerBlock
                                            
        SDK_NONVOL_PROPERTIES( "_READ_CAPACITY_DATA_EX.$", 0x0, false, 0x680d7786d971d549 );                      
        SDK_FIXED_SIZE( read_capacity_data_ex_t, 0xc );                      
    };                                      
};
#include "magic/read_capacity_data_ex_t.end.hpp"
SDK_VERIFY( struct nt::read_capacity_data_ex_t, 0xc );
