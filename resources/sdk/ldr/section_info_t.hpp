#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_attributes_t; }

#include "magic/section_info_t.start.hpp"
namespace ldr
{
    // [struct _LDR_SECTION_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct section_info_t                                            
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                           
        _m00 void*                           section_handle;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionHandle
        _m01 uint32_t                        desired_access;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DesiredAccess
        _m02 struct nt::object_attributes_t* obj_a;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjA
        _m03 uint32_t                        section_page_protection;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionPageProtection
        _m04 uint32_t                        allocation_attributes;    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .AllocationAttributes
                                                                     
        SDK_NONVOL_PROPERTIES( "_LDR_SECTION_INFO.$", 0x20, true, 0xfcb4acdc1abe66fe );                        
        SDK_FIXED_SIZE( section_info_t, 0x20 );                        
    };                                                               
};
#include "magic/section_info_t.end.hpp"
SDK_VERIFY( struct ldr::section_info_t, 0x20 );
