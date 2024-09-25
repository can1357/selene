#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wd_livereport_flags_t.start.hpp"
namespace kuser
{
    // [union _WD_LIVEREPORT_FLAGS]
    // => Windows 11
    //
    union wd_livereport_flags_t                           
    {                                                     
        struct u0_as_bits_t                               
        {                                                 
            // Windows 11                                 
            //                                            
            _m00 uint1_t kernel;                            //{ +0x0000@0  } | .Kernel
            _m01 uint1_t include_user_pages;                //{ +0x0000@1  } | .IncludeUserPages
            _m02 uint1_t mini_fallback;                     //{ +0x0000@2  } | .MiniFallback
            _m03 uint1_t abort_if_memory_pressure;          //{ +0x0000@3  } | .AbortIfMemoryPressure
                                                          
            SDK_MAGIC_PROPERTIES( "_WD_LIVEREPORT_FLAGS.AsBits.$", 0x0, false, 0x4e0a96f32c22a953 );                                 
            SDK_FIXED_SIZE( u0_as_bits_t, 0x1 );                                 
        };                                                
                                                          
        // Windows 11                                     
        //                                                
        _m04 u0_as_bits_t                         as_bits;  //{ +0x0000    } | .AsBits
        _m05 uint8_t                              as_byte;  //{ +0x0000    } | .AsByte
                                                          
        SDK_MAGIC_PROPERTIES( "_WD_LIVEREPORT_FLAGS.$", 0x0, false, 0x3ef71357ca64eb6a );        
        SDK_FIXED_SIZE( wd_livereport_flags_t, 0x1 );        
    };                                                    
};
#include "magic/wd_livereport_flags_t.end.hpp"
SDK_VERIFY( struct kuser::wd_livereport_flags_t::u0_as_bits_t, 0x1 );
SDK_VERIFY( union kuser::wd_livereport_flags_t, 0x1 );
