#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/customdb_exe_reg_info_t.start.hpp"
namespace win
{
    // [struct _CUSTOMDB_EXE_REG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct customdb_exe_reg_info_t      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_size_cb;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeCb
        _m01 wchar_t* pwsz_name;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszName
        _m02 int32_t  b_layer;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bLayer
        _m03 uint32_t dw_db_entry_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwDbEntryCount
                                        
        SDK_MAGIC_PROPERTIES( "_CUSTOMDB_EXE_REG_INFO.$", 0x18, true, 0xab50ae2ac3793294 );                  
        SDK_FIXED_SIZE( customdb_exe_reg_info_t, 0x18 );                  
    };                                  
};
#include "magic/customdb_exe_reg_info_t.end.hpp"
SDK_VERIFY( struct win::customdb_exe_reg_info_t, 0x18 );
