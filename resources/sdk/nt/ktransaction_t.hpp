#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kdpc_t.hpp"
#include "kevent_t.hpp"
#include "ktimer_t.hpp"
#include "kmutant_t.hpp"
#include "../cls/lsn_t.hpp"
#include "work_queue_item_t.hpp"
#include "ktransaction_state_t.hpp"
#include "ktransaction_history_t.hpp"
#include "ktransaction_outcome_t.hpp"
#include "ktmobject_namespace_link_t.hpp"

#include "magic/ktransaction_t.start.hpp"
namespace nt
{
    struct ktm_t;
    struct kthread_t;
    struct kenlistment_t;
    struct ktransaction_t;

    // [struct _KTRANSACTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktransaction_t                                                                 
    {                                                                                     
        using transaction_history_t = sdk::array<struct nt::ktransaction_history_t, 10>;                                      
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                
        _m000 struct nt::kevent_t                   outcome_event;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutcomeEvent
        _m001 uint32_t                              cookie;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cookie
        _m002 struct nt::kmutant_t                  mutex;                                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Mutex
        _m003 struct nt::ktransaction_t*            tree_tx;                                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .TreeTx
        _m004 struct nt::ktmobject_namespace_link_t global_namespace_link;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .GlobalNamespaceLink
        _m005 struct nt::ktmobject_namespace_link_t tm_namespace_link;                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .TmNamespaceLink
        _m006 struct nt::guid_t                     uow;                                    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .UOW
        _m007 enum nt::ktransaction_state_t         state;                                  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .State
        _m008 uint32_t                              flags;                                  //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .Flags
        _m009 nt::list_entry_t                      enlistment_head;                        //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .EnlistmentHead
        _m010 uint32_t                              enlistment_count;                       //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .EnlistmentCount
        _m011 uint32_t                              recoverable_enlistment_count;           //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .RecoverableEnlistmentCount
        _m012 uint32_t                              pre_prepare_required_enlistment_count;  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .PrePrepareRequiredEnlistmentCount
        _m013 uint32_t                              prepare_required_enlistment_count;      //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .PrepareRequiredEnlistmentCount
        _m014 uint32_t                              outcome_required_enlistment_count;      //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .OutcomeRequiredEnlistmentCount
        _m015 uint32_t                              pending_responses;                      //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .PendingResponses
        _m016 struct nt::kenlistment_t*             superior_enlistment;                    //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .SuperiorEnlistment
        _m017 union cls::lsn_t                      last_lsn;                               //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .LastLsn
        _m018 nt::list_entry_t                      promoted_entry;                         //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .PromotedEntry
        _m019 struct nt::ktransaction_t*            promoter_transaction;                   //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .PromoterTransaction
        _m020 void*                                 promote_propagation;                    //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .PromotePropagation
        _m021 uint32_t                              isolation_level;                        //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .IsolationLevel
        _m022 uint32_t                              isolation_flags;                        //{ +0x0124    +0x0124    +0x0124    +0x0124    } | .IsolationFlags
        _m023 int64_t                               timeout;                                //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .Timeout
        _m024 nt::unicode_view                      description;                            //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .Description
        _m025 struct nt::kthread_t*                 rollback_thread;                        //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .RollbackThread
        _m026 struct nt::work_queue_item_t          rollback_work_item;                     //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .RollbackWorkItem
        _m027 struct nt::kdpc_t                     rollback_dpc;                           //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .RollbackDpc
        _m028 struct nt::ktimer_t                   rollback_timer;                         //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .RollbackTimer
        _m029 nt::list_entry_t                      lsn_ordered_entry;                      //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .LsnOrderedEntry
        _m030 enum nt::ktransaction_outcome_t       outcome;                                //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .Outcome
        _m031 struct nt::ktm_t*                     tm;                                     //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .Tm
        _m032 int64_t                               commit_reservation;                     //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .CommitReservation
        _m033 transaction_history_t                 transaction_history;                    //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .TransactionHistory
        _m034 uint32_t                              transaction_history_count;              //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .TransactionHistoryCount
        _m035 void*                                 dtc_private_information;                //{ +0x0268    +0x0268    +0x0268    +0x0268    } | .DTCPrivateInformation
        _m036 uint32_t                              dtc_private_information_length;         //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .DTCPrivateInformationLength
        _m037 struct nt::kmutant_t                  dtc_private_information_mutex;          //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .DTCPrivateInformationMutex
        _m038 void*                                 promoted_tx_self_handle;                //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .PromotedTxSelfHandle
        _m039 uint32_t                              pending_promotion_count;                //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .PendingPromotionCount
        _m040 struct nt::kevent_t                   promotion_completed_event;              //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .PromotionCompletedEvent
                                                                                          
        SDK_MAGIC_PROPERTIES( "_KTRANSACTION.$", 0x2d8, true, 0x95d17463cd878f3b );                                      
        SDK_DYNAMIC_SIZE( ktransaction_t );                                               
    };                                                                                    
};
#include "magic/ktransaction_t.end.hpp"
