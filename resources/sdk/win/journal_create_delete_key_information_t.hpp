#pragma once
#include <sdkgen/support_library.hpp>
#include "journal_change_information_class_t.hpp"

#include "magic/journal_create_delete_key_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_CREATE_DELETE_KEY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_create_delete_key_information_t                                   
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                           
        _m00 enum win::journal_change_information_class_t action;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 nt::unicode_view                             key_path_name;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyPathName
        _m04 uint32_t                                     security_descriptor_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityDescriptorLength
        _m05 void*                                        security_descriptor;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SecurityDescriptor
        _m06 uint16_t                                     class_length;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ClassLength
        _m07 void*                                        class_data;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClassData
        _m08 uint8_t                                      symbolic_link;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SymbolicLink
                                                                                     
        SDK_MAGIC_PROPERTIES( "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.$", 0x50, true, 0x7159c8b3dbe5c1e1 );                           
        SDK_FIXED_SIZE( journal_create_delete_key_information_t, 0x50 );                           
    };                                                                               
};
#include "magic/journal_create_delete_key_information_t.end.hpp"
SDK_VERIFY( struct win::journal_create_delete_key_information_t, 0x50 );
