#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_section_keyed_data_assembly_metadata_t.start.hpp"
namespace win
{
    struct activation_context_data_assembly_information_t;

    // [struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_section_keyed_data_assembly_metadata_t
    {                                                               
        using information_t = struct win::activation_context_data_assembly_information_t*;                           
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                             
        _m00 information_t  information;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Information
        _m01 void*          section_base;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SectionBase
        _m02 uint32_t       section_length;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SectionLength
        _m03 void*          section_global_data_base;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionGlobalDataBase
        _m04 uint32_t       section_global_data_length;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SectionGlobalDataLength
                                                                    
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.$", 0x28, true, 0x317f5d5858ad2647 );                           
        SDK_FIXED_SIZE( activation_context_section_keyed_data_assembly_metadata_t, 0x28 );                           
    };                                                              
};
#include "magic/activation_context_section_keyed_data_assembly_metadata_t.end.hpp"
SDK_VERIFY( struct win::activation_context_section_keyed_data_assembly_metadata_t, 0x28 );
