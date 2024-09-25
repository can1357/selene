#pragma once
#include <sdkgen/support_library.hpp>
#include "present_model_t.hpp"
#include "fence_presenthistorytoken_t.hpp"
#include "bltmodel_presenthistorytoken_t.hpp"
#include "gdimodel_presenthistorytoken_t.hpp"
#include "flipmodel_presenthistorytoken_t.hpp"
#include "composition_presenthistorytoken_t.hpp"
#include "flipmanager_presenthistorytoken_t.hpp"
#include "gdimodel_sysmem_presenthistorytoken_t.hpp"
#include "surfacecomplete_presenthistorytoken_t.hpp"

#include "magic/presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct presenthistorytoken_t                                                                          
    {                                                                                                     
        union u0_token_t                                                                                  
        {                                                                                                 
            using gdi_sys_mem_t =      struct d3dk::mt::gdimodel_sysmem_presenthistorytoken_t;                                        
            using composition_t =      struct d3dk::mt::composition_presenthistorytoken_t;                                        
            using flip_manager_t =     struct d3dk::mt::flipmanager_presenthistorytoken_t;                                        
            using surface_complete_t = struct d3dk::mt::surfacecomplete_presenthistorytoken_t;                                        
                                                                                                          
            // WDK 10                                                                                     
            //                                                                                            
            _m03 struct d3dk::mt::flipmodel_presenthistorytoken_t flip;                                     //{ +0x0000    } | .Flip
            _m04 struct d3dk::mt::bltmodel_presenthistorytoken_t  blt;                                      //{ +0x0000    } | .Blt
            _m05 uint64_t                                         vista_blt;                                //{ +0x0000    } | .VistaBlt
            _m06 struct d3dk::mt::gdimodel_presenthistorytoken_t  gdi;                                      //{ +0x0000    } | .Gdi
            _m07 struct d3dk::mt::fence_presenthistorytoken_t     fence;                                    //{ +0x0000    } | .Fence
            _m08 gdi_sys_mem_t                                    gdi_sys_mem;                              //{ +0x0000    } | .GdiSysMem
            _m09 composition_t                                    composition;                              //{ +0x0000    } | .Composition
            _m10 flip_manager_t                                   flip_manager;                             //{ +0x0000    } | .FlipManager
            _m11 surface_complete_t                               surface_complete;                         //{ +0x0000    } | .SurfaceComplete
                                                                                                          
            SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENTHISTORYTOKEN.Token.$", 0x0, false, 0x58b47ac0864a93ed );                                        
            SDK_FIXED_SIZE( u0_token_t, 0x428 );                                                          
        };                                                                                                
                                                                                                          
        // WDK 10                                                                                         
        //                                                                                                
        _m00 enum d3dk::mt::present_model_t                                        model;                   //{ +0x0000    } | .Model
        _m01 uint32_t                                                              token_size;              //{ +0x0004    } | .TokenSize
        _m02 uint64_t                                                              composition_binding_id;  //{ +0x0008    } | .CompositionBindingId
        _m12 u0_token_t                                                            token;                   //{ +0x0010    } | .Token
                                                                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENTHISTORYTOKEN.$", 0x0, false, 0xbce23f1462a72b91 );                       
        SDK_FIXED_SIZE( presenthistorytoken_t, 0x438 );                                                   
    };                                                                                                    
};
#include "magic/presenthistorytoken_t.end.hpp"
SDK_VERIFY( union d3dk::mt::presenthistorytoken_t::u0_token_t, 0x428 );
SDK_VERIFY( struct d3dk::mt::presenthistorytoken_t, 0x438 );
