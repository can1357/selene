#pragma once
#include <sdkgen/support_library.hpp>
#include "virtual_storage_type_t.hpp"

#include "magic/storage_query_dependent_volume_lev2_entry_t.start.hpp"
namespace win
{
    // [struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct storage_query_dependent_volume_lev2_entry_t                       
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                   
        _m00 uint32_t                           entry_length;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EntryLength
        _m01 uint32_t                           dependency_type_flags;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DependencyTypeFlags
        _m02 uint32_t                           provider_specific_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderSpecificFlags
        _m03 struct win::virtual_storage_type_t virtual_storage_type;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .VirtualStorageType
        _m04 uint32_t                           ancestor_level;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .AncestorLevel
        _m05 uint32_t                           host_volume_name_offset;       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .HostVolumeNameOffset
        _m06 uint32_t                           host_volume_name_size;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HostVolumeNameSize
        _m07 uint32_t                           dependent_volume_name_offset;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .DependentVolumeNameOffset
        _m08 uint32_t                           dependent_volume_name_size;    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DependentVolumeNameSize
        _m09 uint32_t                           relative_path_offset;          //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .RelativePathOffset
        _m10 uint32_t                           relative_path_size;            //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .RelativePathSize
        _m11 uint32_t                           dependent_device_name_offset;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .DependentDeviceNameOffset
        _m12 uint32_t                           dependent_device_name_size;    //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DependentDeviceNameSize
                                                                             
        SDK_NONVOL_PROPERTIES( "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.$", 0x44, true, 0xe331727d457c6c62 );                             
        SDK_FIXED_SIZE( storage_query_dependent_volume_lev2_entry_t, 0x44 );                             
    };                                                                       
};
#include "magic/storage_query_dependent_volume_lev2_entry_t.end.hpp"
SDK_VERIFY( struct win::storage_query_dependent_volume_lev2_entry_t, 0x44 );
