#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/customdb_reg_info_t.start.hpp"
namespace win
{
    // [struct _CUSTOMDB_REG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct customdb_reg_info_t                                   
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                       
        _m00 uint32_t          dw_size_cb;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeCb
        _m01 wchar_t*          pwsz_reg_key_path;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszRegKeyPath
        _m02 struct nt::guid_t guid_db_from_key_name;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .guidDBFromKeyName
        _m03 wchar_t*          pwsz_reg_val_db_path;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pwszRegValDbPath
        _m04 uint64_t          ull_reg_val_db_install_time_stamp;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullRegValDbInstallTimeStamp
        _m05 wchar_t*          pwsz_reg_val_db_description;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pwszRegValDbDescription
        _m06 uint32_t          dw_reg_val_db_type;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwRegValDbType
        _m07 uint32_t          dw_reg_info_validation_flags;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwRegInfoValidationFlags
        _m08 uint32_t          dw_reg_file_compare_flags;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwRegFileCompareFlags
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                       
        _m09 uint32_t          dw_reg_val_db_runtime_platform;     //{ +0x0044    +0x0044    +0x0044    } | .dwRegValDbRuntimePlatform
                                                                 
        SDK_MAGIC_PROPERTIES( "_CUSTOMDB_REG_INFO.$", 0x48, true, 0x6db294b308032b13 );                                  
        SDK_FIXED_SIZE( customdb_reg_info_t, 0x48 );                                  
    };                                                           
};
#include "magic/customdb_reg_info_t.end.hpp"
SDK_VERIFY( struct win::customdb_reg_info_t, 0x48 );
