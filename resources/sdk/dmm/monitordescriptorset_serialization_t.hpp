#pragma once
#include <sdkgen/support_library.hpp>
#include "monitordescriptor_serialization_t.hpp"

#include "magic/monitordescriptorset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITORDESCRIPTORSET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitordescriptorset_serialization_t                   
    {                                                             
        using descriptor_serialization_t = sdk::array<struct dmm::monitordescriptor_serialization_t, 1>;                         
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                        
        _m00 uint8_t                     num_descriptors;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumDescriptors
        _m01 descriptor_serialization_t  descriptor_serialization;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DescriptorSerialization
                                                                  
        SDK_MAGIC_PROPERTIES( "_DMM_MONITORDESCRIPTORSET_SERIALIZATION.$", 0x90, true, 0xc6b7cd20ab825c12 );                         
        SDK_FIXED_SIZE( monitordescriptorset_serialization_t, 0x90 );                         
    };                                                            
};
#include "magic/monitordescriptorset_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitordescriptorset_serialization_t, 0x90 );
