#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_network_open_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_NETWORK_OPEN_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_network_open_information_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  creation_time;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreationTime
        _m01 int64_t  last_access_time;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LastAccessTime
        _m02 int64_t  last_write_time;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastWriteTime
        _m03 int64_t  change_time;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ChangeTime
        _m04 int64_t  allocation_size;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .AllocationSize
        _m05 int64_t  end_of_file;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .EndOfFile
        _m06 uint32_t file_attributes;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FileAttributes
                                          
        SDK_NONVOL_PROPERTIES( "_FILE_NETWORK_OPEN_INFORMATION.$", 0x38, true, 0xc526a56b408ea758 );                 
        SDK_FIXED_SIZE( file_network_open_information_t, 0x38 );                 
    };                                    
};
#include "magic/file_network_open_information_t.end.hpp"
SDK_VERIFY( struct nt::file_network_open_information_t, 0x38 );
