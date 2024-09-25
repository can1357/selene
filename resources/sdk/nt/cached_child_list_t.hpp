#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct key_control_block_t; }

#include "magic/cached_child_list_t.start.hpp"
namespace nt
{
    // [struct _CACHED_CHILD_LIST]
    // => Windows 10 v1607
    //
    struct cached_child_list_t                          
    {                                                   
        // Windows 10 v1607                             
        //                                              
        _m00 uint32_t                        count;       //{ +0x0000    } | .Count
        _m01 uint64_t                        value_list;  //{ +0x0008    } | .ValueList
        _m02 struct cm::key_control_block_t* real_kcb;    //{ +0x0008    } | .RealKcb
                                                        
        SDK_MAGIC_PROPERTIES( "_CACHED_CHILD_LIST.$", 0x0, false, 0x32d977de3395876f );           
        SDK_FIXED_SIZE( cached_child_list_t, 0x10 );           
    };                                                  
};
#include "magic/cached_child_list_t.end.hpp"
SDK_VERIFY( struct nt::cached_child_list_t, 0x10 );
