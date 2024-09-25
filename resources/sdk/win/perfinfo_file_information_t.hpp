#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_information_t  
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t irp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint64_t file_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 uint64_t file_key;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileKey
        _m03 uint64_t extra_information;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExtraInformation
        _m04 uint32_t issuing_thread_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IssuingThreadId
        _m05 uint32_t info_class;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .InfoClass
                                        
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_INFORMATION.$", 0x28, true, 0x9b6a1c4ad954a661 );                  
        SDK_FIXED_SIZE( perfinfo_file_information_t, 0x28 );                  
    };                                  
};
#include "magic/perfinfo_file_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_information_t, 0x28 );
