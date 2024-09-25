#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hinstance_t; }

#include "magic/actctxw_t.start.hpp"
namespace tag
{
    // [struct tagACTCTXW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actctxw_t                                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 uint32_t                 cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                 dw_flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 const wchar_t*           lp_source;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpSource
        _m03 uint16_t                 w_processor_architecture;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wProcessorArchitecture
        _m04 uint16_t                 w_lang_id;                 //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .wLangId
        _m05 const wchar_t*           lp_assembly_directory;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpAssemblyDirectory
        _m06 const wchar_t*           lp_resource_name;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpResourceName
        _m07 const wchar_t*           lp_application_name;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpApplicationName
        _m08 struct win::hinstance_t* h_module;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hModule
                                                               
        SDK_MAGIC_PROPERTIES( "tagACTCTXW.$", 0x38, true, 0x99c3d59b0d42cbb7 );                         
        SDK_FIXED_SIZE( actctxw_t, 0x38 );                         
    };                                                         
};
#include "magic/actctxw_t.end.hpp"
SDK_VERIFY( struct tag::actctxw_t, 0x38 );
