#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksdevice_descriptor_t.start.hpp"
namespace ndis
{
    struct ksdevice_dispatch_t;
    struct ksfilter_descriptor_t;

    // [struct _KSDEVICE_DESCRIPTOR]
    // => Windows 10 v1607
    //
    struct ksdevice_descriptor_t                                                       
    {                                                                                  
        // Windows 10 v1607                                                            
        //                                                                             
        _m00 const struct ndis::ksdevice_dispatch_t*          dispatch;                  //{ +0x0000    } | .Dispatch
        _m01 uint32_t                                         filter_descriptors_count;  //{ +0x0008    } | .FilterDescriptorsCount
        _m02 const struct ndis::ksfilter_descriptor_t const** filter_descriptors;        //{ +0x0010    } | .FilterDescriptors
        _m03 uint32_t                                         version;                   //{ +0x0018    } | .Version
        _m04 uint32_t                                         flags;                     //{ +0x001c    } | .Flags
                                                                                       
        SDK_MAGIC_PROPERTIES( "_KSDEVICE_DESCRIPTOR.$", 0x0, false, 0x27c4eee40b822e37 );                         
        SDK_FIXED_SIZE( ksdevice_descriptor_t, 0x20 );                                 
    };                                                                                 
};
#include "magic/ksdevice_descriptor_t.end.hpp"
SDK_VERIFY( struct ndis::ksdevice_descriptor_t, 0x20 );
