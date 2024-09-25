#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wim_provider_overlay_entry_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_OVERLAY_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wim_provider_overlay_entry_t             
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint32_t          next_entry_offset;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 int64_t           data_source_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSourceId
        _m02 struct nt::guid_t wim_guid;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .WimGuid
        _m03 uint32_t          wim_file_name_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .WimFileNameOffset
        _m04 uint32_t          wim_type;              //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .WimType
        _m05 uint32_t          wim_index;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .WimIndex
        _m06 uint32_t          flags;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
                                                    
        SDK_NONVOL_PROPERTIES( "_WIM_PROVIDER_OVERLAY_ENTRY.$", 0x30, true, 0x4e22fecb1e6d2e12 );                     
        SDK_FIXED_SIZE( wim_provider_overlay_entry_t, 0x30 );                     
    };                                              
};
#include "magic/wim_provider_overlay_entry_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_overlay_entry_t, 0x30 );
