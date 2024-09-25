#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/customdb_exe_reg_db_entry_t.start.hpp"
namespace win
{
    // [struct _CUSTOMDB_EXE_REG_DB_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct customdb_exe_reg_db_entry_t       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct nt::guid_t guid_db;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guidDB
        _m01 uint64_t          li_time_stamp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .liTimeStamp
                                             
        SDK_MAGIC_PROPERTIES( "_CUSTOMDB_EXE_REG_DB_ENTRY.$", 0x18, true, 0x674fb80aaa19487f );              
        SDK_FIXED_SIZE( customdb_exe_reg_db_entry_t, 0x18 );              
    };                                       
};
#include "magic/customdb_exe_reg_db_entry_t.end.hpp"
SDK_VERIFY( struct win::customdb_exe_reg_db_entry_t, 0x18 );
