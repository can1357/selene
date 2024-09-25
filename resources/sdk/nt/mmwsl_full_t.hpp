#pragma once
#include <sdkgen/support_library.hpp>
#include "mmwsl_shared_t.hpp"
#include "mmwsl_instance_t.hpp"

#include "magic/mmwsl_full_t.start.hpp"
namespace nt
{
    // [struct _MMWSL_FULL]
    // => Windows 10 v1607
    //
    struct mmwsl_full_t                           
    {                                             
        // Windows 10 v1607                       
        //                                        
        _m00 struct nt::mmwsl_instance_t instance;  //{ +0x0000    } | .Instance
        _m01 struct nt::mmwsl_shared_t   shared;    //{ +0x01a0    } | .Shared
                                                  
        SDK_MAGIC_PROPERTIES( "_MMWSL_FULL.$", 0x0, false, 0x6ac4186bc2c05a02 );         
        SDK_FIXED_SIZE( mmwsl_full_t, 0x200 );         
    };                                            
};
#include "magic/mmwsl_full_t.end.hpp"
SDK_VERIFY( struct nt::mmwsl_full_t, 0x200 );
