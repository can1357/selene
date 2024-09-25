#pragma once
#include <sdkgen/support_library.hpp>
#include "ksidentifier_t.hpp"

#include "magic/ksp_pin_t.start.hpp"
namespace ndis
{
    // [struct KSP_PIN]
    // => Windows 10 v1607
    //
    struct ksp_pin_t                              
    {                                             
        // Windows 10 v1607                       
        //                                        
        _m00 struct ndis::ksidentifier_t property;  //{ +0x0000    } | .Property
        _m01 uint32_t                    pin_id;    //{ +0x0018    } | .PinId
        _m02 uint32_t                    flags;     //{ +0x001c    } | .Flags
                                                  
        SDK_MAGIC_PROPERTIES( "KSP_PIN.$", 0x0, false, 0xc7424de9cd14c36d );         
        SDK_FIXED_SIZE( ksp_pin_t, 0x20 );         
    };                                            
};
#include "magic/ksp_pin_t.end.hpp"
SDK_VERIFY( struct ndis::ksp_pin_t, 0x20 );
