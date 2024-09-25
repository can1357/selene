#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_import_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ENCLAVE_IMPORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_import_t                                   
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                match_type;                //{ +0x0000    +0x0000    +0x0000    } | .MatchType
        _m01 uint32_t                minimum_security_version;  //{ +0x0004    +0x0004    +0x0004    } | .MinimumSecurityVersion
        _m02 sdk::array<uint8_t, 32> unique_or_author_id;       //{ +0x0008    +0x0008    +0x0008    } | .UniqueOrAuthorID
        _m03 sdk::array<uint8_t, 16> family_id;                 //{ +0x0028    +0x0028    +0x0028    } | .FamilyID
        _m04 sdk::array<uint8_t, 16> image_id;                  //{ +0x0038    +0x0038    +0x0038    } | .ImageID
        _m05 uint32_t                import_name;               //{ +0x0048    +0x0048    +0x0048    } | .ImportName
                                                              
        SDK_MAGIC_PROPERTIES( "_IMAGE_ENCLAVE_IMPORT.$", 0x50, true, 0x2115daa3322f6148 );                         
        SDK_FIXED_SIZE( enclave_import_t, 0x50 );                         
    };                                                        
};
#include "magic/enclave_import_t.end.hpp"
SDK_VERIFY( struct image::enclave_import_t, 0x50 );
