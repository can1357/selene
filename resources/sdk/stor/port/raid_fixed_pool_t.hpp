#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_fixed_pool_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_FIXED_POOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_fixed_pool_t             
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t* buffer;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t number_of_elements;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfElements
        _m02 uint64_t size_of_element;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfElement
                                         
        SDK_MAGIC_PROPERTIES( "_RAID_FIXED_POOL.$", 0x18, true, 0x41b2d6f1ed33d20a );                   
        SDK_FIXED_SIZE( raid_fixed_pool_t, 0x18 );                   
    };                                   
};
#include "magic/raid_fixed_pool_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_fixed_pool_t, 0x18 );
