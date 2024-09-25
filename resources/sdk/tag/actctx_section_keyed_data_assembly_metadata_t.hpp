#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/actctx_section_keyed_data_assembly_metadata_t.start.hpp"
namespace tag
{
    // [struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actctx_section_keyed_data_assembly_metadata_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 void*    lp_information;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpInformation
        _m01 void*    lp_section_base;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpSectionBase
        _m02 uint32_t ul_section_length;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulSectionLength
        _m03 void*    lp_section_global_data_base;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpSectionGlobalDataBase
        _m04 uint32_t ul_section_global_data_length;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ulSectionGlobalDataLength
                                                        
        SDK_MAGIC_PROPERTIES( "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.$", 0x28, true, 0x515cd073160b6214 );                              
        SDK_FIXED_SIZE( actctx_section_keyed_data_assembly_metadata_t, 0x28 );                              
    };                                                  
};
#include "magic/actctx_section_keyed_data_assembly_metadata_t.end.hpp"
SDK_VERIFY( struct tag::actctx_section_keyed_data_assembly_metadata_t, 0x28 );
