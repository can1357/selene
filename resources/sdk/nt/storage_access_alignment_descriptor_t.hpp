#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_access_alignment_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_access_alignment_descriptor_t        
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t version;                            //{ +0x0000    } | .Version
        _m01 uint32_t size;                               //{ +0x0004    } | .Size
        _m02 uint32_t bytes_per_cache_line;               //{ +0x0008    } | .BytesPerCacheLine
        _m03 uint32_t bytes_offset_for_cache_alignment;   //{ +0x000c    } | .BytesOffsetForCacheAlignment
        _m04 uint32_t bytes_per_logical_sector;           //{ +0x0010    } | .BytesPerLogicalSector
        _m05 uint32_t bytes_per_physical_sector;          //{ +0x0014    } | .BytesPerPhysicalSector
        _m06 uint32_t bytes_offset_for_sector_alignment;  //{ +0x0018    } | .BytesOffsetForSectorAlignment
                                                        
        SDK_NONVOL_PROPERTIES( "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.$", 0x0, false, 0x838604ec95623bab );                                  
        SDK_FIXED_SIZE( storage_access_alignment_descriptor_t, 0x1c );                                  
    };                                                  
};
#include "magic/storage_access_alignment_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_access_alignment_descriptor_t, 0x1c );
