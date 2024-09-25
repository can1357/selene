#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct m_interface_pointer_t; }

#include "magic/c_write_interface_data_marshaling_stream_t.start.hpp"
namespace win
{
    // [class CWriteInterfaceDataMarshalingStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_write_interface_data_marshaling_stream_t                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 volatile uint32_t                  c_refs;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 int32_t                            l_offset;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._lOffset
        _m02 int32_t                            cb_data_size;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._cbDataSize
        _m03 uint32_t                           cb_buffer_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cbBufferSize
        _m04 struct tag::m_interface_pointer_t* p_m_interface_pointer;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pMInterfacePointer
        _m05 int32_t                            f_free;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._fFree
                                                                      
        SDK_MAGIC_PROPERTIES( "CWriteInterfaceDataMarshalingStream.$", 0x30, true, 0x9034c334335da6c4 );                      
        SDK_FIXED_SIZE( c_write_interface_data_marshaling_stream_t, 0x30 );                      
    };                                                                
};
#include "magic/c_write_interface_data_marshaling_stream_t.end.hpp"
SDK_VERIFY( class win::c_write_interface_data_marshaling_stream_t, 0x30 );
