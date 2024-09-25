#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksfilterfactory_t.start.hpp"
namespace ndis
{
    struct ksfilter_descriptor_t;

    // [struct _KSFILTERFACTORY]
    // => Windows 10 v1607
    //
    struct ksfilterfactory_t                                             
    {                                                                    
        // Windows 10 v1607                                              
        //                                                               
        _m00 const struct ndis::ksfilter_descriptor_t* filter_descriptor;  //{ +0x0000    } | .FilterDescriptor
        _m01 void*                                     bag;                //{ +0x0008    } | .Bag
        _m02 void*                                     context;            //{ +0x0010    } | .Context
                                                                         
        SDK_MAGIC_PROPERTIES( "_KSFILTERFACTORY.$", 0x0, false, 0xa8916a326bba9f6 );                  
        SDK_FIXED_SIZE( ksfilterfactory_t, 0x18 );                       
    };                                                                   
};
#include "magic/ksfilterfactory_t.end.hpp"
SDK_VERIFY( struct ndis::ksfilterfactory_t, 0x18 );
