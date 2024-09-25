#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/firmware_request_block_t.start.hpp"
namespace nt
{
    // [struct _FIRMWARE_REQUEST_BLOCK]
    // => WDK 10 (NV)
    //
    struct firmware_request_block_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t version;             //{ +0x0000    } | .Version
        _m01 uint32_t size;                //{ +0x0004    } | .Size
        _m02 uint32_t function;            //{ +0x0008    } | .Function
        _m03 uint32_t flags;               //{ +0x000c    } | .Flags
        _m04 uint32_t data_buffer_offset;  //{ +0x0010    } | .DataBufferOffset
        _m05 uint32_t data_buffer_length;  //{ +0x0014    } | .DataBufferLength
                                         
        SDK_NONVOL_PROPERTIES( "_FIRMWARE_REQUEST_BLOCK.$", 0x0, false, 0xd997ea32e8a8e9f8 );                   
        SDK_FIXED_SIZE( firmware_request_block_t, 0x18 );                   
    };                                   
};
#include "magic/firmware_request_block_t.end.hpp"
SDK_VERIFY( struct nt::firmware_request_block_t, 0x18 );
