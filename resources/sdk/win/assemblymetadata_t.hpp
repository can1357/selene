#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assemblymetadata_t.start.hpp"
namespace win
{
    struct osinfo_t;

    // [struct ASSEMBLYMETADATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assemblymetadata_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint16_t              us_major_version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usMajorVersion
        _m01 uint16_t              us_minor_version;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .usMinorVersion
        _m02 uint16_t              us_build_number;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .usBuildNumber
        _m03 uint16_t              us_revision_number;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .usRevisionNumber
        _m04 wchar_t*              sz_locale;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szLocale
        _m05 uint32_t              cb_locale;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbLocale
        _m06 uint32_t*             r_processor;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rProcessor
        _m07 uint32_t              ul_processor;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ulProcessor
        _m08 struct win::osinfo_t* r_os;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rOS
        _m09 uint32_t              ul_os;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ulOS
                                                      
        SDK_MAGIC_PROPERTIES( "ASSEMBLYMETADATA.$", 0x38, true, 0x24c660b54631fef2 );                   
        SDK_FIXED_SIZE( assemblymetadata_t, 0x38 );                   
    };                                                
};
#include "magic/assemblymetadata_t.end.hpp"
SDK_VERIFY( struct win::assemblymetadata_t, 0x38 );
