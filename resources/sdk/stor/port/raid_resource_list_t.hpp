#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }

#include "magic/raid_resource_list_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_RESOURCE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_resource_list_t                               
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct cm::resource_list_t* allocated_resources;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedResources
        _m01 struct cm::resource_list_t* translated_resources;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TranslatedResources
                                                              
        SDK_MAGIC_PROPERTIES( "_RAID_RESOURCE_LIST.$", 0x10, true, 0xd596ca098cc9f949 );                     
        SDK_FIXED_SIZE( raid_resource_list_t, 0x10 );                     
    };                                                        
};
#include "magic/raid_resource_list_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_resource_list_t, 0x10 );
