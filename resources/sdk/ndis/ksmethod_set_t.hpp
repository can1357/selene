#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ksmethod_set_t.start.hpp"
namespace ndis
{
    struct ksmethod_item_t;
    struct ksfastmethod_item_t;

    // [struct KSMETHOD_SET]
    // => Windows 10 v1607
    //
    struct ksmethod_set_t                                          
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 const struct nt::guid_t*                set;            //{ +0x0000    } | .Set
        _m01 uint32_t                                methods_count;  //{ +0x0008    } | .MethodsCount
        _m02 const struct ndis::ksmethod_item_t*     method_item;    //{ +0x0010    } | .MethodItem
        _m03 uint32_t                                fast_io_count;  //{ +0x0018    } | .FastIoCount
        _m04 const struct ndis::ksfastmethod_item_t* fast_io_table;  //{ +0x0020    } | .FastIoTable
                                                                   
        SDK_MAGIC_PROPERTIES( "KSMETHOD_SET.$", 0x0, false, 0xcb4c3f67bc3ca48e );              
        SDK_FIXED_SIZE( ksmethod_set_t, 0x28 );                    
    };                                                             
};
#include "magic/ksmethod_set_t.end.hpp"
SDK_VERIFY( struct ndis::ksmethod_set_t, 0x28 );
