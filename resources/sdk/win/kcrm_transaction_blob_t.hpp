#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kcrm_transaction_blob_t.start.hpp"
namespace win
{
    // [struct _KCRM_TRANSACTION_BLOB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kcrm_transaction_blob_t                   
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 struct nt::guid_t       uow;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UOW
        _m01 struct nt::guid_t       tm_identity;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TmIdentity
        _m02 uint32_t                isolation_level;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .IsolationLevel
        _m03 uint32_t                isolation_flags;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .IsolationFlags
        _m04 uint32_t                timeout;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Timeout
        _m05 sdk::array<wchar_t, 64> description;      //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Description
                                                     
        SDK_NONVOL_PROPERTIES( "_KCRM_TRANSACTION_BLOB.$", 0xac, true, 0x1e919e246f1acbd1 );                
        SDK_FIXED_SIZE( kcrm_transaction_blob_t, 0xac );                
    };                                               
};
#include "magic/kcrm_transaction_blob_t.end.hpp"
SDK_VERIFY( struct win::kcrm_transaction_blob_t, 0xac );
