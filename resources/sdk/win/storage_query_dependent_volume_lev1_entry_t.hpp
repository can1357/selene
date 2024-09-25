#pragma once
#include <sdkgen/support_library.hpp>
#include "virtual_storage_type_t.hpp"

#include "magic/storage_query_dependent_volume_lev1_entry_t.start.hpp"
namespace win
{
    // [struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct storage_query_dependent_volume_lev1_entry_t                  
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                              
        _m00 uint32_t                           entry_length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EntryLength
        _m01 uint32_t                           dependency_type_flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DependencyTypeFlags
        _m02 uint32_t                           provider_specific_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderSpecificFlags
        _m03 struct win::virtual_storage_type_t virtual_storage_type;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .VirtualStorageType
                                                                        
        SDK_NONVOL_PROPERTIES( "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY.$", 0x20, true, 0xd480503f1cc471 );                        
        SDK_FIXED_SIZE( storage_query_dependent_volume_lev1_entry_t, 0x20 );                        
    };                                                                  
};
#include "magic/storage_query_dependent_volume_lev1_entry_t.end.hpp"
SDK_VERIFY( struct win::storage_query_dependent_volume_lev1_entry_t, 0x20 );
