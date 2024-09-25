#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_file_direnum_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FILE_DIRENUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_file_direnum_t                    
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint64_t               irp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint64_t               file_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 uint64_t               file_key;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileKey
        _m03 uint32_t               issuing_thread_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IssuingThreadId
        _m04 uint32_t               length;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Length
        _m05 uint32_t               info_class;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InfoClass
        _m06 uint32_t               file_index;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FileIndex
        _m07 sdk::array<wchar_t, 1> file_name;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileName
                                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FILE_DIRENUM.$", 0x30, true, 0x225dca04138a07df );                  
        SDK_FIXED_SIZE( perfinfo_file_direnum_t, 0x30 );                  
    };                                                
};
#include "magic/perfinfo_file_direnum_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_file_direnum_t, 0x30 );
