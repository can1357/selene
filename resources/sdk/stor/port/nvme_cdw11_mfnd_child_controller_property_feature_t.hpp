#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_mfnd_child_controller_property_feature_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_MFND_CHILD_CONTROLLER_PROPERTY_FEATURE]
    // => Windows 11
    //
    union nvme_cdw11_mfnd_child_controller_property_feature_t
    {                                                        
        // Windows 11                         
        //                                    
        _m00 uint1_t  namespace_property_flag;                 //{ +0x0000@0  } | .NamespacePropertyFlag
        _m01 uint32_t as_ulong;                                //{ +0x0000    } | .AsUlong
                                                             
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_MFND_CHILD_CONTROLLER_PROPERTY_FEATURE.$", 0x0, false, 0xcebcdab6d0caa241 );                        
        SDK_FIXED_SIZE( nvme_cdw11_mfnd_child_controller_property_feature_t, 0x4 );                        
    };                                                       
};
#include "magic/nvme_cdw11_mfnd_child_controller_property_feature_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_mfnd_child_controller_property_feature_t, 0x4 );
