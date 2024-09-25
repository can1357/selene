#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_subject_attributes_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_SubjectAttributes]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_subject_attributes_t
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* attribute_info;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AttributeInfo
                                           
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_SubjectAttributes.$", 0x8, true, 0xe51f4eec838f2275 );               
        SDK_FIXED_SIZE( pkg_context_subject_attributes_t, 0x8 );               
    };                                     
};
#include "magic/pkg_context_subject_attributes_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_subject_attributes_t, 0x8 );
