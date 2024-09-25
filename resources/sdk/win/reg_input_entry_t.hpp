#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/reg_input_entry_t.start.hpp"
namespace win
{
    // [struct _RegInputEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_input_entry_t                 
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct nt::guid_t clsid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
        _m01 uint64_t          oxid;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .oxid
        _m02 struct nt::guid_t ipid;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ipid
        _m03 uint32_t          dw_flags;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwFlags
        _m04 uint32_t          ul_service_id;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ulServiceId
                                             
        SDK_MAGIC_PROPERTIES( "_RegInputEntry.$", 0x30, true, 0xfa7fd8044ed3a3b4 );              
        SDK_FIXED_SIZE( reg_input_entry_t, 0x30 );              
    };                                       
};
#include "magic/reg_input_entry_t.end.hpp"
SDK_VERIFY( struct win::reg_input_entry_t, 0x30 );
