#pragma once
#include <sdkgen/support_library.hpp>
#include "message_resource_block_t.hpp"

#include "magic/message_resource_data_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_RESOURCE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_resource_data_t      
    {                                   
        using blocks_t = sdk::array<struct win::message_resource_block_t, 1>;                 
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                              
        _m00 uint32_t  number_of_blocks;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfBlocks
        _m01 blocks_t  blocks;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Blocks
                                        
        SDK_MAGIC_PROPERTIES( "_MESSAGE_RESOURCE_DATA.$", 0x10, true, 0xe29c6a9c6be18364 );                 
        SDK_FIXED_SIZE( message_resource_data_t, 0x10 );                 
    };                                  
};
#include "magic/message_resource_data_t.end.hpp"
SDK_VERIFY( struct win::message_resource_data_t, 0x10 );
