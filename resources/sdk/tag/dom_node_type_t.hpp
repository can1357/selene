#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDOMNodeType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dom_node_type_t : int32_t
    {                                   
        invalid =                0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        element =                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute =              0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        text =                   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdata_section =          0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entity_reference =       0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entity =                 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processing_instruction = 0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comment =                0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        document =               0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        document_type =          0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        document_fragment =      0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notation =               0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
