#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scontext_queue_t.start.hpp"
namespace win
{
    struct ndr_scontext_t;

    // [struct _SCONTEXT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scontext_queue_t                                          
    {                                                                
        struct u0_array_of_objects_t                                 
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                               
            //                                                       
            _m01 sdk::array<void*, 2> pad;                             //{ +0x0000    +0x0000    +0x0000    } | .pad
            _m02 void*                user_context;                    //{ +0x0010    +0x0010    +0x0010    } | .userContext
                                                                     
            SDK_MAGIC_PROPERTIES( "_SCONTEXT_QUEUE.ArrayOfObjects.$", 0x18, true, 0x716464ba3bd1e88a );                               
            SDK_FIXED_SIZE( u0_array_of_objects_t, 0x18 );                               
        };                                                           
                                                                     
        using array_of_objects_t = sdk::variant<u0_array_of_objects_t**, struct win::ndr_scontext_t**>;                  
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              number_of_objects;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfObjects
        _m03 array_of_objects_t                    array_of_objects;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ArrayOfObjects
                                                                     
        SDK_MAGIC_PROPERTIES( "_SCONTEXT_QUEUE.$", 0x10, true, 0x7f900d748ac20fff );                  
        SDK_FIXED_SIZE( scontext_queue_t, 0x10 );                    
    };                                                               
};
#include "magic/scontext_queue_t.end.hpp"
SDK_VERIFY( struct win::scontext_queue_t::u0_array_of_objects_t, 0x18 );
SDK_VERIFY( struct win::scontext_queue_t, 0x10 );
