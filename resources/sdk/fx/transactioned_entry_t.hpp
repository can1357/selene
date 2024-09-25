#pragma once
#include <sdkgen/support_library.hpp>
#include "list_transaction_action_t.hpp"

#include "magic/transactioned_entry_t.start.hpp"
namespace fx
{
    class object_t;

    // [struct FxTransactionedEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transactioned_entry_t                                       
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 nt::list_entry_t                   m_list_link;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_ListLink
        _m01 nt::list_entry_t                   m_transaction_link;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_TransactionLink
        _m02 enum fx::list_transaction_action_t m_transaction;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Transaction
        _m03 class fx::object_t*                m_transactioned_object;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_TransactionedObject
                                                                       
        SDK_MAGIC_PROPERTIES( "FxTransactionedEntry.$", 0x30, true, 0x38b238354c2aad38 );                       
        SDK_FIXED_SIZE( transactioned_entry_t, 0x30 );                       
    };                                                                 
};
#include "magic/transactioned_entry_t.end.hpp"
SDK_VERIFY( struct fx::transactioned_entry_t, 0x30 );
