#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_query_dependent_volume_lev1_entry_t.hpp"
#include "storage_query_dependent_volume_lev2_entry_t.hpp"

#include "magic/storage_query_dependent_volume_response_t.start.hpp"
namespace win
{
    // [struct _STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct storage_query_dependent_volume_response_t
    {                                               
        using lev1_depends_t = sdk::array<struct win::storage_query_dependent_volume_lev1_entry_t>;               
        using lev2_depends_t = sdk::array<struct win::storage_query_dependent_volume_lev2_entry_t>;               
                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                  
        _m00 uint32_t        response_level;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ResponseLevel
        _m01 uint32_t        number_entries;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberEntries
        _m02 lev1_depends_t  lev1_depends;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lev1Depends
        _m03 lev2_depends_t  lev2_depends;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lev2Depends
                                                    
        SDK_NONVOL_PROPERTIES( "_STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE.$", 0x4c, true, 0xe053c2cc9efcb2e5 );               
        SDK_DYNAMIC_SIZE( storage_query_dependent_volume_response_t );               
    };                                              
};
#include "magic/storage_query_dependent_volume_response_t.end.hpp"
