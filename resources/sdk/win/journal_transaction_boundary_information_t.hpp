#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "journal_change_information_class_t.hpp"

#include "magic/journal_transaction_boundary_information_t.start.hpp"
namespace win
{
    // [struct _JOURNAL_TRANSACTION_BOUNDARY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct journal_transaction_boundary_information_t                    
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                               
        _m00 enum win::journal_change_information_class_t action;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint64_t                                     record_number;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecordNumber
        _m02 int64_t                                      time_stamp;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m03 struct nt::guid_t                            transaction_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TransactionID
                                                                         
        SDK_MAGIC_PROPERTIES( "_JOURNAL_TRANSACTION_BOUNDARY_INFORMATION.$", 0x28, true, 0x128aaff9523b2abb );               
        SDK_FIXED_SIZE( journal_transaction_boundary_information_t, 0x28 );               
    };                                                                   
};
#include "magic/journal_transaction_boundary_information_t.end.hpp"
SDK_VERIFY( struct win::journal_transaction_boundary_information_t, 0x28 );
