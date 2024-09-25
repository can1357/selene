#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usermode_crashdump_header_t.start.hpp"
namespace nt
{
    // [struct _USERMODE_CRASHDUMP_HEADER]
    // => WDK 10 (NV)
    //
    struct usermode_crashdump_header_t     
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t signature;             //{ +0x0000    } | .Signature
        _m01 uint32_t valid_dump;            //{ +0x0004    } | .ValidDump
        _m02 uint32_t major_version;         //{ +0x0008    } | .MajorVersion
        _m03 uint32_t minor_version;         //{ +0x000c    } | .MinorVersion
        _m04 uint32_t machine_image_type;    //{ +0x0010    } | .MachineImageType
        _m05 uint32_t thread_count;          //{ +0x0014    } | .ThreadCount
        _m06 uint32_t module_count;          //{ +0x0018    } | .ModuleCount
        _m07 uint32_t memory_region_count;   //{ +0x001c    } | .MemoryRegionCount
        _m08 uint64_t thread_offset;         //{ +0x0020    } | .ThreadOffset
        _m09 uint64_t module_offset;         //{ +0x0028    } | .ModuleOffset
        _m10 uint64_t data_offset;           //{ +0x0030    } | .DataOffset
        _m11 uint64_t memory_region_offset;  //{ +0x0038    } | .MemoryRegionOffset
        _m12 uint64_t debug_event_offset;    //{ +0x0040    } | .DebugEventOffset
        _m13 uint64_t thread_state_offset;   //{ +0x0048    } | .ThreadStateOffset
        _m14 uint64_t version_info_offset;   //{ +0x0050    } | .VersionInfoOffset
                                           
        SDK_NONVOL_PROPERTIES( "_USERMODE_CRASHDUMP_HEADER.$", 0x0, false, 0x7d5d93aee5a86337 );                     
        SDK_FIXED_SIZE( usermode_crashdump_header_t, 0x60 );                     
    };                                     
};
#include "magic/usermode_crashdump_header_t.end.hpp"
SDK_VERIFY( struct nt::usermode_crashdump_header_t, 0x60 );
