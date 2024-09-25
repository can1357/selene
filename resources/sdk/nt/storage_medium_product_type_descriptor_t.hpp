#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_medium_product_type_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_medium_product_type_descriptor_t
    {                                              
        // WDK 10                         
        //                                
        _m00 uint32_t version;                       //{ +0x0000    } | .Version
        _m01 uint32_t size;                          //{ +0x0004    } | .Size
        _m02 uint32_t medium_product_type;           //{ +0x0008    } | .MediumProductType
                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_MEDIUM_PRODUCT_TYPE_DESCRIPTOR.$", 0x0, false, 0xef091b0377a373e2 );                    
        SDK_FIXED_SIZE( storage_medium_product_type_descriptor_t, 0xc );                    
    };                                             
};
#include "magic/storage_medium_product_type_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_medium_product_type_descriptor_t, 0xc );
