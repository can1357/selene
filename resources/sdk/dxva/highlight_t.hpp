#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/highlight_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Highlight]
    // => WDK 10 (NV)
    //
    struct highlight_t                              
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint16_t           w_highlight_active;   //{ +0x0000    } | .wHighlightActive
        _m01 uint16_t           w_highlight_indices;  //{ +0x0002    } | .wHighlightIndices
        _m02 uint16_t           w_highlight_alphas;   //{ +0x0004    } | .wHighlightAlphas
        _m03 struct tag::rect_t highlight_rect;       //{ +0x0006    } | .HighlightRect
                                                    
        SDK_NONVOL_PROPERTIES( "_DXVA_Highlight.$", 0x0, false, 0x5e690c7136ba13ea );                    
        SDK_FIXED_SIZE( highlight_t, 0x16 );                    
    };                                              
};
#include "magic/highlight_t.end.hpp"
SDK_VERIFY( struct dxva::highlight_t, 0x16 );
