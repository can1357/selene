#pragma once
#include <sdkgen/support_library.hpp>
#include "request_buffer_type_t.hpp"

namespace nt  { struct mdl_t;              }
namespace wdf { class i_fx_memory_t;       }
namespace wdf { struct wdfmemory_offset_t; }

#include "magic/request_buffer_t.start.hpp"
namespace fx
{
    // [struct FxRequestBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_buffer_t                                        
    {                                                              
        struct u0_memory_t                                         
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                     
            _m01 class wdf::i_fx_memory_t*       memory;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Memory
            _m02 struct wdf::wdfmemory_offset_t* offsets;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Offsets
                                                                   
            SDK_MAGIC_PROPERTIES( "FxRequestBuffer.Memory.$", 0x10, true, 0xcc584ad934c6dcb6 );                  
            SDK_FIXED_SIZE( u0_memory_t, 0x10 );                   
        };                                                         
                                                                   
        struct u4_mdl_t                                            
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                                     
            _m04 struct nt::mdl_t* mdl;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mdl
            _m05 uint32_t          length;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                   
            SDK_MAGIC_PROPERTIES( "FxRequestBuffer.Mdl.$", 0x10, true, 0xaac8be3b58312a34 );                 
            SDK_FIXED_SIZE( u4_mdl_t, 0x10 );                      
        };                                                         
                                                                   
        struct u8_buffer_t                                         
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                                     
            _m07 void*    buffer;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
            _m08 uint32_t length;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                   
            SDK_MAGIC_PROPERTIES( "FxRequestBuffer.Buffer.$", 0x10, true, 0x966b5ce3c2e2586c );                 
            SDK_FIXED_SIZE( u8_buffer_t, 0x10 );                   
        };                                                         
                                                                   
        struct u12_ref_mdl_t                                       
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                     
            _m10 class wdf::i_fx_memory_t*       memory;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Memory
            _m11 struct wdf::wdfmemory_offset_t* offsets;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Offsets
            _m12 struct nt::mdl_t*               mdl;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Mdl
                                                                   
            SDK_MAGIC_PROPERTIES( "FxRequestBuffer.RefMdl.$", 0x18, true, 0x3c45d36482b9491f );                  
            SDK_FIXED_SIZE( u12_ref_mdl_t, 0x18 );                  
        };                                                         
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                         
        _m00 enum fx::request_buffer_type_t              data_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataType
        _m03 u0_memory_t                                 memory;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Memory
        _m06 u4_mdl_t                                    mdl;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Mdl
        _m09 u8_buffer_t                                 buffer;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m13 u12_ref_mdl_t                               ref_mdl;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefMdl
                                                                   
        SDK_MAGIC_PROPERTIES( "FxRequestBuffer.$", 0x20, true, 0x2ff9e58eb28eed98 );          
        SDK_FIXED_SIZE( request_buffer_t, 0x20 );                  
    };                                                             
};
#include "magic/request_buffer_t.end.hpp"
SDK_VERIFY( struct fx::request_buffer_t::u0_memory_t, 0x10 );
SDK_VERIFY( struct fx::request_buffer_t::u4_mdl_t, 0x10 );
SDK_VERIFY( struct fx::request_buffer_t::u8_buffer_t, 0x10 );
SDK_VERIFY( struct fx::request_buffer_t::u12_ref_mdl_t, 0x18 );
SDK_VERIFY( struct fx::request_buffer_t, 0x20 );
