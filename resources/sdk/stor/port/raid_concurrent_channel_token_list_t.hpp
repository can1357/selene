#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/slist_header_t.hpp"

#include "magic/raid_concurrent_channel_token_list_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_CONCURRENT_CHANNEL_TOKEN_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_concurrent_channel_token_list_t   
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 union nt::slist_header_t list_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHeader
                                                  
        SDK_MAGIC_PROPERTIES( "_RAID_CONCURRENT_CHANNEL_TOKEN_LIST.$", 0x40, true, 0x7de0db3687d4320c );            
        SDK_FIXED_SIZE( raid_concurrent_channel_token_list_t, 0x40 );            
    };                                            
};
#include "magic/raid_concurrent_channel_token_list_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_concurrent_channel_token_list_t, 0x40 );
