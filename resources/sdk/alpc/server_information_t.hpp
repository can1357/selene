#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/server_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_SERVER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_information_t                            
    {                                                      
        struct u0_in_t                                     
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                             
            _m00 void* thread_handle;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadHandle
                                                           
            SDK_MAGIC_PROPERTIES( "_ALPC_SERVER_INFORMATION.In.$", 0x8, true, 0x3b2419099de2539a );                  
            SDK_FIXED_SIZE( u0_in_t, 0x8 );                  
        };                                                 
                                                           
        struct u4_out_t                                    
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                             
            _m02 uint8_t          thread_blocked;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadBlocked
            _m03 void*            connected_process_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectedProcessId
            _m04 nt::unicode_view connection_port_name;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ConnectionPortName
                                                           
            SDK_MAGIC_PROPERTIES( "_ALPC_SERVER_INFORMATION.Out.$", 0x20, true, 0x484d67698262e0d2 );                         
            SDK_FIXED_SIZE( u4_out_t, 0x20 );                         
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                                 
        _m01 u0_in_t                                   in;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .In
        _m05 u4_out_t                                  out;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Out
                                                           
        SDK_MAGIC_PROPERTIES( "_ALPC_SERVER_INFORMATION.$", 0x20, true, 0x83a88416a102f12 );    
        SDK_FIXED_SIZE( server_information_t, 0x20 );      
    };                                                     
};
#include "magic/server_information_t.end.hpp"
SDK_VERIFY( struct alpc::server_information_t::u0_in_t, 0x8 );
SDK_VERIFY( struct alpc::server_information_t::u4_out_t, 0x20 );
SDK_VERIFY( struct alpc::server_information_t, 0x20 );
