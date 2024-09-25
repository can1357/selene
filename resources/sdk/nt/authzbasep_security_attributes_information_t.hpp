#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/authzbasep_security_attributes_information_t.start.hpp"
namespace nt
{
    // [struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct authzbasep_security_attributes_information_t        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                     
        _m00 uint32_t         security_attribute_count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityAttributeCount
        _m01 nt::list_entry_t security_attributes_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityAttributesList
        _m02 uint32_t         working_security_attribute_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkingSecurityAttributeCount
        _m03 nt::list_entry_t working_security_attributes_list;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WorkingSecurityAttributesList
                                                               
        SDK_MAGIC_PROPERTIES( "_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.$", 0x30, true, 0xd5eca3c3652ec805 );                                 
        SDK_FIXED_SIZE( authzbasep_security_attributes_information_t, 0x30 );                                 
    };                                                         
};
#include "magic/authzbasep_security_attributes_information_t.end.hpp"
SDK_VERIFY( struct nt::authzbasep_security_attributes_information_t, 0x30 );
