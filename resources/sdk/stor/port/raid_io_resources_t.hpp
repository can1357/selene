#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_io_resources_t.start.hpp"
namespace stor::port
{
    struct extended_request_block_t;

    // [struct _RAID_IO_RESOURCES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_io_resources_t                                          
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                              
        _m00 uint32_t                                     queue_tag;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueueTag
        _m01 void*                                        srb_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SrbExtension
        _m02 struct stor::port::extended_request_block_t* xrb;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Xrb
        _m03 void*                                        sense_info;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SenseInfo
                                                                        
        SDK_MAGIC_PROPERTIES( "_RAID_IO_RESOURCES.$", 0x20, true, 0x301d281b0e8ef74d );              
        SDK_FIXED_SIZE( raid_io_resources_t, 0x20 );                    
    };                                                                  
};
#include "magic/raid_io_resources_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_io_resources_t, 0x20 );
