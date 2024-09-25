#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_standard_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_STANDARD_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_standard_information_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  allocation_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationSize
        _m01 int64_t  end_of_file;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EndOfFile
        _m02 uint32_t number_of_links;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfLinks
        _m03 uint8_t  delete_pending;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .DeletePending
        _m04 uint8_t  directory;        //{ +0x0015    +0x0015    +0x0015    +0x0015    +0x0015    } | .Directory
                                      
        SDK_NONVOL_PROPERTIES( "_FILE_STANDARD_INFORMATION.$", 0x18, true, 0x1b54ca11882e88a3 );                
        SDK_FIXED_SIZE( file_standard_information_t, 0x18 );                
    };                                
};
#include "magic/file_standard_information_t.end.hpp"
SDK_VERIFY( struct nt::file_standard_information_t, 0x18 );
