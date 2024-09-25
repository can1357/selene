#pragma once
#include <sdkgen/support_library.hpp>
#include "journal_change_information_class_t.hpp"

#include "magic/journal_set_key_security_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_SET_KEY_SECURITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_set_key_security_information_t                                        
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                               
        _m00 enum win::journal_change_information_class_t action;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 nt::unicode_view                             key_path_name;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyPathName
        _m04 uint32_t                                     old_security_descriptor_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OldSecurityDescriptorLength
        _m05 void*                                        old_security_descriptor;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OldSecurityDescriptor
        _m06 uint32_t                                     new_security_descriptor_length;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NewSecurityDescriptorLength
        _m07 void*                                        new_security_descriptor;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NewSecurityDescriptor
                                                                                         
        SDK_MAGIC_PROPERTIES( "_JOURNAL_SET_KEY_SECURITY_INFORMATION.$", 0x48, true, 0xfd82528667d33721 );                               
        SDK_FIXED_SIZE( journal_set_key_security_information_t, 0x48 );                               
    };                                                                                   
};
#include "magic/journal_set_key_security_information_t.end.hpp"
SDK_VERIFY( struct win::journal_set_key_security_information_t, 0x48 );
