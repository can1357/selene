#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "object_type_initializer_t.hpp"

#include "magic/object_type_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_type_t                                                       
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                     
        _m00 nt::list_entry_t                     type_list;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeList
        _m01 nt::unicode_view                     name;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m02 void*                                default_object;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DefaultObject
        _m03 uint8_t                              index;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Index
        _m04 uint32_t                             total_number_of_objects;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .TotalNumberOfObjects
        _m05 uint32_t                             total_number_of_handles;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TotalNumberOfHandles
        _m06 uint32_t                             high_water_number_of_objects;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .HighWaterNumberOfObjects
        _m07 uint32_t                             high_water_number_of_handles;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HighWaterNumberOfHandles
        _m08 struct nt::object_type_initializer_t type_info;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TypeInfo
        _m09 struct ex::push_lock_t               type_lock;                     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .TypeLock
        _m10 uint32_t                             key;                           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Key
        _m11 nt::list_entry_t                     callback_list;                 //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .CallbackList
                                                                               
        SDK_MAGIC_PROPERTIES( "_OBJECT_TYPE.$", 0xd8, true, 0xf26486f598006d82 );                             
        SDK_DYNAMIC_SIZE( object_type_t );                                     
    };                                                                         
};
#include "magic/object_type_t.end.hpp"
