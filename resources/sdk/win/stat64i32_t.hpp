#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stat64i32_t.start.hpp"
namespace win
{
    // [struct _stat64i32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stat64i32_t         
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t st_dev;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .st_dev
        _m01 uint16_t st_ino;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .st_ino
        _m02 uint16_t st_mode;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .st_mode
        _m03 int16_t  st_nlink;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .st_nlink
        _m04 int16_t  st_uid;    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .st_uid
        _m05 int16_t  st_gid;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .st_gid
        _m06 uint32_t st_rdev;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .st_rdev
        _m07 int32_t  st_size;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .st_size
        _m08 int64_t  st_atime;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .st_atime
        _m09 int64_t  st_mtime;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .st_mtime
        _m10 int64_t  st_ctime;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .st_ctime
                               
        SDK_MAGIC_PROPERTIES( "_stat64i32.$", 0x30, true, 0x5cb66145aad9036e );         
        SDK_FIXED_SIZE( stat64i32_t, 0x30 );         
    };                         
};
#include "magic/stat64i32_t.end.hpp"
SDK_VERIFY( struct win::stat64i32_t, 0x30 );
