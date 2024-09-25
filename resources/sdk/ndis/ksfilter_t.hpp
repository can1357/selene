#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksfilter_t.start.hpp"
namespace ndis
{
    struct ksfilter_descriptor_t;

    // [struct _KSFILTER]
    // => Windows 10 v1607
    //
    struct ksfilter_t                                             
    {                                                             
        // Windows 10 v1607                                       
        //                                                        
        _m00 const struct ndis::ksfilter_descriptor_t* descriptor;  //{ +0x0000    } | .Descriptor
        _m01 void*                                     bag;         //{ +0x0008    } | .Bag
        _m02 void*                                     context;     //{ +0x0010    } | .Context
                                                                  
        SDK_MAGIC_PROPERTIES( "_KSFILTER.$", 0x0, false, 0x64a7e7ac4ef6d8bd );           
        SDK_FIXED_SIZE( ksfilter_t, 0x18 );                       
    };                                                            
};
#include "magic/ksfilter_t.end.hpp"
SDK_VERIFY( struct ndis::ksfilter_t, 0x18 );
