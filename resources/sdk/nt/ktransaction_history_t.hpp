#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktransaction_history_t.start.hpp"
namespace nt
{
    // [struct _KTRANSACTION_HISTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktransaction_history_t                            
    {                                                        
        enum class u0_record_type_t : int32_t                
        {                                                    
            commit_transaction_result =   0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            rollback_transaction_result = 0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                   
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                   
        _m00 u0_record_type_t                    record_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RecordType
        _m01 uint32_t                            payload;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Payload
                                                             
        SDK_MAGIC_PROPERTIES( "_KTRANSACTION_HISTORY.$", 0x8, true, 0xf890762aea53ba4b );            
        SDK_FIXED_SIZE( ktransaction_history_t, 0x8 );            
    };                                                       
};
#include "magic/ktransaction_history_t.end.hpp"
SDK_VERIFY( struct nt::ktransaction_history_t, 0x8 );
