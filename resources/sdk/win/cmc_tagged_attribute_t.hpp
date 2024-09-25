#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_attribute_t.hpp"

#include "magic/cmc_tagged_attribute_t.start.hpp"
namespace win
{
    // [struct _CMC_TAGGED_ATTRIBUTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_tagged_attribute_t                          
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 uint32_t                      dw_body_part_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwBodyPartID
        _m01 struct win::crypt_attribute_t attribute;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Attribute
                                                           
        SDK_MAGIC_PROPERTIES( "_CMC_TAGGED_ATTRIBUTE.$", 0x20, true, 0x46a84e081fe777eb );                
        SDK_FIXED_SIZE( cmc_tagged_attribute_t, 0x20 );                
    };                                                     
};
#include "magic/cmc_tagged_attribute_t.end.hpp"
SDK_VERIFY( struct win::cmc_tagged_attribute_t, 0x20 );
