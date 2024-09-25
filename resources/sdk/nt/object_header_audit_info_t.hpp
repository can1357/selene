#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_audit_info_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HEADER_AUDIT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_audit_info_t  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                             
        _m00 void* security_descriptor;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityDescriptor
                                       
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_AUDIT_INFO.$", 0x10, true, 0x6da957f8bc6168f );                    
        SDK_FIXED_SIZE( object_header_audit_info_t, 0x10 );                    
    };                                 
};
#include "magic/object_header_audit_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_audit_info_t, 0x10 );
