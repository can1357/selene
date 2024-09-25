#pragma once
#include <sdkgen/support_library.hpp>
#include "aptkind_t.hpp"
#include "uninit_stage_t.hpp"
#include "apartment_type_t.hpp"

namespace tag { struct s_ole_tls_data_t; }

#include "magic/c_com_apartment_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    struct asta_state_t;
    class non_sta_state_t;
    class bridge_sta_state_t;
    class c_remote_unknown_t;
    struct classic_sta_state_t;

    // [class CComApartment]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_apartment_t                                                     
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                      
        _m00 uint32_t                         dw_state;                           //{ +0x0008    +0x0004    +0x0004    +0x0004    } | ._dwState
        _m01 const uint32_t                   apt_id;                             //{ +0x0010    +0x000c    +0x000c    +0x000c    } | ._AptId
        _m02 class win::oxid_entry_t*         p_oxid_entry;                       //{ +0x0018    +0x0010    +0x0010    +0x0010    } | ._pOXIDEntry
        _m03 class win::c_remote_unknown_t*   p_rem_unk;                          //{ +0x0020    +0x0018    +0x0018    +0x0018    } | ._pRemUnk
        _m04 int32_t                          c_waiters;                          //{ +0x0028    +0x0020    +0x0020    +0x0020    } | ._cWaiters
        _m05 void*                            h_event_oid;                        //{ +0x0030    +0x0028    +0x0028    +0x0028    } | ._hEventOID
        _m06 uint32_t                         c_pre_reg_oids_avail;               //{ +0x0038    +0x0030    +0x0030    +0x0030    } | ._cPreRegOidsAvail
        _m07 sdk::array<uint64_t, 20>         ar_pre_reg_oids;                    //{ +0x0040    +0x0038    +0x0038    +0x0038    } | ._arPreRegOids
        _m08 uint32_t                         c_oids_return;                      //{ +0x00e0    +0x00d8    +0x00d8    +0x00d8    } | ._cOidsReturn
        _m09 sdk::array<uint64_t, 20>         ar_oids_return;                     //{ +0x00e8    +0x00e0    +0x00e0    +0x00e0    } | ._arOidsReturn
        _m10 struct win::classic_sta_state_t* p_classic_sta_state;                //{ +0x0188    +0x0180    +0x0180    +0x0180    } | ._pClassicSTAState
        _m11 struct win::asta_state_t*        p_asta_state;                       //{ +0x0188    +0x0180    +0x0180    +0x0180    } | ._pASTAState
        _m12 uint64_t                         ui64_apartment_identifier;          //{ +0x01d0    +0x0198    +0x0198    +0x0198    } | ._ui64ApartmentIdentifier
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                      
        _m13 const enum win::apartment_type_t type;                               //{ +0x0008    +0x0008    +0x0008    } | ._type
        _m14 void*                            state;                              //{ +0x0180    +0x0180    +0x0180    } | ._state
        _m15 class win::non_sta_state_t*      p_non_sta_state;                    //{ +0x0180    +0x0180    +0x0180    } | ._pNonSTAState
        _m16 class win::bridge_sta_state_t*   p_bridge_sta_state;                 //{ +0x0180    +0x0180    +0x0180    } | ._pBridgeSTAState
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m17 uint32_t                         c_refs;                             //{ +0x0004    } | ._cRefs
        _m18 const enum win::aptkind_t        apt_kind;                           //{ +0x000c    } | ._AptKind
        _m19 void*                            h_event_asta_wake;                  //{ +0x0190    } | ._hEventASTAWake
        _m20 void*                            h_timer_free_unused_dlls;           //{ +0x0198    } | ._hTimerFreeUnusedDlls
        _m21 int32_t                          c_pending_git_registrations;        //{ +0x01a0    } | ._cPendingGitRegistrations
        _m22 void*                            h_event_pending_git_registrations;  //{ +0x01a8    } | ._hEventPendingGitRegistrations
        _m23 struct tag::s_ole_tls_data_t*    p_tls_sta;                          //{ +0x01b8    } | ._pTlsSTA
                                                                                
        // Windows 11                                                           
        //                                                                      
        _m24 enum win::uninit_stage_t         uninit_stage;                       //{ +0x01a8    } | ._uninitStage
                                                                                
        SDK_MAGIC_PROPERTIES( "CComApartment.$", 0x1a8, true, 0x52a16bbfcbc5431b );                                  
        SDK_DYNAMIC_SIZE( c_com_apartment_t );                                  
    };                                                                          
};
#include "magic/c_com_apartment_t.end.hpp"
