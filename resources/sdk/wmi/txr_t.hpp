#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/txr_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TXR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct txr_t                                 
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 int64_t                initial_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialTime
        _m01 struct nt::guid_t      tx_rguid;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TxRGUID
        _m02 uint32_t               status;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
        _m03 uint32_t               uow_count;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .UowCount
        _m04 sdk::array<wchar_t, 1> hive;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Hive
                                                 
        SDK_MAGIC_PROPERTIES( "_WMI_TXR.$", 0x28, true, 0xd7b6b3a4f45a408e );             
        SDK_FIXED_SIZE( txr_t, 0x28 );             
    };                                           
};
#include "magic/txr_t.end.hpp"
SDK_VERIFY( struct wmi::txr_t, 0x28 );
