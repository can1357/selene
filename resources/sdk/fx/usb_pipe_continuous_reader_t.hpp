#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_pipe_repeat_reader_t.hpp"
#include "../wdf/wdfmemory_offset_t.hpp"

namespace nt  { struct device_object_t; }
namespace nt  { struct kthread_t;       }
namespace wdf { struct wdfmemory_t;     }
namespace wdf { struct wdfusbpipe_t;    }

#include "magic/usb_pipe_continuous_reader_t.start.hpp"
namespace fx
{
    class usb_pipe_t;
    class lookaside_list_t;
    class system_work_item_t;

    // [struct FxUsbPipeContinuousReader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_pipe_continuous_reader_t                                         
    {                                                                           
        using pfn_wdf_usb_reader_completion_routine_t = sdk::function<void(struct wdf::wdfusbpipe_t*, struct wdf::wdfmemory_t*, uint64_t, void*)>*;                          
        using pfn_wdf_usb_readers_failed_t =            sdk::function<uint8_t(struct wdf::wdfusbpipe_t*, int32_t, int32_t)>*;                          
        using m_readers_t =                             sdk::array<struct fx::usb_pipe_repeat_reader_t, 1>;                          
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 pfn_wdf_usb_reader_completion_routine_t  m_read_complete_callback;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_ReadCompleteCallback
        _m01 void*                                    m_read_complete_context;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_ReadCompleteContext
        _m02 pfn_wdf_usb_readers_failed_t             m_readers_failed_callback;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_ReadersFailedCallback
        _m03 class fx::usb_pipe_t*                    m_pipe;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_Pipe
        _m04 class fx::lookaside_list_t*              m_lookaside;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Lookaside
        _m05 struct nt::device_object_t*              m_target_device;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_TargetDevice
        _m06 struct wdf::wdfmemory_offset_t           m_offsets;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_Offsets
        _m07 class fx::system_work_item_t*            m_work_item;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_WorkItem
        _m08 void*                                    m_work_item_rerun_context;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_WorkItemRerunContext
        _m09 struct nt::kthread_t volatile*           m_work_item_thread;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_WorkItemThread
        _m10 uint32_t                                 m_work_item_flags;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_WorkItemFlags
        _m11 uint8_t                                  m_num_failed_readers;       //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .m_NumFailedReaders
        _m12 uint8_t                                  m_num_readers;              //{ +0x005d    +0x005d    +0x005d    +0x005d    } | .m_NumReaders
        _m13 uint8_t                                  m_work_item_queued;         //{ +0x005e    +0x005e    +0x005e    +0x005e    } | .m_WorkItemQueued
        _m14 uint8_t                                  m_readers_submitted;        //{ +0x005f    +0x005f    +0x005f    +0x005f    } | .m_ReadersSubmitted
        _m15 m_readers_t                              m_readers;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Readers
                                                                                
        SDK_MAGIC_PROPERTIES( "FxUsbPipeContinuousReader.$", 0xd8, true, 0x7de46206e766f20c );                          
        SDK_FIXED_SIZE( usb_pipe_continuous_reader_t, 0xd8 );                          
    };                                                                          
};
#include "magic/usb_pipe_continuous_reader_t.end.hpp"
SDK_VERIFY( struct fx::usb_pipe_continuous_reader_t, 0xd8 );
