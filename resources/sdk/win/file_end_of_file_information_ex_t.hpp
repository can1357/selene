#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_end_of_file_information_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_END_OF_FILE_INFORMATION_EX]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_end_of_file_information_ex_t 
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 int64_t  end_of_file;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EndOfFile
        _m01 int64_t  paging_file_size_in_mm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagingFileSizeInMM
        _m02 int64_t  paging_file_max_size;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagingFileMaxSize
        _m03 uint32_t flags;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_FILE_END_OF_FILE_INFORMATION_EX.$", 0x20, true, 0x1b076d8fcb4d2354 );                       
        SDK_FIXED_SIZE( file_end_of_file_information_ex_t, 0x20 );                       
    };                                       
};
#include "magic/file_end_of_file_information_ex_t.end.hpp"
SDK_VERIFY( struct win::file_end_of_file_information_ex_t, 0x20 );
