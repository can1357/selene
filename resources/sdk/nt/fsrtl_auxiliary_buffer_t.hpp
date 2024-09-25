#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_auxiliary_buffer_t.start.hpp"
namespace nt
{
    struct mdl_t;

    // [struct _FSRTL_AUXILIARY_BUFFER]
    // => WDK 10 (NV)
    //
    struct fsrtl_auxiliary_buffer_t   
    {                                 
        // WDK 10                     
        //                            
        _m00 void*             buffer;  //{ +0x0000    } | .Buffer
        _m01 uint32_t          length;  //{ +0x0008    } | .Length
        _m02 uint32_t          flags;   //{ +0x000c    } | .Flags
        _m03 struct nt::mdl_t* mdl;     //{ +0x0010    } | .Mdl
                                      
        SDK_NONVOL_PROPERTIES( "_FSRTL_AUXILIARY_BUFFER.$", 0x0, false, 0x54db70a6258b7ce9 );       
        SDK_FIXED_SIZE( fsrtl_auxiliary_buffer_t, 0x18 );       
    };                                
};
#include "magic/fsrtl_auxiliary_buffer_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_auxiliary_buffer_t, 0x18 );
