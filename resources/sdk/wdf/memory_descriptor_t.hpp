#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_descriptor_type_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/memory_descriptor_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;
    struct wdfmemory_offset_t;

    // [struct _WDF_MEMORY_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct memory_descriptor_t                                       
    {                                                                
        struct u0_buffer_type_t                                      
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                                       
            _m01 void*    buffer;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
            _m02 uint32_t length;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                     
            SDK_NONVOL_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR.BufferType.$", 0x10, true, 0xd6293e2856894bff );                   
            SDK_FIXED_SIZE( u0_buffer_type_t, 0x10 );                   
        };                                                           
                                                                     
        struct u5_mdl_type_t                                         
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                       
            _m04 struct nt::mdl_t* mdl;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Mdl
            _m05 uint32_t          buffer_length;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferLength
                                                                     
            SDK_NONVOL_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR.MdlType.$", 0x10, true, 0xd282b97335cfa29 );                          
            SDK_FIXED_SIZE( u5_mdl_type_t, 0x10 );                          
        };                                                           
                                                                     
        struct u10_handle_type_t                                     
        {                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                       
            _m07 struct wdf::wdfmemory_t*        memory;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Memory
            _m08 struct wdf::wdfmemory_offset_t* offsets;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offsets
                                                                     
            SDK_NONVOL_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR.HandleType.$", 0x10, true, 0x206377d65ae836b7 );                    
            SDK_FIXED_SIZE( u10_handle_type_t, 0x10 );                    
        };                                                           
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                           
        _m00 enum wdf::memory_descriptor_type_t          type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m03 u0_buffer_type_t                            buffer_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferType
        _m06 u5_mdl_type_t                               mdl_type;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MdlType
        _m09 u10_handle_type_t                           handle_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleType
                                                                     
        SDK_NONVOL_PROPERTIES( "_WDF_MEMORY_DESCRIPTOR.$", 0x18, true, 0xa754f2810bdc389c );            
        SDK_FIXED_SIZE( memory_descriptor_t, 0x18 );                 
    };                                                               
};
#include "magic/memory_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::memory_descriptor_t::u0_buffer_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_t::u5_mdl_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_t::u10_handle_type_t, 0x10 );
SDK_VERIFY( struct wdf::memory_descriptor_t, 0x18 );
