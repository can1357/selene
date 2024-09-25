#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_miniport_system_thread_context_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_MINIPORT_SYSTEM_THREAD_CONTEXT]
    // => Windows 11
    //
    struct raid_miniport_system_thread_context_t                  
    {                                                             
        union u0_state_flags_t                                    
        {                                                         
            // Windows 11                                         
            //                                                    
            _m00 uint1_t  initialized;                              //{ +0x0000@0  } | .Initialized
            _m01 uint32_t as_u_long;                                //{ +0x0000    } | .AsULong
                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.StateFlags.$", 0x0, false, 0x6c457e4161af7c7f );                                        
            SDK_FIXED_SIZE( u0_state_flags_t, 0x4 );                                        
        };                                                        
                                                                  
        // Windows 11                                             
        //                                                        
        _m02 u0_state_flags_t         state_flags;                  //{ +0x0000    } | .StateFlags
        _m03 uint32_t                 system_thread_max_count;      //{ +0x0004    } | .SystemThreadMaxCount
        _m04 uint32_t                 system_thread_current_count;  //{ +0x0008    } | .SystemThreadCurrentCount
                                                                  
        SDK_MAGIC_PROPERTIES( "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.$", 0x0, false, 0x358660e692ef5298 );                            
        SDK_FIXED_SIZE( raid_miniport_system_thread_context_t, 0x10 );                            
    };                                                            
};
#include "magic/raid_miniport_system_thread_context_t.end.hpp"
SDK_VERIFY( union stor::port::raid_miniport_system_thread_context_t::u0_state_flags_t, 0x4 );
SDK_VERIFY( struct stor::port::raid_miniport_system_thread_context_t, 0x10 );
