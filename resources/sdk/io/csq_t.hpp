#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/csq_t.start.hpp"
namespace io
{
    struct csq_t;

    // [struct _IO_CSQ]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csq_t                                                                        
    {                                                                                   
        using csq_insert_irp_t =            sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*;                          
        using csq_remove_irp_t =            sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*;                          
        using pio_csq_peek_next_irp_t =     sdk::function<struct nt::irp_t*(struct io::csq_t*, struct nt::irp_t*, void*)>*;                          
        using pio_csq_acquire_lock_t =      sdk::function<void(struct io::csq_t*, uint8_t*)>*;                          
        using csq_complete_canceled_irp_t = sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*;                          
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                              
        _m00 uint32_t                                         type;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 csq_insert_irp_t                                 csq_insert_irp;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CsqInsertIrp
        _m02 csq_remove_irp_t                                 csq_remove_irp;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CsqRemoveIrp
        _m03 pio_csq_peek_next_irp_t                          csq_peek_next_irp;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CsqPeekNextIrp
        _m04 pio_csq_acquire_lock_t                           csq_acquire_lock;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CsqAcquireLock
        _m05 sdk::function<void(struct io::csq_t*, uint8_t)>* csq_release_lock;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CsqReleaseLock
        _m06 csq_complete_canceled_irp_t                      csq_complete_canceled_irp;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CsqCompleteCanceledIrp
        _m07 void*                                            reserve_pointer;            //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ReservePointer
                                                                                        
        SDK_NONVOL_PROPERTIES( "_IO_CSQ.$", 0x40, true, 0xd8bab77e1fb82087 );                          
        SDK_FIXED_SIZE( csq_t, 0x40 );                                                  
    };                                                                                  
};
#include "magic/csq_t.end.hpp"
SDK_VERIFY( struct io::csq_t, 0x40 );
