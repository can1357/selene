#pragma once
#include <sdkgen/support_library.hpp>
#include "integrated_display_child_t.hpp"
#include "video_output_capabilities_t.hpp"
#include "child_device_hpd_awareness_t.hpp"

#include "magic/child_capabilities_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CHILD_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct child_capabilities_t                                                                  
    {                                                                                            
        union u0_type_t                                                                          
        {                                                                                        
            struct u1_other_t                                                                    
            {                                                                                    
                // WDK 10                                                                        
                //                                                                               
                _m01 uint32_t must_be_zero;                                                        //{ +0x0000    } | .MustBeZero
                                                                                                 
                SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_CAPABILITIES.Type.Other.$", 0x0, false, 0xe8958bd625570731 );                                                    
                SDK_FIXED_SIZE( u1_other_t, 0x4 );                                                    
            };                                                                                   
                                                                                                 
            // WDK 10                                                                            
            //                                                                                   
            _m00 struct dxgk::video_output_capabilities_t video_output;                            //{ +0x0000    } | .VideoOutput
            _m02 u1_other_t                               other;                                   //{ +0x0000    } | .Other
            _m03 struct dxgk::integrated_display_child_t  integrated_display_child;                //{ +0x0000    } | .IntegratedDisplayChild
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_CAPABILITIES.Type.$", 0x0, false, 0xfc44f984ca507309 );                                       
            SDK_FIXED_SIZE( u0_type_t, 0xc );                                                    
        };                                                                                       
                                                                                                 
        // WDK 10                                                                                
        //                                                                                       
        _m04 u0_type_t                                                             type;           //{ +0x0000    } | .Type
        _m05 enum dxgk::child_device_hpd_awareness_t                               hpd_awareness;  //{ +0x000c    } | .HpdAwareness
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_CAPABILITIES.$", 0x0, false, 0x5a4a73d4a4bfafcb );              
        SDK_FIXED_SIZE( child_capabilities_t, 0x10 );                                            
    };                                                                                           
};
#include "magic/child_capabilities_t.end.hpp"
SDK_VERIFY( struct dxgk::child_capabilities_t::u0_type_t::u1_other_t, 0x4 );
SDK_VERIFY( union dxgk::child_capabilities_t::u0_type_t, 0xc );
SDK_VERIFY( struct dxgk::child_capabilities_t, 0x10 );
