#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_descriptor_type_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/memory_descriptor_v1_5_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;
    struct wdfmemory_offset_v1_5_t;

    // [struct _WDF_MEMORY_DESCRIPTOR_V1_5]
    // => Windows 10 v1607
    //
    struct memory_descriptor_v1_5_t                                       
    {                                                                     
        struct u0_buffer_type_t                                           
        {                                                                 
            // Windows 10 v1607                                           
            //                                                            
            _m01 void*    buffer;                                           //{ +0x0000    } | .Buffer
            _m02 uint32_t length;                                           //{ +0x0008    } | .Length
                                                                          
            SDK_MAGIC_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR_V1_5.BufferType.$", 0x0, false, 0x9eb9aff30231c0a5 );                   
            SDK_FIXED_SIZE( u0_buffer_type_t, 0x10 );                     
        };                                                                
                                                                          
        struct u1_mdl_type_t                                              
        {                                                                 
            // Windows 10 v1607                                           
            //                                                            
            _m04 struct nt::mdl_t* mdl;                                     //{ +0x0000    } | .Mdl
            _m05 uint32_t          buffer_length;                           //{ +0x0008    } | .BufferLength
                                                                          
            SDK_MAGIC_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR_V1_5.MdlType.$", 0x0, false, 0x6976a44f35b07796 );                          
            SDK_FIXED_SIZE( u1_mdl_type_t, 0x10 );                          
        };                                                                
                                                                          
        struct u2_handle_type_t                                           
        {                                                                 
            // Windows 10 v1607                                           
            //                                                            
            _m07 struct wdf::wdfmemory_t*             memory;               //{ +0x0000    } | .Memory
            _m08 struct wdf::wdfmemory_offset_v1_5_t* offsets;              //{ +0x0008    } | .Offsets
                                                                          
            SDK_MAGIC_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR_V1_5.HandleType.$", 0x0, false, 0x9f9b8442ef10c29 );                    
            SDK_FIXED_SIZE( u2_handle_type_t, 0x10 );                     
        };                                                                
                                                                          
        // Windows 10 v1607                                               
        //                                                                
        _m00 enum wdf::memory_descriptor_type_t               type;         //{ +0x0000    } | .Type
        _m03 u0_buffer_type_t                                 buffer_type;  //{ +0x0008    } | .BufferType
        _m06 u1_mdl_type_t                                    mdl_type;     //{ +0x0008    } | .MdlType
        _m09 u2_handle_type_t                                 handle_type;  //{ +0x0008    } | .HandleType
                                                                          
        SDK_MAGIC_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR_V1_5.$", 0x0, false, 0xfae5e8036cddaac9 );            
        SDK_FIXED_SIZE( memory_descriptor_v1_5_t, 0x18 );                 
    };                                                                    
};
#include "magic/memory_descriptor_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::memory_descriptor_v1_5_t::u0_buffer_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_v1_5_t::u1_mdl_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_v1_5_t::u2_handle_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_v1_5_t, 0x18 );
