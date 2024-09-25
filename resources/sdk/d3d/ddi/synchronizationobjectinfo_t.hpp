#pragma once
#include <sdkgen/support_library.hpp>
#include "synchronizationobject_type_t.hpp"

#include "magic/synchronizationobjectinfo_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO]
    // => WDK 10 (NV)
    //
    struct synchronizationobjectinfo_t                                         
    {                                                                          
        struct u0_synchronization_mutex_t                                      
        {                                                                      
            // WDK 10                                                          
            //                                                                 
            _m01 int32_t initial_state;                                          //{ +0x0000    } | .InitialState
                                                                               
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.SynchronizationMutex.$", 0x0, false, 0xc7f9705d18d715de );                                    
            SDK_FIXED_SIZE( u0_synchronization_mutex_t, 0x4 );                                    
        };                                                                     
                                                                               
        struct u1_semaphore_t                                                  
        {                                                                      
            // WDK 10                                                          
            //                                                                 
            _m03 uint32_t max_count;                                             //{ +0x0000    } | .MaxCount
            _m04 uint32_t initial_count;                                         //{ +0x0004    } | .InitialCount
                                                                               
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.Semaphore.$", 0x0, false, 0xcf5dcb1396778b70 );                                    
            SDK_FIXED_SIZE( u1_semaphore_t, 0x8 );                                    
        };                                                                     
                                                                               
        // WDK 10                                                              
        //                                                                     
        _m00 enum d3d::ddi::synchronizationobject_type_t type;                   //{ +0x0000    } | .Type
        _m02 u0_synchronization_mutex_t                  synchronization_mutex;  //{ +0x0004    } | .SynchronizationMutex
        _m05 u1_semaphore_t                              semaphore;              //{ +0x0004    } | .Semaphore
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.$", 0x0, false, 0x97dc729435ed2bbe );                      
        SDK_FIXED_SIZE( synchronizationobjectinfo_t, 0x44 );                      
    };                                                                         
};
#include "magic/synchronizationobjectinfo_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo_t::u0_synchronization_mutex_t, 0x4 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo_t::u1_semaphore_t, 0x8 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo_t, 0x44 );
