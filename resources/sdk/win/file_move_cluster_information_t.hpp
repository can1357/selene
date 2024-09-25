#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_move_cluster_information_t.start.hpp"
namespace win
{
    // [struct _FILE_MOVE_CLUSTER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_move_cluster_information_t           
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               cluster_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClusterCount
        _m01 void*                  root_directory;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m02 uint32_t               file_name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNameLength
        _m03 sdk::array<wchar_t, 1> file_name;         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FileName
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_MOVE_CLUSTER_INFORMATION.$", 0x18, true, 0x775d776563fcb570 );                 
        SDK_FIXED_SIZE( file_move_cluster_information_t, 0x18 );                 
    };                                               
};
#include "magic/file_move_cluster_information_t.end.hpp"
SDK_VERIFY( struct win::file_move_cluster_information_t, 0x18 );
