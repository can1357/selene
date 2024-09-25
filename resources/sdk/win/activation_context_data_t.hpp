#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_data_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_t         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t magic;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Magic
        _m01 uint32_t header_size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HeaderSize
        _m02 uint32_t format_version;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FormatVersion
        _m03 uint32_t total_size;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalSize
        _m04 uint32_t default_toc_offset;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DefaultTocOffset
        _m05 uint32_t extended_toc_offset;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ExtendedTocOffset
        _m06 uint32_t assembly_roster_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AssemblyRosterOffset
        _m07 uint32_t flags;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
                                             
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA.$", 0x20, true, 0x974d3ef159d44abd );                       
        SDK_FIXED_SIZE( activation_context_data_t, 0x20 );                       
    };                                       
};
#include "magic/activation_context_data_t.end.hpp"
SDK_VERIFY( struct win::activation_context_data_t, 0x20 );
