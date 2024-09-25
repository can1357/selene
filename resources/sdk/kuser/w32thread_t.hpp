#pragma once
#include <sdkgen/support_library.hpp>
#include "tlspritestate_t.hpp"
#include "dpi_hosting_behavior_t.hpp"

namespace nt  { struct ethread_t;                }
namespace tag { struct dpicontextinfo_t;         }
namespace tag { struct dpihostingbehaviorinfo_t; }

#include "magic/w32thread_t.start.hpp"
namespace kuser
{
    struct tl_t;

    // [struct _W32THREAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct w32thread_t                                                                 
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                             
        _m000 struct nt::ethread_t*                 p_e_thread;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pEThread
        _m001 uint32_t                              ref_count;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m002 struct kuser::tl_t*                   ptl_w32;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ptlW32
        _m003 void*                                 pgdi_dcattr;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pgdiDcattr
        _m004 void*                                 pgdi_brush_attr;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pgdiBrushAttr
        _m005 nt::list_entry_t                      umpdobj_list;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UMPDOBJList
        _m006 void*                                 p_umpd_heap;                         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pUMPDHeap
        _m007 void*                                 p_proxy_port;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pProxyPort
        _m008 void*                                 p_client_id;                         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pClientID
        _m009 void*                                 dx_thread;                           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DxThread
        _m010 nt::list_entry_t                      gdi_tmp_tgo_list;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GdiTmpTgoList
        _m011 uint32_t                              p_rb_recursion_count;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pRBRecursionCount
        _m012 uint32_t                              p_non_rb_recursion_count;            //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .pNonRBRecursionCount
        _m013 struct kuser::tlspritestate_t         tl_sprite_state;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .tlSpriteState
        _m014 void*                                 p_sprite_state;                      //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .pSpriteState
        _m015 void*                                 p_dev_ht_info;                       //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .pDevHTInfo
        _m016 uint32_t                              ul_dev_ht_info_uniqueness;           //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .ulDevHTInfoUniqueness
        _m017 void*                                 pdco_aa;                             //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .pdcoAA
        _m018 void*                                 pdco_render;                         //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .pdcoRender
        _m019 void*                                 pdco_src;                            //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .pdcoSrc
        _m020 varint_t                              b_enable_eng_update_device_surface;  //{ +0x0148    +0x0148@0  +0x0148@0  +0x0148@0  } | .bEnableEngUpdateDeviceSurface
        _m021 varint_t                              b_include_sprites;                   //{ +0x0149    +0x0148@1  +0x0148@1  +0x0148@1  } | .bIncludeSprites
        _m022 varint_t                              b_enable_app_container_rendering;    //{ +0x014a    +0x0148@3  +0x0148@2  +0x0148@3  } | .bEnableAppContainerRendering
        _m023 uint32_t                              ul_window_system_rendering;          //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .ulWindowSystemRendering
        _m024 uint32_t                              i_vis_rgn_uniqueness;                //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .iVisRgnUniqueness
        _m025 uint32_t                              dpi_context;                         //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .dpiContext
        _m026 void*                                 p_umfd_tls;                          //{ +0x0158    +0x0160    +0x0160    +0x0160    } | .pUmfdTls
        _m027 struct tag::dpicontextinfo_t*         pdci;                                //{ +0x0160    +0x0168    +0x0168    +0x0168    } | .pdci
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                             
        _m028 int1_t                                b_snap_window_screen_access;         //{ +0x0148@4  +0x0148@3  +0x0148@4  } | .bSnapWindowScreenAccess
        _m029 int1_t                                b_gdi_eng_mode;                      //{ +0x0148@5  +0x0148@4  +0x0148@5  } | .bGdiEngMode
        _m030 enum kuser::dpi_hosting_behavior_t    dpi_hosting_behavior;                //{ +0x0158    +0x0158    +0x0158    } | .dpiHostingBehavior
        _m031 struct tag::dpihostingbehaviorinfo_t* pdhbi;                               //{ +0x0170    +0x0170    +0x0170    } | .pdhbi
        _m032 uint32_t                              ul_d_comp_quota_guard_count;         //{ +0x0178    +0x0178    +0x0178    } | .ulDCompQuotaGuardCount
                                                                                       
        // Windows 10 v2004, Windows 10 v20H2                                          
        //                                                                             
        _m033 int1_t                                b_per_mon_aware_virtualized;         //{ +0x0148@2  +0x0148@2  } | .bPerMonAwareVirtualized
                                                                                       
        SDK_MAGIC_PROPERTIES( "_W32THREAD.$", 0x180, true, 0x1c73020f7fc7b15a );                                   
        SDK_DYNAMIC_SIZE( w32thread_t );                                               
    };                                                                                 
};
#include "magic/w32thread_t.end.hpp"
