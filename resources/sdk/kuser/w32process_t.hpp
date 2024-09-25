#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_table_t.hpp"

namespace nt { struct eprocess_t; }
namespace nt { struct kevent_t;   }

#include "magic/w32process_t.start.hpp"
namespace kuser
{
    struct w32process_t;

    // [struct _W32PROCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct w32process_t                                                    
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                 
        _m000 struct nt::eprocess_t*      process;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Process
        _m001 uint32_t                    ref_count;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m002 uint32_t                    w32pf_flags;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .W32PF_Flags
        _m003 struct nt::kevent_t*        input_idle_event;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InputIdleEvent
        _m004 uint32_t                    start_cursor_hide_time;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StartCursorHideTime
        _m005 struct kuser::w32process_t* next_start;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextStart
        _m006 void*                       p_dc_attr_list;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pDCAttrList
        _m007 void*                       p_brush_attr_list;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pBrushAttrList
        _m008 uint32_t                    w32_pid;                           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .W32Pid
        _m009 int32_t                     gdi_handle_count;                  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .GDIHandleCount
        _m010 uint32_t                    gdi_handle_count_peak;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GDIHandleCountPeak
        _m011 int32_t                     user_handle_count;                 //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .UserHandleCount
        _m012 uint32_t                    user_handle_count_peak;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .UserHandleCountPeak
        _m013 struct ex::push_lock_t      gdi_push_lock;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GDIPushLock
        _m014 struct rtl::avl_table_t     gdi_eng_user_mem_alloc_table;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GDIEngUserMemAllocTable
        _m015 nt::list_entry_t            gdi_dc_attr_free_list;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .GDIDcAttrFreeList
        _m016 nt::list_entry_t            gdi_brush_attr_free_list;          //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .GDIBrushAttrFreeList
        _m017 nt::list_entry_t            gdiw32pid_locked_bitmaps;          //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .GDIW32PIDLockedBitmaps
        _m018 void*                       h_secure_gdi_shared_handle_table;  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .hSecureGdiSharedHandleTable
        _m019 void*                       dx_process;                        //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .DxProcess
        _m020 void*                       d_composition_process;             //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .DCompositionProcess
        _m021 uint32_t                    umpd_sandboxing_enabled;           //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .UMPDSandboxingEnabled
        _m022 void*                       p_wake_reference;                  //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .pWakeReference
        _m023 uint32_t                    default_dpi_context;               //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .defaultDpiContext
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                 
        _m024 uint16_t                    dpi;                               //{ +0x011c    +0x011c    +0x011c    } | .Dpi
        _m025 int1_t                      b_changed_gdi_gamma_ramp;          //{ +0x0120@0  +0x0120@0  +0x0120@0  } | .bChangedGdiGammaRamp
        _m026 int1_t                      b_read_screen_bits;                //{ +0x0120@1  +0x0120@1  +0x0120@1  } | .bReadScreenBits
        _m027 int1_t                      b_wrote_screen_bits;               //{ +0x0120@2  +0x0120@2  +0x0120@2  } | .bWroteScreenBits
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m028 uint32_t                    cookie;                            //{ +0x0124    } | .Cookie
                                                                           
        SDK_MAGIC_PROPERTIES( "_W32PROCESS.$", 0x128, true, 0xc45530b5d24f78b6 );                                 
        SDK_DYNAMIC_SIZE( w32process_t );                                  
    };                                                                     
};
#include "magic/w32process_t.end.hpp"
