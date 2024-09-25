#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_read_write_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_READ_WRITE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_read_write_t   
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t offset;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint64_t irp;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 uint64_t file_object;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileObject
        _m03 uint64_t file_key;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileKey
        _m04 uint32_t issuing_thread_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IssuingThreadId
        _m05 uint32_t size;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Size
        _m06 uint32_t flags;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m07 uint32_t extra_flags;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ExtraFlags
                                        
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_READ_WRITE.$", 0x30, true, 0x6c2b7729b9f8a40a );                  
        SDK_FIXED_SIZE( perfinfo_file_read_write_t, 0x30 );                  
    };                                  
};
#include "magic/perfinfo_file_read_write_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_read_write_t, 0x30 );
