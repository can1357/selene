#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_file_cache_origin_claim_information_t.start.hpp"
namespace se
{
    // [struct _SE_SET_FILE_CACHE_ORIGIN_CLAIM_INFORMATION]
    // => Windows 11
    //
    struct set_file_cache_origin_claim_information_t
    {                                               
        // Windows 11                   
        //                              
        _m00 uint64_t origin_claim_size;              //{ +0x0000    } | .OriginClaimSize
        _m01 void*    origin_claim;                   //{ +0x0008    } | .OriginClaim
                                                    
        SDK_MAGIC_PROPERTIES( "_SE_SET_FILE_CACHE_ORIGIN_CLAIM_INFORMATION.$", 0x0, false, 0xe1f90043fa71db6c );                  
        SDK_FIXED_SIZE( set_file_cache_origin_claim_information_t, 0x10 );                  
    };                                              
};
#include "magic/set_file_cache_origin_claim_information_t.end.hpp"
SDK_VERIFY( struct se::set_file_cache_origin_claim_information_t, 0x10 );
