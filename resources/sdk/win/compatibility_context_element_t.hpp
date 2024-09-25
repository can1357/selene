#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "actctx_compatibility_element_type_t.hpp"

#include "magic/compatibility_context_element_t.start.hpp"
namespace win
{
    // [struct _COMPATIBILITY_CONTEXT_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct compatibility_context_element_t                                    
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                    
        _m00 struct nt::guid_t                             id;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 enum win::actctx_compatibility_element_type_t type;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                    
        _m02 uint64_t                                      max_version_tested;  //{ +0x0018    +0x0018    +0x0018    } | .MaxVersionTested
                                                                              
        SDK_MAGIC_PROPERTIES( "_COMPATIBILITY_CONTEXT_ELEMENT.$", 0x20, true, 0xd37d3025abe2312f );                   
        SDK_DYNAMIC_SIZE( compatibility_context_element_t );                   
    };                                                                        
};
#include "magic/compatibility_context_element_t.end.hpp"
