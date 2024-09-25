#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kmutant_t.hpp"
#include "kenlistment_state_t.hpp"
#include "kenlistment_history_t.hpp"
#include "ktmobject_namespace_link_t.hpp"

#include "magic/kenlistment_t.start.hpp"
namespace nt
{
    struct kenlistment_t;
    struct ktransaction_t;
    struct kresourcemanager_t;
    struct ktmnotification_packet_t;

    // [struct _KENLISTMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kenlistment_t                                                                       
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                     
        _m000 uint32_t                                         cookie;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cookie
        _m001 struct nt::ktmobject_namespace_link_t            namespace_link;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NamespaceLink
        _m002 struct nt::guid_t                                enlistment_id;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EnlistmentId
        _m003 struct nt::kmutant_t                             mutex;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Mutex
        _m004 nt::list_entry_t                                 next_same_tx;                     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .NextSameTx
        _m005 nt::list_entry_t                                 next_same_rm;                     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .NextSameRm
        _m006 struct nt::kresourcemanager_t*                   resource_manager;                 //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ResourceManager
        _m007 struct nt::ktransaction_t*                       transaction;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Transaction
        _m008 enum nt::kenlistment_state_t                     state;                            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .State
        _m009 uint32_t                                         flags;                            //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .Flags
        _m010 uint32_t                                         notification_mask;                //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .NotificationMask
        _m011 void*                                            key;                              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Key
        _m012 uint32_t                                         key_ref_count;                    //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .KeyRefCount
        _m013 void*                                            recovery_information;             //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .RecoveryInformation
        _m014 uint32_t                                         recovery_information_length;      //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .RecoveryInformationLength
        _m015 void*                                            dynamic_name_information;         //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .DynamicNameInformation
        _m016 uint32_t                                         dynamic_name_information_length;  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .DynamicNameInformationLength
        _m017 struct nt::ktmnotification_packet_t*             final_notification;               //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .FinalNotification
        _m018 struct nt::kenlistment_t*                        sup_sub_enlistment;               //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .SupSubEnlistment
        _m019 void*                                            sup_sub_enl_handle;               //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .SupSubEnlHandle
        _m020 void*                                            subordinate_tx_handle;            //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .SubordinateTxHandle
        _m021 struct nt::guid_t                                crm_enlistment_en_id;             //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .CrmEnlistmentEnId
        _m022 struct nt::guid_t                                crm_enlistment_tm_id;             //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .CrmEnlistmentTmId
        _m023 struct nt::guid_t                                crm_enlistment_rm_id;             //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .CrmEnlistmentRmId
        _m024 uint32_t                                         next_history;                     //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .NextHistory
        _m025 sdk::array<struct nt::kenlistment_history_t, 20> history;                          //{ +0x013c    +0x013c    +0x013c    +0x013c    } | .History
                                                                                               
        SDK_MAGIC_PROPERTIES( "_KENLISTMENT.$", 0x1e0, true, 0x6515c4cfd2c2ef86 );                                
        SDK_DYNAMIC_SIZE( kenlistment_t );                                                     
    };                                                                                         
};
#include "magic/kenlistment_t.end.hpp"
