#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_name_information_t; }

#include "magic/audit_process_creation_info_t.start.hpp"
namespace se
{
    // [struct _SE_AUDIT_PROCESS_CREATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct audit_process_creation_info_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                         
        _m00 struct nt::object_name_information_t* image_file_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageFileName
                                                                   
        SDK_MAGIC_PROPERTIES( "_SE_AUDIT_PROCESS_CREATION_INFO.$", 0x8, true, 0xb2e7e388db89c6ce );                
        SDK_FIXED_SIZE( audit_process_creation_info_t, 0x8 );                
    };                                                             
};
#include "magic/audit_process_creation_info_t.end.hpp"
SDK_VERIFY( struct se::audit_process_creation_info_t, 0x8 );
