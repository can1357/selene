#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_access_log_entry_flag_t.start.hpp"
namespace pci
{
    // [union _PCI_CFG_ACCESS_LOG_ENTRY_FLAG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cfg_access_log_entry_flag_t 
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint1_t  read_access;      //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .ReadAccess
        _m01 uint1_t  internal_access;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .InternalAccess
        _m02 uint1_t  data_valid;       //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .DataValid
        _m03 uint29_t rsvd;             //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m04 uint32_t as_ulong;         //{ +0x0000    +0x0000    +0x0000    } | .AsULONG
                                      
        SDK_MAGIC_PROPERTIES( "_PCI_CFG_ACCESS_LOG_ENTRY_FLAG.$", 0x4, true, 0x66f54e8c9eb0ef8 );                
        SDK_FIXED_SIZE( cfg_access_log_entry_flag_t, 0x4 );                
    };                                
};
#include "magic/cfg_access_log_entry_flag_t.end.hpp"
SDK_VERIFY( union pci::cfg_access_log_entry_flag_t, 0x4 );
