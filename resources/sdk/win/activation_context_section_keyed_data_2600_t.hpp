#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct activation_context_t; }

#include "magic/activation_context_section_keyed_data_2600_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_section_keyed_data_2600_t                  
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m00 uint32_t                         size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                         data_format_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DataFormatVersion
        _m02 void*                            data;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
        _m03 uint32_t                         length;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m04 void*                            section_global_data;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionGlobalData
        _m05 uint32_t                         section_global_data_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SectionGlobalDataLength
        _m06 void*                            section_base;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SectionBase
        _m07 uint32_t                         section_total_length;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SectionTotalLength
        _m08 struct nt::activation_context_t* activation_context;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ActivationContext
        _m09 uint32_t                         assembly_roster_index;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AssemblyRosterIndex
        _m10 uint32_t                         flags;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Flags
                                                                         
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.$", 0x48, true, 0xd2a773ec677bf6e7 );                           
        SDK_FIXED_SIZE( activation_context_section_keyed_data_2600_t, 0x48 );                           
    };                                                                   
};
#include "magic/activation_context_section_keyed_data_2600_t.end.hpp"
SDK_VERIFY( struct win::activation_context_section_keyed_data_2600_t, 0x48 );
