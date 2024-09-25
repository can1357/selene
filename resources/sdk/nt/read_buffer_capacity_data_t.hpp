#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_buffer_capacity_data_t.start.hpp"
namespace nt
{
    // [struct _READ_BUFFER_CAPACITY_DATA]
    // => WDK 10 (NV)
    //
    struct read_buffer_capacity_data_t                    
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 sdk::array<uint8_t, 2> data_length;            //{ +0x0000    } | .DataLength
        _m01 uint1_t                block_data_returned;    //{ +0x0003@0  } | .BlockDataReturned
        _m02 sdk::array<uint8_t, 4> total_buffer_size;      //{ +0x0004    } | .TotalBufferSize
        _m03 sdk::array<uint8_t, 4> available_buffer_size;  //{ +0x0008    } | .AvailableBufferSize
                                                          
        SDK_NONVOL_PROPERTIES( "_READ_BUFFER_CAPACITY_DATA.$", 0x0, false, 0x7a16924c8385d649 );                      
        SDK_FIXED_SIZE( read_buffer_capacity_data_t, 0xc );                      
    };                                                    
};
#include "magic/read_buffer_capacity_data_t.end.hpp"
SDK_VERIFY( struct nt::read_buffer_capacity_data_t, 0xc );
