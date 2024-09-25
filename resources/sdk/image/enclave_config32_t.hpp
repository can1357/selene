#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_config32_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ENCLAVE_CONFIG32]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_config32_t                                     
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                        
        _m00 uint32_t                size;                          //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                minimum_required_config_size;  //{ +0x0004    +0x0004    +0x0004    } | .MinimumRequiredConfigSize
        _m02 uint32_t                policy_flags;                  //{ +0x0008    +0x0008    +0x0008    } | .PolicyFlags
        _m03 uint32_t                number_of_imports;             //{ +0x000c    +0x000c    +0x000c    } | .NumberOfImports
        _m04 uint32_t                import_list;                   //{ +0x0010    +0x0010    +0x0010    } | .ImportList
        _m05 uint32_t                import_entry_size;             //{ +0x0014    +0x0014    +0x0014    } | .ImportEntrySize
        _m06 sdk::array<uint8_t, 16> family_id;                     //{ +0x0018    +0x0018    +0x0018    } | .FamilyID
        _m07 sdk::array<uint8_t, 16> image_id;                      //{ +0x0028    +0x0028    +0x0028    } | .ImageID
        _m08 uint32_t                image_version;                 //{ +0x0038    +0x0038    +0x0038    } | .ImageVersion
        _m09 uint32_t                security_version;              //{ +0x003c    +0x003c    +0x003c    } | .SecurityVersion
        _m10 uint32_t                enclave_size;                  //{ +0x0040    +0x0040    +0x0040    } | .EnclaveSize
        _m11 uint32_t                number_of_threads;             //{ +0x0044    +0x0044    +0x0044    } | .NumberOfThreads
        _m12 uint32_t                enclave_flags;                 //{ +0x0048    +0x0048    +0x0048    } | .EnclaveFlags
                                                                  
        SDK_MAGIC_PROPERTIES( "_IMAGE_ENCLAVE_CONFIG32.$", 0x4c, true, 0x13f7b6be88d0c4f0 );                             
        SDK_FIXED_SIZE( enclave_config32_t, 0x4c );                             
    };                                                            
};
#include "magic/enclave_config32_t.end.hpp"
SDK_VERIFY( struct image::enclave_config32_t, 0x4c );
