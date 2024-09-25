#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_storage_map_resolution_callback_data_resolution_beginning_t.start.hpp"
namespace win
{
    // [struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_storage_map_resolution_callback_data_resolution_beginning_t
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                          
        _m00 const void*      data;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
        _m01 uint32_t         assembly_roster_index;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AssemblyRosterIndex
        _m02 void*            resolution_context;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResolutionContext
        _m03 nt::unicode_view root;                                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Root
        _m04 uint8_t          known_root;                                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KnownRoot
        _m05 uint64_t         root_count;                                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RootCount
        _m06 uint8_t          cancel_resolution;                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CancelResolution
                                                                               
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING.$", 0x40, true, 0x41c276f30d082bae );                      
        SDK_FIXED_SIZE( assembly_storage_map_resolution_callback_data_resolution_beginning_t, 0x40 );                      
    };                                                                         
};
#include "magic/assembly_storage_map_resolution_callback_data_resolution_beginning_t.end.hpp"
SDK_VERIFY( struct win::assembly_storage_map_resolution_callback_data_resolution_beginning_t, 0x40 );
