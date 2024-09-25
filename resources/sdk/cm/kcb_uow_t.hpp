#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/hstorage_type_t.hpp"
#include "../nt/uo_w_action_type_t.hpp"

namespace cmp { struct discard_and_replace_kcb_context_t; }

#include "magic/kcb_uow_t.start.hpp"
namespace cm
{
    struct trans_t;
    struct kcb_uow_t;
    struct intent_lock_t;
    struct uow_set_sd_data_t;
    struct key_control_block_t;
    struct key_security_cache_t;
    struct uow_set_value_key_data_t;
    struct uow_set_value_list_data_t;
    struct uow_key_state_modification_t;

    // [struct _CM_KCB_UOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kcb_uow_t                                                                 
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                           
        _m000 nt::list_entry_t                               transaction_list_entry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionListEntry
        _m001 struct cm::intent_lock_t*                      kcb_lock;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KCBLock
        _m002 struct cm::intent_lock_t*                      key_lock;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyLock
        _m003 nt::list_entry_t                               kcb_list_entry;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KCBListEntry
        _m004 struct cm::key_control_block_t*                key_control_block;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .KeyControlBlock
        _m005 struct cm::trans_t*                            transaction;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Transaction
        _m006 uint32_t                                       uo_w_state;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UoWState
        _m007 enum nt::uo_w_action_type_t                    action_type;              //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ActionType
        _m008 enum nt::hstorage_type_t                       storage_type;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StorageType
        _m009 struct cm::kcb_uow_t*                          parent_uo_w;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ParentUoW
        _m010 struct cm::key_control_block_t*                child_kcb;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ChildKCB
        _m011 uint32_t                                       volatile_key_cell;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .VolatileKeyCell
        _m012 uint32_t                                       old_value_cell;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OldValueCell
        _m013 uint32_t                                       new_value_cell;           //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .NewValueCell
        _m014 uint32_t                                       user_flags;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .UserFlags
        _m015 int64_t                                        last_write_time;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LastWriteTime
        _m016 uint32_t                                       tx_security_cell;         //{ +0x0058    +0x0060    +0x0060    +0x0060    } | .TxSecurityCell
        _m017 struct cm::key_control_block_t*                old_child_kcb;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OldChildKCB
        _m018 struct cm::key_control_block_t*                new_child_kcb;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NewChildKCB
        _m019 struct cm::key_control_block_t*                other_child_kcb;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OtherChildKCB
        _m020 uint32_t                                       this_volatile_key_cell;   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ThisVolatileKeyCell
        _m021 void*                                          prepare_data_pointer;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PrepareDataPointer
        _m022 struct cm::uow_set_sd_data_t*                  security_data;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SecurityData
        _m023 struct cm::uow_key_state_modification_t*       modify_keys_data;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ModifyKeysData
        _m024 struct cm::uow_set_value_list_data_t*          set_value_data;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SetValueData
        _m025 struct cm::uow_set_value_key_data_t*           value_data;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ValueData
        _m026 struct cmp::discard_and_replace_kcb_context_t* discard_replace_context;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .DiscardReplaceContext
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                           
        _m027 struct cm::key_security_cache_t*               tx_cached_security;       //{ +0x0058    +0x0058    +0x0058    } | .TxCachedSecurity
                                                                                     
        SDK_MAGIC_PROPERTIES( "_CM_KCB_UOW.$", 0x78, true, 0xde36cb99f11177bf );                        
        SDK_FIXED_SIZE( kcb_uow_t, 0x78 );                                           
    };                                                                               
};
#include "magic/kcb_uow_t.end.hpp"
SDK_VERIFY( struct cm::kcb_uow_t, 0x78 );
