#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/message_resource_block_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_RESOURCE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_resource_block_t     
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t low_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowId
        _m01 uint32_t high_id;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HighId
        _m02 uint32_t offset_to_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffsetToEntries
                                        
        SDK_MAGIC_PROPERTIES( "_MESSAGE_RESOURCE_BLOCK.$", 0xc, true, 0xa2e319bbfc1963ad );                  
        SDK_FIXED_SIZE( message_resource_block_t, 0xc );                  
    };                                  
};
#include "magic/message_resource_block_t.end.hpp"
SDK_VERIFY( struct win::message_resource_block_t, 0xc );
