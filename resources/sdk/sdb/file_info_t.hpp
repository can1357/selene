#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/db_header_t.hpp"

#include "magic/file_info_t.start.hpp"
namespace sdb
{
    // [struct _SDB_FILE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_info_t                                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                dw_size_cb;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeCb
        _m01 wchar_t*                pwsz_file_path;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszFilePath
        _m02 uint32_t                dw_file_validation_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFileValidationFlags
        _m03 struct win::db_header_t db_header;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dbHeader
        _m04 wchar_t*                pwsz_description;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pwszDescription
        _m05 struct nt::guid_t       guid_db;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .guidDB
                                                              
        SDK_MAGIC_PROPERTIES( "_SDB_FILE_INFO.$", 0x38, true, 0xf9e5cf0119895e5f );                         
        SDK_FIXED_SIZE( file_info_t, 0x38 );                         
    };                                                        
};
#include "magic/file_info_t.end.hpp"
SDK_VERIFY( struct sdb::file_info_t, 0x38 );
