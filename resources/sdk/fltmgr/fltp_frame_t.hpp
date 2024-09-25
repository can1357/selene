#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../nt/eresource_t.hpp"
#include "reserve_irpctrl_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "flt_mutex_list_head_t.hpp"
#include "flt_resource_list_head_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "fltp_irpctrl_stack_profiler_t.hpp"

namespace nt { struct kresourcemanager_t; }

#include "magic/fltp_frame_t.start.hpp"
namespace fltmgr
{
    struct flt_prcb_t;

    // [struct _FLTP_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fltp_frame_t                                                                 
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                              
        _m00 union fltmgr::flt_type_t                     type;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 nt::list_entry_t                             links;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Links
        _m02 uint32_t                                     frame_id;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FrameID
        _m03 nt::unicode_view                             altitude_interval_low;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AltitudeIntervalLow
        _m04 nt::unicode_view                             altitude_interval_high;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AltitudeIntervalHigh
        _m05 uint8_t                                      large_irp_ctrl_stack_size;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LargeIrpCtrlStackSize
        _m06 uint8_t                                      small_irp_ctrl_stack_size;      //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .SmallIrpCtrlStackSize
        _m07 struct fltmgr::flt_resource_list_head_t      registered_filters;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RegisteredFilters
        _m08 struct fltmgr::flt_resource_list_head_t      attached_volumes;               //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .AttachedVolumes
        _m09 nt::list_entry_t                             mounting_volumes;               //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .MountingVolumes
        _m10 struct fltmgr::flt_mutex_list_head_t         attached_file_systems;          //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .AttachedFileSystems
        _m11 struct fltmgr::flt_mutex_list_head_t         zombied_flt_object_contexts;    //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .ZombiedFltObjectContexts
        _m12 void*                                        ktm_resource_manager_handle;    //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .KtmResourceManagerHandle
        _m13 struct nt::kresourcemanager_t*               ktm_resource_manager;           //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .KtmResourceManager
        _m14 struct nt::eresource_t                       filter_unload_lock;             //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .FilterUnloadLock
        _m15 struct nt::fast_mutex_t                      device_object_attach_lock;      //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .DeviceObjectAttachLock
        _m16 struct fltmgr::flt_prcb_t*                   prcb;                           //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | .Prcb
        _m17 void*                                        prcb_pool_to_free;              //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .PrcbPoolToFree
        _m18 void*                                        lookaside_pool_to_free;         //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .LookasidePoolToFree
        _m19 struct fltmgr::fltp_irpctrl_stack_profiler_t irp_ctrl_stack_profiler;        //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .IrpCtrlStackProfiler
        _m20 struct nt::npaged_lookaside_list_t           small_irp_ctrl_lookaside_list;  //{ +0x0400    +0x0400    +0x0400    +0x0400    } | .SmallIrpCtrlLookasideList
        _m21 struct nt::npaged_lookaside_list_t           large_irp_ctrl_lookaside_list;  //{ +0x0480    +0x0480    +0x0480    +0x0480    } | .LargeIrpCtrlLookasideList
        _m22 struct fltmgr::reserve_irpctrl_t             reserve_irp_ctrls;              //{ +0x0500    +0x0500    +0x0500    +0x0500    } | .ReserveIrpCtrls
                                                                                        
        SDK_MAGIC_PROPERTIES( "_FLTP_FRAME.$", 0x780, true, 0xc074168b47ce6bed );                              
        SDK_FIXED_SIZE( fltp_frame_t, 0x780 );                                          
    };                                                                                  
};
#include "magic/fltp_frame_t.end.hpp"
SDK_VERIFY( struct fltmgr::fltp_frame_t, 0x780 );
