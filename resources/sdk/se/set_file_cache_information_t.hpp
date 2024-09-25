#pragma once
#include <sdkgen/support_library.hpp>
#include "set_file_cache_origin_claim_information_t.hpp"

#include "magic/set_file_cache_information_t.start.hpp"
namespace se
{
    // [struct _SE_SET_FILE_CACHE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_file_cache_information_t                                           
    {                                                                             
        using se_set_file_cache_origin_claim_information_t = struct se::set_file_cache_origin_claim_information_t;                       
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                        
        _m00 uint32_t                                      size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 nt::unicode_view                              catalog_directory_path;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CatalogDirectoryPath
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m02 se_set_file_cache_origin_claim_information_t  origin_claim_info;       //{ +0x0008    } | .OriginClaimInfo
                                                                                  
        SDK_MAGIC_PROPERTIES( "_SE_SET_FILE_CACHE_INFORMATION.$", 0x18, true, 0xa6cfd6a152f4ad21 );                       
        SDK_FIXED_SIZE( set_file_cache_information_t, 0x18 );                       
    };                                                                            
};
#include "magic/set_file_cache_information_t.end.hpp"
SDK_VERIFY( struct se::set_file_cache_information_t, 0x18 );
