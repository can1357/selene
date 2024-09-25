#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_file_detailed_information_t.start.hpp"
namespace win
{
    // [struct _ASSEMBLY_FILE_DETAILED_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct assembly_file_detailed_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                     
        _m00 uint32_t       ul_flags;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulFlags
        _m01 uint32_t       ul_filename_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulFilenameLength
        _m02 uint32_t       ul_path_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulPathLength
        _m03 const wchar_t* lp_file_name;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpFileName
        _m04 const wchar_t* lp_file_path;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpFilePath
                                               
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_FILE_DETAILED_INFORMATION.$", 0x20, true, 0x8622eaae3e2f8add );                   
        SDK_FIXED_SIZE( assembly_file_detailed_information_t, 0x20 );                   
    };                                         
};
#include "magic/assembly_file_detailed_information_t.end.hpp"
SDK_VERIFY( struct win::assembly_file_detailed_information_t, 0x20 );
