#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_no_dynam_t.hpp"
#include "io_forward_progress_reserved_policy_t.hpp"
#include "../fx/io_queue_forward_progress_examine_irp_t.hpp"
#include "../fx/io_queue_forward_progress_allocate_resources_t.hpp"
#include "../fx/io_queue_forward_progress_allocate_resources_reserved_t.hpp"

#include "magic/fxio_forward_progress_context_t.start.hpp"
namespace wdf
{
    // [struct _FXIO_FORWARD_PROGRESS_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fxio_forward_progress_context_t                                                    
    {                                                                                         
        using m_io_reserved_resources_allocate_t = class fx::io_queue_forward_progress_allocate_resources_reserved_t;                                 
        using m_io_resources_allocate_t =          class fx::io_queue_forward_progress_allocate_resources_t;                                 
        using m_io_examine_irp_t =                 class fx::io_queue_forward_progress_examine_irp_t;                                 
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                    
        _m00 uint32_t                                        m_number_of_reserved_requests;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_NumberOfReservedRequests
        _m01 m_io_reserved_resources_allocate_t              m_io_reserved_resources_allocate;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_IoReservedResourcesAllocate
        _m02 m_io_resources_allocate_t                       m_io_resources_allocate;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_IoResourcesAllocate
        _m03 m_io_examine_irp_t                              m_io_examine_irp;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_IoExamineIrp
        _m04 enum wdf::io_forward_progress_reserved_policy_t m_policy;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Policy
        _m05 nt::list_entry_t                                m_reserved_request_list;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_ReservedRequestList
        _m06 nt::list_entry_t                                m_reserved_request_in_use_list;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_ReservedRequestInUseList
        _m07 nt::list_entry_t                                m_pended_irp_list;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_PendedIrpList
        _m08 class mx::lock_no_dynam_t                       m_pended_reserve_lock;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_PendedReserveLock
                                                                                              
        SDK_MAGIC_PROPERTIES( "_FXIO_FORWARD_PROGRESS_CONTEXT.$", 0x68, true, 0x22dcf2de79b68b2b );                                 
        SDK_FIXED_SIZE( fxio_forward_progress_context_t, 0x68 );                                 
    };                                                                                        
};
#include "magic/fxio_forward_progress_context_t.end.hpp"
SDK_VERIFY( struct wdf::fxio_forward_progress_context_t, 0x68 );
