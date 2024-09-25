#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_catchable_type_array_t.start.hpp"
namespace win
{
    struct s_catchable_type_t;

    // [struct _s__CatchableTypeArray]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_catchable_type_array_t                               
    {                                                             
        using array_of_catchable_types_t = sdk::array<const struct win::s_catchable_type_t*>;                         
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                        
        _m00 int32_t                     n_catchable_types;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nCatchableTypes
        _m01 array_of_catchable_types_t  array_of_catchable_types;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .arrayOfCatchableTypes
                                                                  
        SDK_MAGIC_PROPERTIES( "_s__CatchableTypeArray.$", 0x4, true, 0x7d6f720b46b82490 );                         
        SDK_FIXED_SIZE( s_catchable_type_array_t, 0x4 );                         
    };                                                            
};
#include "magic/s_catchable_type_array_t.end.hpp"
SDK_VERIFY( struct win::s_catchable_type_array_t, 0x4 );
