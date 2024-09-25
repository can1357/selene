#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/relation_list_t.start.hpp"
namespace nt
{
    struct device_object_list_t;

    // [struct _RELATION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct relation_list_t                                       
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 struct nt::device_object_list_t* device_object_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceObjectList
        _m01 uint8_t                          sorted;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sorted
                                                                 
        SDK_MAGIC_PROPERTIES( "_RELATION_LIST.$", 0x10, true, 0x30cac4d06858ab2f );                   
        SDK_FIXED_SIZE( relation_list_t, 0x10 );                   
    };                                                           
};
#include "magic/relation_list_t.end.hpp"
SDK_VERIFY( struct nt::relation_list_t, 0x10 );
