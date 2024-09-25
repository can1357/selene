#pragma once
#include <sdkgen/support_library.hpp>
#include "outdupl_pointer_shape_info_t.hpp"

#include "magic/outputdupl_get_pointer_shape_data_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA]
    // => WDK 10 (NV)
    //
    struct outputdupl_get_pointer_shape_data_t                                  
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                                      h_adapter;             //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                      vid_pn_source_id;      //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t                                      buffer_size_supplied;  //{ +0x0008    } | .BufferSizeSupplied
        _m03 void*                                         p_shape_buffer;        //{ +0x0010    } | .pShapeBuffer
        _m04 uint32_t                                      buffer_size_required;  //{ +0x0018    } | .BufferSizeRequired
        _m05 struct d3dk::mt::outdupl_pointer_shape_info_t shape_info;            //{ +0x001c    } | .ShapeInfo
                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.$", 0x0, false, 0xd4c59bc569a0ad03 );                     
        SDK_FIXED_SIZE( outputdupl_get_pointer_shape_data_t, 0x38 );                     
    };                                                                          
};
#include "magic/outputdupl_get_pointer_shape_data_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_get_pointer_shape_data_t, 0x38 );
