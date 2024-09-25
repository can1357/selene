#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_reference_range_t.start.hpp"
namespace win
{
    // [struct _FILE_REFERENCE_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_reference_range_t                    
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint64_t starting_file_reference_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingFileReferenceNumber
        _m01 uint64_t ending_file_reference_number;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EndingFileReferenceNumber
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_REFERENCE_RANGE.$", 0x10, true, 0x7f46f74ab94a4907 );                               
        SDK_FIXED_SIZE( file_reference_range_t, 0x10 );                               
    };                                               
};
#include "magic/file_reference_range_t.end.hpp"
SDK_VERIFY( struct win::file_reference_range_t, 0x10 );
