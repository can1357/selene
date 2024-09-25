#pragma once
#include <sdkgen/support_library.hpp>
#include "perfinfo_sampled_profile_information_t.hpp"

#include "magic/perfinfo_sampled_profile_cache_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SAMPLED_PROFILE_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_sampled_profile_cache_t
    {                                      
        using sample_t = sdk::array<struct win::perfinfo_sampled_profile_information_t, 20>;        
                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  entries;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entries
        _m01 sample_t  sample;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sample
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SAMPLED_PROFILE_CACHE.$", 0x148, true, 0x3ed37ac5479e4110 );        
        SDK_FIXED_SIZE( perfinfo_sampled_profile_cache_t, 0x148 );        
    };                                     
};
#include "magic/perfinfo_sampled_profile_cache_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_sampled_profile_cache_t, 0x148 );
