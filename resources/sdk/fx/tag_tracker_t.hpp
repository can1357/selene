#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "tag_history_t.hpp"
#include "tag_tracker_type_t.hpp"

#include "magic/tag_tracker_t.start.hpp"
namespace fx
{
    class object_t;
    struct driver_globals_t;
    struct tag_tracking_block_t;

    // [class FxTagTracker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class tag_tracker_t                                                 
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 struct fx::driver_globals_t*             m_globals;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Globals
        _m01 enum fx::tag_tracker_type_t              m_tracker_type;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_TrackerType
        _m02 uint8_t                                  m_capture_stack;    //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .m_CaptureStack
        _m03 class fx::object_t*                      m_owning_object;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_OwningObject
        _m04 nt::list_entry_t                         m_tracker_entry;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_TrackerEntry
        _m05 int32_t                                  m_failed_count;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_FailedCount
        _m06 class mx::lock_t                         m_spin_lock;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m07 struct fx::tag_tracking_block_t*         m_next;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_Next
        _m08 sdk::array<struct fx::tag_history_t, 25> m_tag_history;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_TagHistory
        _m09 int32_t                                  m_cur_ref_history;  //{ +0x04f8    +0x04f8    +0x04f8    +0x04f8    } | .m_CurRefHistory
                                                                        
        SDK_MAGIC_PROPERTIES( "FxTagTracker.$", 0x500, true, 0x936a911799105c30 );                  
        SDK_FIXED_SIZE( tag_tracker_t, 0x500 );                         
    };                                                                  
};
#include "magic/tag_tracker_t.end.hpp"
SDK_VERIFY( class fx::tag_tracker_t, 0x500 );
