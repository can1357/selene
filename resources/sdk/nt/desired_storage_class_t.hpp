#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/file_storage_tier_class_t.hpp"

#include "magic/desired_storage_class_t.start.hpp"
namespace nt
{
    // [struct _DesiredStorageClass]
    // => WDK 10 (NV)
    //
    struct desired_storage_class_t                      
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 enum win::file_storage_tier_class_t _class;  //{ +0x0000    } | .Class
        _m01 uint32_t                            flags;   //{ +0x0004    } | .Flags
                                                        
        SDK_NONVOL_PROPERTIES( "_DesiredStorageClass.$", 0x0, false, 0x82249cbc4f6639ae );       
        SDK_FIXED_SIZE( desired_storage_class_t, 0x8 );       
    };                                                  
};
#include "magic/desired_storage_class_t.end.hpp"
SDK_VERIFY( struct nt::desired_storage_class_t, 0x8 );
