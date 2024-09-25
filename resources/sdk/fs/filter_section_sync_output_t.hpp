#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_section_sync_output_t.start.hpp"
namespace fs
{
    // [struct _FS_FILTER_SECTION_SYNC_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filter_section_sync_output_t      
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t structure_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureSize
        _m01 uint32_t size_returned;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeReturned
        _m02 uint32_t flags;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t desired_read_alignment;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DesiredReadAlignment
                                             
        SDK_NONVOL_PROPERTIES( "_FS_FILTER_SECTION_SYNC_OUTPUT.$", 0x10, true, 0x98059922bbbfaa64 );                       
        SDK_FIXED_SIZE( filter_section_sync_output_t, 0x10 );                       
    };                                       
};
#include "magic/filter_section_sync_output_t.end.hpp"
SDK_VERIFY( struct fs::filter_section_sync_output_t, 0x10 );
