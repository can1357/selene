#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_encapsulation_t.hpp"

#include "magic/open_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OPEN_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct open_offload_t                                                   
    {                                                                       
        struct u0_encapsulation_t                                           
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                              
            _m03 uint32_t oid;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Oid
            _m04 void*    buffer;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
            _m05 uint32_t buffer_length;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferLength
                                                                            
            SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_OFFLOAD.Encapsulation.$", 0x18, true, 0x5e565009ae9a3a90 );                                        
            SDK_FIXED_SIZE( u0_encapsulation_t, 0x18 );                                        
        };                                                                  
                                                                            
        struct u4_task_t                                                    
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                              
            _m07 uint32_t oid;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Oid
            _m08 void*    buffer;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
            _m09 uint32_t buffer_length;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferLength
                                                                            
            SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_OFFLOAD.Task.$", 0x18, true, 0x579604a7945ff96e );                                        
            SDK_FIXED_SIZE( u4_task_t, 0x18 );                                        
        };                                                                  
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 struct ndis::offload_encapsulation_t set_encapsulation;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetEncapsulation
        _m01 uint8_t                              already_set_encapsulation;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AlreadySetEncapsulation
        _m02 struct ndis::offload_encapsulation_t xlate_encap;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .XlateEncap
        _m06 u0_encapsulation_t                   encapsulation;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Encapsulation
        _m10 u4_task_t                            task;                       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Task
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_OFFLOAD.$", 0x70, true, 0x628c0e70a47f609a );                          
        SDK_FIXED_SIZE( open_offload_t, 0x70 );                             
    };                                                                      
};
#include "magic/open_offload_t.end.hpp"
SDK_VERIFY( struct ndis::open_offload_t::u0_encapsulation_t, 0x18 );
SDK_VERIFY( struct ndis::open_offload_t::u4_task_t, 0x18 );
SDK_VERIFY( struct ndis::open_offload_t, 0x70 );
