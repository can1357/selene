#pragma once
#include <sdkgen/support_library.hpp>
#include "as_device_t.hpp"
#include "../nt/guid_t.hpp"
#include "as_pre_veto_t.hpp"
#include "as_activator_t.hpp"
#include "as_connection_t.hpp"
#include "as_soc_subsystem_t.hpp"
#include "as_activator_task_t.hpp"
#include "as_activator_subtask_t.hpp"
#include "as_pdc_phase_blocker_group_t.hpp"
#include "as_pdc_phase_blocker_group_client_t.hpp"

#include "magic/sleepstudy_blocker_guid_t.start.hpp"
namespace wdf
{
    // [union _SLEEPSTUDY_BLOCKER_GUID]
    // => Windows 11
    //
    union sleepstudy_blocker_guid_t                                                            
    {                                                                                          
        // Windows 11                                                                          
        //                                                                                     
        _m00 struct wdf::as_device_t                         as_device;                          //{ +0x0000    } | .AsDevice
        _m01 struct wdf::as_activator_t                      as_activator;                       //{ +0x0000    } | .AsActivator
        _m02 struct wdf::as_activator_task_t                 as_activator_task;                  //{ +0x0000    } | .AsActivatorTask
        _m03 struct wdf::as_activator_subtask_t              as_activator_subtask;               //{ +0x0000    } | .AsActivatorSubtask
        _m04 struct wdf::as_connection_t                     as_connection;                      //{ +0x0000    } | .AsConnection
        _m05 struct wdf::as_soc_subsystem_t                  as_soc_subsystem;                   //{ +0x0000    } | .AsSocSubsystem
        _m06 struct wdf::as_pre_veto_t                       as_pre_veto;                        //{ +0x0000    } | .AsPreVeto
        _m07 struct wdf::as_pdc_phase_blocker_group_t        as_pdc_phase_blocker_group;         //{ +0x0000    } | .AsPdcPhaseBlockerGroup
        _m08 struct wdf::as_pdc_phase_blocker_group_client_t as_pdc_phase_blocker_group_client;  //{ +0x0000    } | .AsPdcPhaseBlockerGroupClient
        _m09 struct nt::guid_t                               as_guid;                            //{ +0x0000    } | .AsGuid
                                                                                               
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_BLOCKER_GUID.$", 0x0, false, 0x6db0f7fd0c04a433 );                                  
        SDK_FIXED_SIZE( sleepstudy_blocker_guid_t, 0x10 );                                     
    };                                                                                         
};
#include "magic/sleepstudy_blocker_guid_t.end.hpp"
SDK_VERIFY( union wdf::sleepstudy_blocker_guid_t, 0x10 );
