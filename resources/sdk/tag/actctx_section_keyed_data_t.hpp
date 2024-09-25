#pragma once
#include <sdkgen/support_library.hpp>
#include "actctx_section_keyed_data_assembly_metadata_t.hpp"

#include "magic/actctx_section_keyed_data_t.start.hpp"
namespace tag
{
    // [struct tagACTCTX_SECTION_KEYED_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actctx_section_keyed_data_t                                                    
    {                                                                                     
        using actctx_section_keyed_data_assembly_metadata_t = struct tag::actctx_section_keyed_data_assembly_metadata_t;                              
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                
        _m00 uint32_t                                       cb_size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                       ul_data_format_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulDataFormatVersion
        _m02 void*                                          lp_data;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpData
        _m03 uint32_t                                       ul_length;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulLength
        _m04 void*                                          lp_section_global_data;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpSectionGlobalData
        _m05 uint32_t                                       ul_section_global_data_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ulSectionGlobalDataLength
        _m06 void*                                          lp_section_base;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpSectionBase
        _m07 uint32_t                                       ul_section_total_length;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ulSectionTotalLength
        _m08 void*                                          h_act_ctx;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .hActCtx
        _m09 uint32_t                                       ul_assembly_roster_index;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ulAssemblyRosterIndex
        _m10 uint32_t                                       ul_flags;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ulFlags
        _m11 actctx_section_keyed_data_assembly_metadata_t  assembly_metadata;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AssemblyMetadata
                                                                                          
        SDK_MAGIC_PROPERTIES( "tagACTCTX_SECTION_KEYED_DATA.$", 0x70, true, 0xef28c8a9b7c37bf9 );                              
        SDK_FIXED_SIZE( actctx_section_keyed_data_t, 0x70 );                              
    };                                                                                    
};
#include "magic/actctx_section_keyed_data_t.end.hpp"
SDK_VERIFY( struct tag::actctx_section_keyed_data_t, 0x70 );
